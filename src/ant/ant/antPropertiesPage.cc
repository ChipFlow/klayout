
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

#if defined(HAVE_QT)

#include "antPropertiesPage.h"
#include "layLayoutViewBase.h"
#include "layQtTools.h"
#include "tlException.h"

namespace ant
{

// -------------------------------------------------------------------------
//  PropertiesPage implementation

PropertiesPage::PropertiesPage (ant::Service *rulers, db::Manager *manager, QWidget *parent)
  : lay::PropertiesPage (parent, manager, rulers), mp_rulers (rulers), m_enable_cb_callback (true), m_in_text_changed (false)
{
  mp_rulers->get_selection (m_selection);
  m_pos = m_selection.begin ();

  setupUi (this);

  connect (swap_points, SIGNAL (clicked ()), this, SLOT (swap_points_clicked ()));

  connect (p1_to_layout, SIGNAL (clicked ()), this, SLOT (snap_to_layout_clicked ()));
  connect (p2_to_layout, SIGNAL (clicked ()), this, SLOT (snap_to_layout_clicked ()));
  connect (both_to_layout, SIGNAL (clicked ()), this, SLOT (snap_to_layout_clicked ()));

  swap_points->setEnabled (! readonly());
  p1_to_layout->setEnabled (! readonly());
  p2_to_layout->setEnabled (! readonly());
  both_to_layout->setEnabled (! readonly());

  if (! readonly ()) {

    connect (fmt_le, SIGNAL (editingFinished ()), this, SIGNAL (edited ()));
    connect (fmt_x_le, SIGNAL (editingFinished ()), this, SIGNAL (edited ()));
    connect (fmt_y_le, SIGNAL (editingFinished ()), this, SIGNAL (edited ()));
    connect (x0, SIGNAL (editingFinished ()), this, SIGNAL (edited ()));
    connect (x1, SIGNAL (editingFinished ()), this, SIGNAL (edited ()));
    connect (x2, SIGNAL (editingFinished ()), this, SIGNAL (edited ()));
    connect (y0, SIGNAL (editingFinished ()), this, SIGNAL (edited ()));
    connect (y1, SIGNAL (editingFinished ()), this, SIGNAL (edited ()));
    connect (y2, SIGNAL (editingFinished ()), this, SIGNAL (edited ()));

    connect (style_cb, SIGNAL (activated (int)), this, SIGNAL (edited ()));
    connect (outline_cb, SIGNAL (activated (int)), this, SIGNAL (edited ()));
    connect (main_position, SIGNAL (activated (int)), this, SIGNAL (edited ()));
    connect (main_xalign, SIGNAL (activated (int)), this, SIGNAL (edited ()));
    connect (main_yalign, SIGNAL (activated (int)), this, SIGNAL (edited ()));
    connect (xlabel_xalign, SIGNAL (activated (int)), this, SIGNAL (edited ()));
    connect (xlabel_yalign, SIGNAL (activated (int)), this, SIGNAL (edited ()));
    connect (ylabel_xalign, SIGNAL (activated (int)), this, SIGNAL (edited ()));
    connect (ylabel_yalign, SIGNAL (activated (int)), this, SIGNAL (edited ()));

    connect (points_edit, SIGNAL (textChanged ()), this, SLOT (text_changed ()));

  } else {

    fmt_le->setReadOnly (true);
    fmt_x_le->setReadOnly (true);
    fmt_y_le->setReadOnly (true);
    x1->setReadOnly (true);
    x2->setReadOnly (true);
    y1->setReadOnly (true);
    y2->setReadOnly (true);

  }

  lay::activate_help_links (help_label);

  mp_rulers->clear_highlights ();
}

PropertiesPage::~PropertiesPage ()
{
  mp_rulers->restore_highlights ();
}

void 
PropertiesPage::back ()
{
  m_pos = m_selection.end ();
}

void 
PropertiesPage::front ()
{
  m_pos = m_selection.begin ();
}

void
PropertiesPage::swap_points_clicked ()
{
  if (readonly ()) {
    return;
  }

  QString tx1 = x1->text (), tx2 = x2->text ();
  QString ty1 = y1->text (), ty2 = y2->text ();

  std::swap (tx1, tx2);
  std::swap (ty1, ty2);

  x1->setText (tx1);
  x2->setText (tx2);
  y1->setText (ty1);
  y2->setText (ty2);

  emit edited ();
}

void
PropertiesPage::get_points (db::DPoint &p1, db::DPoint &p2)
{
  double dx1 = 0.0, dy1 = 0.0, dx2 = 0.0, dy2 = 0.0;
  bool has_error = false;

  try {
    tl::from_string_ext (tl::to_string (x1->text ()), dx1);
    lay::indicate_error (x1, (tl::Exception *) 0);
  } catch (tl::Exception &ex) {
    lay::indicate_error (x1, &ex);
    has_error = true;
  }

  try {
    tl::from_string_ext (tl::to_string (x2->text ()), dx2);
    lay::indicate_error (x2, (tl::Exception *) 0);
  } catch (tl::Exception &ex) {
    lay::indicate_error (x2, &ex);
    has_error = true;
  }

  try {
    tl::from_string_ext (tl::to_string (y1->text ()), dy1);
    lay::indicate_error (y1, (tl::Exception *) 0);
  } catch (tl::Exception &ex) {
    lay::indicate_error (y1, &ex);
    has_error = true;
  }

  try {
    tl::from_string_ext (tl::to_string (y2->text ()), dy2);
    lay::indicate_error (y2, (tl::Exception *) 0);
  } catch (tl::Exception &ex) {
    lay::indicate_error (y2, &ex);
    has_error = true;
  }

  if (has_error) {
    throw tl::Exception (tl::to_string (tr ("At least one value is invalid - see highlighted entry fields")));
  }

  p1 = db::DPoint (dx1, dy1);
  p2 = db::DPoint (dx2, dy2);
}

void
PropertiesPage::get_point (db::DPoint &p)
{
  double dx = 0.0, dy = 0.0;
  bool has_error = false;

  try {
    tl::from_string_ext (tl::to_string (x0->text ()), dx);
    lay::indicate_error (x0, (tl::Exception *) 0);
  } catch (tl::Exception &ex) {
    lay::indicate_error (x0, &ex);
    has_error = true;
  }

  try {
    tl::from_string_ext (tl::to_string (y0->text ()), dy);
    lay::indicate_error (y0, (tl::Exception *) 0);
  } catch (tl::Exception &ex) {
    lay::indicate_error (y0, &ex);
    has_error = true;
  }

  if (has_error) {
    throw tl::Exception (tl::to_string (tr ("At least one value is invalid - see highlighted entry fields")));
  }

  p = db::DPoint (dx, dy);
}

void
PropertiesPage::get_points (ant::Object::point_list &points)
{
  std::string coordinates = tl::to_string (points_edit->toPlainText ());
  points.clear ();

  try {

    tl::Extractor ex (coordinates.c_str ());
    while (! ex.at_end ()) {
      double x = 0.0, y = 0.0;
      ex.read (x);
      ex.test (",");
      ex.read (y);
      ex.test (";");
      ex.test (",");
      points.push_back (db::DPoint (x, y));
    }

    lay::indicate_error (points_edit, (tl::Exception *) 0);

  } catch (tl::Exception &ex) {
    lay::indicate_error (points_edit, &ex);
    throw tl::Exception (tl::to_string (tr ("At least one value is invalid - see highlighted entry fields")));
  }
}

void
PropertiesPage::text_changed ()
{
  if (m_in_text_changed) {
    return;
  }

  try {
    m_in_text_changed = true;
    update_with (get_object ());
    emit edited ();
    m_in_text_changed = false;
  } catch (...) {
    m_in_text_changed = false;
    //  ignore exceptions - the edit field will be highlighted anyway
  }
}

void
PropertiesPage::snap_to_layout_clicked ()
{
  if (readonly ()) {
    return;
  }

  ant::Service *service = dynamic_cast<ant::Service *> (editable ());
  tl_assert (service != 0);

  db::DPoint p1, p2;
  get_points (p1, p2);

  ant::Object r = current ();

  //  for auto-metric we need some cutline constraint - any or global won't do.
  lay::angle_constraint_type ac = r.angle_constraint ();
  if (ac == lay::AC_Global) {
    ac = service->snap_mode ();
  }
  if (ac == lay::AC_Global) {
    ac = lay::AC_Diagonal;
  }

  db::DVector g;
  if (service->grid_snap ()) {
    g = db::DVector (service->grid (), service->grid ());
  }

  if (sender () == p1_to_layout || sender () == p2_to_layout) {

    bool snap_p1 = sender () == p1_to_layout;

    double snap_range = service->ui ()->mouse_event_trans ().inverted ().ctrans (service->snap_range ());
    double max_range = 1000 * snap_range;

    while (snap_range < max_range) {

      lay::PointSnapToObjectResult pp = lay::obj_snap (service->view (), snap_p1 ? p2 : p1, snap_p1 ? p1 : p2, g, ac, snap_range);
      if (pp.object_snap != lay::PointSnapToObjectResult::NoObject) {

        QString xs = tl::to_qstring (tl::micron_to_string (pp.snapped_point.x ()));
        QString ys = tl::to_qstring (tl::micron_to_string (pp.snapped_point.y ()));

        if (sender () == p1_to_layout) {
          x1->setText (xs);
          y1->setText (ys);
        } else {
          x2->setText (xs);
          y2->setText (ys);
        }

        emit edited ();

        break;

      }

      //  no point found -> one more iteration with increased range
      snap_range *= 2.0;

    }

  } else {

    double snap_range = service->ui ()->mouse_event_trans ().inverted ().ctrans (service->snap_range ());
    snap_range *= 0.5;

    lay::TwoPointSnapToObjectResult ee = lay::obj_snap2 (service->view (), p1, p2, g, ac, snap_range, snap_range * 1000.0);
    if (ee.any) {

      x1->setText (tl::to_qstring (tl::micron_to_string (ee.first.x ())));
      y1->setText (tl::to_qstring (tl::micron_to_string (ee.first.y ())));
      x2->setText (tl::to_qstring (tl::micron_to_string (ee.second.x ())));
      y2->setText (tl::to_qstring (tl::micron_to_string (ee.second.y ())));

      emit edited ();

    }

  }
}

const ant::Object &
PropertiesPage::current () const
{
  const ant::Object *ruler = dynamic_cast <const ant::Object *> ((*m_pos)->ptr ());
  return *ruler;
}

bool 
PropertiesPage::at_begin () const
{
  return (m_pos == m_selection.begin ());
}

bool 
PropertiesPage::at_end () const
{
  return (m_pos == m_selection.end ());
}

void 
PropertiesPage::operator-- ()
{
  --m_pos;
}

void 
PropertiesPage::operator++ ()
{
  ++m_pos;
}

void
PropertiesPage::leave ()
{
  mp_rulers->clear_highlights ();
}

void 
PropertiesPage::update ()
{
  mp_rulers->highlight (std::distance (m_selection.begin (), m_pos));
  update_with (current ());
}

void
PropertiesPage::update_with (const ant::Object &obj)
{
  fmt_le->setText (tl::to_qstring (obj.fmt ()));
  fmt_x_le->setText (tl::to_qstring (obj.fmt_x ()));
  fmt_y_le->setText (tl::to_qstring (obj.fmt_y ()));
  style_cb->setCurrentIndex (obj.style ());
  outline_cb->setCurrentIndex (obj.outline ());

  main_position->setCurrentIndex (obj.main_position ());
  main_xalign->setCurrentIndex (obj.main_xalign ());
  main_yalign->setCurrentIndex (obj.main_yalign ());
  xlabel_xalign->setCurrentIndex (obj.xlabel_xalign ());
  xlabel_yalign->setCurrentIndex (obj.xlabel_yalign ());
  ylabel_xalign->setCurrentIndex (obj.ylabel_xalign ());
  ylabel_yalign->setCurrentIndex (obj.ylabel_yalign ());

  int tab = 2;
  if (obj.points ().size () == 1) {
    tab = 0;
  } else if (obj.points ().size () == 2) {
    tab = 1;
  }

  if (! m_in_text_changed) {
    segments_tab->setCurrentIndex (tab);
  }

  point_list->clear ();
  for (auto p = obj.points ().begin (); p != obj.points ().end (); ++p) {
    QTreeWidgetItem *item = new QTreeWidgetItem (point_list);
    item->setData (0, Qt::DisplayRole, QVariant (tl::to_qstring (tl::micron_to_string (p->x ()))));
    item->setData (1, Qt::DisplayRole, QVariant (tl::to_qstring (tl::micron_to_string (p->y ()))));
  }

  if (! m_in_text_changed) {

    std::string text;
    for (auto p = obj.points ().begin (); p != obj.points ().end (); ++p) {
      text += tl::micron_to_string (p->x ());
      text += ", ";
      text += tl::micron_to_string (p->y ());
      text += "\n";
    }

    QSignalBlocker blocker (points_edit);
    points_edit->setPlainText (tl::to_qstring (text));

  }

  x0->setText (tl::to_qstring (tl::micron_to_string (obj.p1 ().x ())));
  x0->setCursorPosition (0);
  y0->setText (tl::to_qstring (tl::micron_to_string (obj.p1 ().y ())));
  y0->setCursorPosition (0);

  x1->setText (tl::to_qstring (tl::micron_to_string (obj.p1 ().x ())));
  x1->setCursorPosition (0);
  x2->setText (tl::to_qstring (tl::micron_to_string (obj.p2 ().x ())));
  x2->setCursorPosition (0);
  y1->setText (tl::to_qstring (tl::micron_to_string (obj.p1 ().y ())));
  y1->setCursorPosition (0);
  y2->setText (tl::to_qstring (tl::micron_to_string (obj.p2 ().y ())));
  y2->setCursorPosition (0);

  double sx = (obj.p2 ().x () - obj.p1 ().x ());
  double sy = (obj.p2 ().y () - obj.p1 ().y ());
  dx->setText (tl::to_qstring (tl::micron_to_string (sx)));
  dx->setCursorPosition (0);
  dy->setText (tl::to_qstring (tl::micron_to_string (sy)));
  dy->setCursorPosition (0);
  dd->setText (tl::to_qstring (tl::micron_to_string (sqrt (sx * sx + sy * sy))));
  dd->setCursorPosition (0);
}

bool 
PropertiesPage::readonly ()
{
  return false;
}

void 
PropertiesPage::apply ()
{
  mp_rulers->change_ruler (*m_pos, get_object ());
}

ant::Object
PropertiesPage::get_object ()
{
  ant::Object ruler;

  std::string fmt = tl::to_string (fmt_le->text ());
  std::string fmt_x = tl::to_string (fmt_x_le->text ());
  std::string fmt_y = tl::to_string (fmt_y_le->text ());
  Object::style_type style = Object::style_type (style_cb->currentIndex ());
  Object::outline_type outline = Object::outline_type (outline_cb->currentIndex ());

  if (segments_tab->currentIndex () == 0 || segments_tab->currentIndex () == 1) {

    db::DPoint p1, p2;
    if (segments_tab->currentIndex () == 1) {
      get_points (p1, p2);
    } else {
      get_point (p1);
      p2 = p1;
    }

    ruler = ant::Object (p1, p2, current ().id (), fmt_x, fmt_y, fmt, style, outline, current ().snap (), current ().angle_constraint ());

  } else if (segments_tab->currentIndex () == 2 || segments_tab->currentIndex () == 3) {

    ant::Object::point_list points;
    get_points (points);

    ruler = ant::Object (points, current ().id (), fmt_x, fmt_y, fmt, style, outline, current ().snap (), current ().angle_constraint ());

  }

  ruler.set_main_position (Object::position_type (main_position->currentIndex ()));
  ruler.set_main_xalign (Object::alignment_type (main_xalign->currentIndex ()));
  ruler.set_main_yalign (Object::alignment_type (main_yalign->currentIndex ()));
  ruler.set_xlabel_xalign (Object::alignment_type (xlabel_xalign->currentIndex ()));
  ruler.set_xlabel_yalign (Object::alignment_type (xlabel_yalign->currentIndex ()));
  ruler.set_ylabel_xalign (Object::alignment_type (ylabel_xalign->currentIndex ()));
  ruler.set_ylabel_yalign (Object::alignment_type (ylabel_yalign->currentIndex ()));

  ruler.set_category (current ().category ());

  return ruler;
}

}

#endif
