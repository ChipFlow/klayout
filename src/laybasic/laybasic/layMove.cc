
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2019 Matthias Koefferlein

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



#include "layMove.h"
#include "layEditable.h"
#include "layLayoutView.h"
#include "laySelector.h"
#include "laybasicConfig.h"

namespace lay
{

// -------------------------------------------------------------
//  MoveService implementation

MoveService::MoveService (lay::LayoutView *view)
  : QObject (),
    lay::ViewService (view->view_object_widget ()), 
    m_dragging (false),
    mp_editables (view),
    mp_view (view),
    m_global_grid (0.001)
{ 
  //  .. nothing yet ..
}

MoveService::~MoveService ()
{
  drag_cancel ();
}

void  
MoveService::deactivated ()
{
  m_shift = db::DPoint ();
  mp_view->clear_transient_selection ();
  drag_cancel ();
}

lay::angle_constraint_type 
ac_from_buttons (unsigned int buttons)
{
  if ((buttons & lay::ShiftButton) != 0) {
    if ((buttons & lay::ControlButton) != 0) {
      return lay::AC_Any;
    } else {
      return lay::AC_Ortho;
    }
  } else {
    if ((buttons & lay::ControlButton) != 0) {
      return lay::AC_Diagonal;
    } else {
      return lay::AC_Global;
    }
  }
}

bool
MoveService::configure (const std::string &name, const std::string &value)
{
  if (name == cfg_grid) {
    tl::from_string (value, m_global_grid);
  }
  return false;  //  not taken
}

bool
MoveService::key_event (unsigned int key, unsigned int /*buttons*/)
{
  double dx = 0.0, dy = 0.0;
  if (int (key) == Qt::Key_Down) {
    dy = -1.0;
  } else if (int (key) == Qt::Key_Up) {
    dy = 1.0;
  } else if (int (key) == Qt::Key_Left) {
    dx = -1.0;
  } else if (int (key) == Qt::Key_Right) {
    dx = 1.0;
  }

  if (! m_dragging && fabs (dx + dy) > 0.0 && mp_editables->selection_size () > 0) {

    //  determine a shift distance which is 2, 5 or 10 times the grid and is more than 5 pixels
    double dmin = double (5 /*pixels min shift*/) / widget ()->mouse_event_trans ().mag ();
    double d = m_global_grid;
    while (d < dmin) {
      d *= 2.0;
      if (d < dmin) {
        d *= 2.5;
        if (d < dmin) {
          d *= 2.0;
        }
      } 
    }

    db::DVector s = db::DVector (dx * d, dy * d);
    m_shift += s;

    std::string pos = std::string ("dx: ") + tl::micron_to_string (m_shift.x ()) + "  dy: " + tl::micron_to_string (m_shift.y ());
    mp_view->message (pos);

    mp_editables->transform (db::DCplxTrans (s));

    return true;

  } else {
    return false;
  }
}

bool 
MoveService::mouse_move_event (const db::DPoint &p, unsigned int buttons, bool prio) 
{
  bool ret = false;

  if (m_dragging) {

    set_cursor (lay::Cursor::size_all);
    mp_editables->move (p, ac_from_buttons (buttons));

  } else if (prio) {

    lay::SelectionService *selector = mp_view->selection_service ();
    if (selector) {
      ret = selector->mouse_move_event (p, buttons, prio);
    }

  }

  return ret;  // not taken to allow the mouse tracker to receive events as well
}

bool 
MoveService::mouse_click_event (const db::DPoint &p, unsigned int buttons, bool prio)
{
  if (prio && (buttons & lay::RightButton) != 0 && m_dragging) {
    if ((buttons & lay::ShiftButton) != 0) {
      mp_editables->move_transform (p, db::DFTrans (db::DFTrans::m90), ac_from_buttons (buttons));
    } else {
      mp_editables->move_transform (p, db::DFTrans (db::DFTrans::r90), ac_from_buttons (buttons));
    }
    return true;
  } 
  if (prio && (buttons & lay::LeftButton) != 0) {
    if (handle_dragging (p, buttons)) {
      return true;
    }
  } 
  if (prio) {
    lay::SelectionService *selector = mp_view->selection_service ();
    if (selector) {
      return selector->mouse_click_event (p, buttons, prio);
    }
  }
  return false;
}

bool 
MoveService::mouse_double_click_event (const db::DPoint &p, unsigned int buttons, bool prio)
{
  if (prio) {
    lay::SelectionService *selector = mp_view->selection_service ();
    if (selector) {
      return selector->mouse_double_click_event (p, buttons, prio);
    }
  }
  return false;
}

bool 
MoveService::mouse_release_event (const db::DPoint &p, unsigned int buttons, bool prio) 
{ 
  if (prio) {
    lay::SelectionService *selector = mp_view->selection_service ();
    if (selector) {
      return selector->mouse_release_event (p, buttons, prio);
    }
  }
  return false;
}

bool 
MoveService::wheel_event (int delta, bool horizontal, const db::DPoint &p, unsigned int buttons, bool prio)
{
  if (prio) {
    lay::SelectionService *selector = mp_view->selection_service ();
    if (selector) {
      return selector->wheel_event (delta, horizontal, p, buttons, prio);
    }
  }
  return false;
}

bool 
MoveService::mouse_press_event (const db::DPoint &p, unsigned int buttons, bool prio)
{
  if (prio && (buttons & lay::LeftButton) != 0) {
    if (handle_dragging (p, buttons)) {
      return true;
    }
  } 
  if (prio) {
    lay::SelectionService *selector = mp_view->selection_service ();
    if (selector) {
      return selector->mouse_press_event (p, buttons, prio);
    }
  }
  return false;
}


bool 
MoveService::handle_dragging (const db::DPoint &p, unsigned int buttons)
{
  if (! m_dragging) {

    if (mp_editables->begin_move (p, ac_from_buttons (buttons))) {

      lay::SelectionService *selector = mp_view->selection_service ();
      if (selector) {
        selector->hover_reset ();
      }
        
      mp_view->clear_transient_selection ();

      m_dragging = true;
      widget ()->grab_mouse (this, false);

      m_shift = db::DPoint ();

      return true;

    }

  } else {

    m_dragging = false;
    widget ()->ungrab_mouse (this);
    mp_editables->end_move (p, ac_from_buttons (buttons));
    return true;

  }
  return false;
}

void
MoveService::drag_cancel () 
{ 
  m_shift = db::DPoint ();
  if (m_dragging) {
    mp_editables->edit_cancel ();
    widget ()->ungrab_mouse (this);
    m_dragging = false;
  }
}

}

