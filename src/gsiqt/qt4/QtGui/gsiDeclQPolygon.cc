
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2024 Matthias Koefferlein

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

/**
*  @file gsiDeclQPolygon.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTransform>
#include <QMatrix>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPolygon

#include "dbPolygon.h"

  static QPolygon *ctor_QPolygon_from_polygon (const db::Polygon &pts)
  {
    QPolygon *p = new QPolygon ();
    p->reserve (int (pts.hull ().size ()));
    for (db::Polygon::polygon_contour_iterator q = pts.begin_hull (); q != pts.end_hull (); ++q) {
      p->push_back (QPoint ((*q).x (), (*q).y ()));
    }
    return p;
  }

  static QPolygon *ctor_QPolygon_from_simple_polygon (const db::SimplePolygon &pts)
  {
    QPolygon *p = new QPolygon ();
    p->reserve (int (pts.hull ().size ()));
    for (db::SimplePolygon::polygon_contour_iterator q = pts.begin_hull (); q != pts.end_hull (); ++q) {
      p->push_back (QPoint ((*q).x (), (*q).y ()));
    }
    return p;
  }

  static QPolygon::const_iterator f_QPolygon_each_begin (const QPolygon *m)
  {
    return m->begin ();
  }

  static QPolygon::const_iterator f_QPolygon_each_end (const QPolygon *m)
  {
    return m->end ();
  }

  static QPoint f_QPolygon_at (const QPolygon *m, int i)
  {
    return m->at(i);
  }

  static QPoint f_QPolygon_front (const QPolygon *m)
  {
    return m->front();
  }

  static QPoint f_QPolygon_back (const QPolygon *m)
  {
    return m->back();
  }

  static int f_QPolygon_size (const QPolygon *m)
  {
    return m->size();
  }

  static void f_QPolygon_clear (QPolygon *m)
  {
    m->clear();
  }

  static void f_QPolygon_remove (QPolygon *m, int i)
  {
    m->remove (i);
  }

  static void f_QPolygon_insert (QPolygon *m, int i, const QPoint &p)
  {
    m->insert (i, p);
  }

  static void f_QPolygon_replace (QPolygon *m, int i, const QPoint &p)
  {
    m->replace (i, p);
  }

  static void f_QPolygon_pop_front (QPolygon *m)
  {
    m->pop_front ();
  }

  static void f_QPolygon_pop_back (QPolygon *m)
  {
    m->pop_back ();
  }

  static void f_QPolygon_push_front (QPolygon *m, const QPoint &p)
  {
    m->push_front (p);
  }

  static void f_QPolygon_push_back (QPolygon *m, const QPoint &p)
  {
    m->push_back (p);
  }

  static void f_QPolygon_reserve (QPolygon *m, int n)
  {
    m->reserve (n);
  }

  static void f_QPolygon_resize (QPolygon *m, int n)
  {
    m->resize (n);
  }

  static void f_QPolygon_fill (QPolygon *m, const QPoint &p, int n)
  {
    m->fill (p, n);
  }

//  Constructor QPolygon::QPolygon()


static void _init_ctor_QPolygon_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPolygon> ();
}

static void _call_ctor_QPolygon_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPolygon *> (new QPolygon ());
}


//  Constructor QPolygon::QPolygon(int size)


static void _init_ctor_QPolygon_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<int > (argspec_0);
  decl->set_return_new<QPolygon> ();
}

static void _call_ctor_QPolygon_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QPolygon *> (new QPolygon (arg1));
}


//  Constructor QPolygon::QPolygon(const QPolygon &a)


static void _init_ctor_QPolygon_2138 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("a");
  decl->add_arg<const QPolygon & > (argspec_0);
  decl->set_return_new<QPolygon> ();
}

static void _call_ctor_QPolygon_2138 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPolygon &arg1 = gsi::arg_reader<const QPolygon & >() (args, heap);
  ret.write<QPolygon *> (new QPolygon (arg1));
}


//  Constructor QPolygon::QPolygon(const QVector<QPoint> &v)


static void _init_ctor_QPolygon_2746 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("v");
  decl->add_arg<const QVector<QPoint> & > (argspec_0);
  decl->set_return_new<QPolygon> ();
}

static void _call_ctor_QPolygon_2746 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector<QPoint> &arg1 = gsi::arg_reader<const QVector<QPoint> & >() (args, heap);
  ret.write<QPolygon *> (new QPolygon (arg1));
}


//  Constructor QPolygon::QPolygon(const QRect &r, bool closed)


static void _init_ctor_QPolygon_2548 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("closed", true, "false");
  decl->add_arg<bool > (argspec_1);
  decl->set_return_new<QPolygon> ();
}

static void _call_ctor_QPolygon_2548 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  bool arg2 = args ? gsi::arg_reader<bool >() (args, heap) : gsi::arg_maker<bool >() (false, heap);
  ret.write<QPolygon *> (new QPolygon (arg1, arg2));
}


// QRect QPolygon::boundingRect()


static void _init_f_boundingRect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_boundingRect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QPolygon *)cls)->boundingRect ());
}


// bool QPolygon::containsPoint(const QPoint &pt, Qt::FillRule fillRule)


static void _init_f_containsPoint_c3356 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pt");
  decl->add_arg<const QPoint & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("fillRule");
  decl->add_arg<const qt_gsi::Converter<Qt::FillRule>::target_type & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_containsPoint_c3356 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  const qt_gsi::Converter<Qt::FillRule>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<Qt::FillRule>::target_type & >() (args, heap);
  ret.write<bool > ((bool)((QPolygon *)cls)->containsPoint (arg1, qt_gsi::QtToCppAdaptor<Qt::FillRule>(arg2).cref()));
}


// QPolygon QPolygon::intersected(const QPolygon &r)


static void _init_f_intersected_c2138 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QPolygon & > (argspec_0);
  decl->set_return<QPolygon > ();
}

static void _call_f_intersected_c2138 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPolygon &arg1 = gsi::arg_reader<const QPolygon & >() (args, heap);
  ret.write<QPolygon > ((QPolygon)((QPolygon *)cls)->intersected (arg1));
}


// void QPolygon::point(int i, int *x, int *y)


static void _init_f_point_c2457 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("x");
  decl->add_arg<int * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("y");
  decl->add_arg<int * > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_point_c2457 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int *arg2 = gsi::arg_reader<int * >() (args, heap);
  int *arg3 = gsi::arg_reader<int * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPolygon *)cls)->point (arg1, arg2, arg3);
}


// QPoint QPolygon::point(int i)


static void _init_f_point_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QPoint > ();
}

static void _call_f_point_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QPoint > ((QPoint)((QPolygon *)cls)->point (arg1));
}


// void QPolygon::putPoints(int index, int nPoints, int firstx, int firsty, ...)


static void _init_f_putPoints_2744 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("nPoints");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("firstx");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("firsty");
  decl->add_arg<int > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_putPoints_2744 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  int arg4 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPolygon *)cls)->putPoints (arg1, arg2, arg3, arg4);
}


// void QPolygon::putPoints(int index, int nPoints, const QPolygon &from, int fromIndex)


static void _init_f_putPoints_4115 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("nPoints");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("from");
  decl->add_arg<const QPolygon & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("fromIndex", true, "0");
  decl->add_arg<int > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_putPoints_4115 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const QPolygon &arg3 = gsi::arg_reader<const QPolygon & >() (args, heap);
  int arg4 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPolygon *)cls)->putPoints (arg1, arg2, arg3, arg4);
}


// void QPolygon::setPoint(int index, int x, int y)


static void _init_f_setPoint_2085 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("x");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("y");
  decl->add_arg<int > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setPoint_2085 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPolygon *)cls)->setPoint (arg1, arg2, arg3);
}


// void QPolygon::setPoint(int index, const QPoint &p)


static void _init_f_setPoint_2575 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("p");
  decl->add_arg<const QPoint & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setPoint_2575 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const QPoint &arg2 = gsi::arg_reader<const QPoint & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPolygon *)cls)->setPoint (arg1, arg2);
}


// void QPolygon::setPoints(int nPoints, int firstx, int firsty, ...)


static void _init_f_setPoints_2085 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nPoints");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("firstx");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("firsty");
  decl->add_arg<int > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setPoints_2085 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPolygon *)cls)->setPoints (arg1, arg2, arg3);
}


// QPolygon QPolygon::subtracted(const QPolygon &r)


static void _init_f_subtracted_c2138 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QPolygon & > (argspec_0);
  decl->set_return<QPolygon > ();
}

static void _call_f_subtracted_c2138 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPolygon &arg1 = gsi::arg_reader<const QPolygon & >() (args, heap);
  ret.write<QPolygon > ((QPolygon)((QPolygon *)cls)->subtracted (arg1));
}


// void QPolygon::translate(int dx, int dy)


static void _init_f_translate_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dx");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("dy");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_translate_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPolygon *)cls)->translate (arg1, arg2);
}


// void QPolygon::translate(const QPoint &offset)


static void _init_f_translate_1916 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("offset");
  decl->add_arg<const QPoint & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_translate_1916 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPolygon *)cls)->translate (arg1);
}


// QPolygon QPolygon::translated(int dx, int dy)


static void _init_f_translated_c1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dx");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("dy");
  decl->add_arg<int > (argspec_1);
  decl->set_return<QPolygon > ();
}

static void _call_f_translated_c1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<QPolygon > ((QPolygon)((QPolygon *)cls)->translated (arg1, arg2));
}


// QPolygon QPolygon::translated(const QPoint &offset)


static void _init_f_translated_c1916 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("offset");
  decl->add_arg<const QPoint & > (argspec_0);
  decl->set_return<QPolygon > ();
}

static void _call_f_translated_c1916 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  ret.write<QPolygon > ((QPolygon)((QPolygon *)cls)->translated (arg1));
}


// QPolygon QPolygon::united(const QPolygon &r)


static void _init_f_united_c2138 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QPolygon & > (argspec_0);
  decl->set_return<QPolygon > ();
}

static void _call_f_united_c2138 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPolygon &arg1 = gsi::arg_reader<const QPolygon & >() (args, heap);
  ret.write<QPolygon > ((QPolygon)((QPolygon *)cls)->united (arg1));
}


//  QPolygon ::operator *(const QPolygon &a, const QMatrix &m)
static QPolygon op_QPolygon_operator_star__4053(const QPolygon *_self, const QMatrix &m) {
  return ::operator *(*_self, m);
}

//  QPolygon ::operator *(const QPolygon &a, const QTransform &m)
static QPolygon op_QPolygon_operator_star__4380(const QPolygon *_self, const QTransform &m) {
  return ::operator *(*_self, m);
}


namespace gsi
{

static gsi::Methods methods_QPolygon () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPolygon::QPolygon()\nThis method creates an object of class QPolygon.", &_init_ctor_QPolygon_0, &_call_ctor_QPolygon_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPolygon::QPolygon(int size)\nThis method creates an object of class QPolygon.", &_init_ctor_QPolygon_767, &_call_ctor_QPolygon_767);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPolygon::QPolygon(const QPolygon &a)\nThis method creates an object of class QPolygon.", &_init_ctor_QPolygon_2138, &_call_ctor_QPolygon_2138);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPolygon::QPolygon(const QVector<QPoint> &v)\nThis method creates an object of class QPolygon.", &_init_ctor_QPolygon_2746, &_call_ctor_QPolygon_2746);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPolygon::QPolygon(const QRect &r, bool closed)\nThis method creates an object of class QPolygon.", &_init_ctor_QPolygon_2548, &_call_ctor_QPolygon_2548);
  methods += new qt_gsi::GenericMethod ("boundingRect", "@brief Method QRect QPolygon::boundingRect()\n", true, &_init_f_boundingRect_c0, &_call_f_boundingRect_c0);
  methods += new qt_gsi::GenericMethod ("containsPoint", "@brief Method bool QPolygon::containsPoint(const QPoint &pt, Qt::FillRule fillRule)\n", true, &_init_f_containsPoint_c3356, &_call_f_containsPoint_c3356);
  methods += new qt_gsi::GenericMethod ("intersected", "@brief Method QPolygon QPolygon::intersected(const QPolygon &r)\n", true, &_init_f_intersected_c2138, &_call_f_intersected_c2138);
  methods += new qt_gsi::GenericMethod ("point", "@brief Method void QPolygon::point(int i, int *x, int *y)\n", true, &_init_f_point_c2457, &_call_f_point_c2457);
  methods += new qt_gsi::GenericMethod ("point", "@brief Method QPoint QPolygon::point(int i)\n", true, &_init_f_point_c767, &_call_f_point_c767);
  methods += new qt_gsi::GenericMethod ("putPoints", "@brief Method void QPolygon::putPoints(int index, int nPoints, int firstx, int firsty, ...)\n", false, &_init_f_putPoints_2744, &_call_f_putPoints_2744);
  methods += new qt_gsi::GenericMethod ("putPoints", "@brief Method void QPolygon::putPoints(int index, int nPoints, const QPolygon &from, int fromIndex)\n", false, &_init_f_putPoints_4115, &_call_f_putPoints_4115);
  methods += new qt_gsi::GenericMethod ("setPoint", "@brief Method void QPolygon::setPoint(int index, int x, int y)\n", false, &_init_f_setPoint_2085, &_call_f_setPoint_2085);
  methods += new qt_gsi::GenericMethod ("setPoint", "@brief Method void QPolygon::setPoint(int index, const QPoint &p)\n", false, &_init_f_setPoint_2575, &_call_f_setPoint_2575);
  methods += new qt_gsi::GenericMethod ("setPoints", "@brief Method void QPolygon::setPoints(int nPoints, int firstx, int firsty, ...)\n", false, &_init_f_setPoints_2085, &_call_f_setPoints_2085);
  methods += new qt_gsi::GenericMethod ("subtracted", "@brief Method QPolygon QPolygon::subtracted(const QPolygon &r)\n", true, &_init_f_subtracted_c2138, &_call_f_subtracted_c2138);
  methods += new qt_gsi::GenericMethod ("translate", "@brief Method void QPolygon::translate(int dx, int dy)\n", false, &_init_f_translate_1426, &_call_f_translate_1426);
  methods += new qt_gsi::GenericMethod ("translate", "@brief Method void QPolygon::translate(const QPoint &offset)\n", false, &_init_f_translate_1916, &_call_f_translate_1916);
  methods += new qt_gsi::GenericMethod ("translated", "@brief Method QPolygon QPolygon::translated(int dx, int dy)\n", true, &_init_f_translated_c1426, &_call_f_translated_c1426);
  methods += new qt_gsi::GenericMethod ("translated", "@brief Method QPolygon QPolygon::translated(const QPoint &offset)\n", true, &_init_f_translated_c1916, &_call_f_translated_c1916);
  methods += new qt_gsi::GenericMethod ("united", "@brief Method QPolygon QPolygon::united(const QPolygon &r)\n", true, &_init_f_united_c2138, &_call_f_united_c2138);
  methods += gsi::method_ext("*", &::op_QPolygon_operator_star__4053, gsi::arg ("m"), "@brief Operator QPolygon ::operator *(const QPolygon &a, const QMatrix &m)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("*", &::op_QPolygon_operator_star__4380, gsi::arg ("m"), "@brief Operator QPolygon ::operator *(const QPolygon &a, const QTransform &m)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QPolygon> decl_QPolygon ("QtGui", "QPolygon",
  gsi::constructor("new", &ctor_QPolygon_from_polygon, gsi::arg ("p"), "@brief Creates a polygon from the given KLayout Polygon\nRemark: holes are not transferred into the QPolygon.") +
  gsi::constructor("new", &ctor_QPolygon_from_simple_polygon, gsi::arg ("p"), "@brief Creates a polygon from the given KLayout SimplePolygon") +
  gsi::iterator_ext ("each", &f_QPolygon_each_begin, &f_QPolygon_each_end, "@brief Iterates over all points of the polygon.") +
  gsi::method_ext("[]", &f_QPolygon_at, gsi::arg ("index"), "@brief Gets the point at the given position") +
  gsi::method_ext("front", &f_QPolygon_front, "@brief Gets the first point") +
  gsi::method_ext("back", &f_QPolygon_back, "@brief Gets the last point") +
  gsi::method_ext("size", &f_QPolygon_size, "@brief Gets the number of points in the polygon") +
  gsi::method_ext("clear", &f_QPolygon_clear, "@brief Empties the polygon") +
  gsi::method_ext("remove", &f_QPolygon_remove, gsi::arg ("index"), "@brief Removes the point at the given position") +
  gsi::method_ext("insert", &f_QPolygon_insert, gsi::arg ("p"), gsi::arg ("p"), "@brief Inserts the point after the given position") +
  gsi::method_ext("replace", &f_QPolygon_replace, gsi::arg ("p"), gsi::arg ("p"), "@brief Replaces the point at the given position") +
  gsi::method_ext("pop_front", &f_QPolygon_pop_front, "@brief Removes the point at the beginning of the list") +
  gsi::method_ext("pop_back", &f_QPolygon_pop_back, "@brief Removes the point at the end of the list") +
  gsi::method_ext("push_front", &f_QPolygon_push_front, gsi::arg ("p"), "@brief Inserts the point at the beginning of the list") +
  gsi::method_ext("push_back", &f_QPolygon_push_back, gsi::arg ("p"), "@brief Inserts the point at the end of the list") +
  gsi::method_ext("reserve", &f_QPolygon_reserve, gsi::arg ("n"), "@brief Reserve memory for the given number of points") +
  gsi::method_ext("resize", &f_QPolygon_resize, gsi::arg ("l"), "@brief Sets the number of points to the given length") +
  gsi::method_ext("fill", &f_QPolygon_fill, gsi::arg ("p"), gsi::arg ("l"), "@brief Resizes the polygon to l points and sets all elements to the given point") 
+
  methods_QPolygon (),
  "@qt\n@brief Binding of QPolygon");


GSI_QTGUI_PUBLIC gsi::Class<QPolygon> &qtdecl_QPolygon () { return decl_QPolygon; }

}

