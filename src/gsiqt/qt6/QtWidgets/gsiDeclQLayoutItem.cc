
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

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
*  @file gsiDeclQLayoutItem.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QLayoutItem>
#include <QLayout>
#include <QRect>
#include <QSize>
#include <QSpacerItem>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QLayoutItem

// QFlags<Qt::AlignmentFlag> QLayoutItem::alignment()


static void _init_f_alignment_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::AlignmentFlag> > ();
}

static void _call_f_alignment_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::AlignmentFlag> > ((QFlags<Qt::AlignmentFlag>)((QLayoutItem *)cls)->alignment ());
}


// QFlags<QSizePolicy::ControlType> QLayoutItem::controlTypes()


static void _init_f_controlTypes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QSizePolicy::ControlType> > ();
}

static void _call_f_controlTypes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QSizePolicy::ControlType> > ((QFlags<QSizePolicy::ControlType>)((QLayoutItem *)cls)->controlTypes ());
}


// QFlags<Qt::Orientation> QLayoutItem::expandingDirections()


static void _init_f_expandingDirections_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::Orientation> > ();
}

static void _call_f_expandingDirections_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::Orientation> > ((QFlags<Qt::Orientation>)((QLayoutItem *)cls)->expandingDirections ());
}


// QRect QLayoutItem::geometry()


static void _init_f_geometry_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_geometry_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QLayoutItem *)cls)->geometry ());
}


// bool QLayoutItem::hasHeightForWidth()


static void _init_f_hasHeightForWidth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasHeightForWidth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QLayoutItem *)cls)->hasHeightForWidth ());
}


// int QLayoutItem::heightForWidth(int)


static void _init_f_heightForWidth_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_heightForWidth_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<int > ((int)((QLayoutItem *)cls)->heightForWidth (arg1));
}


// void QLayoutItem::invalidate()


static void _init_f_invalidate_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_invalidate_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLayoutItem *)cls)->invalidate ();
}


// bool QLayoutItem::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QLayoutItem *)cls)->isEmpty ());
}


// QLayout *QLayoutItem::layout()


static void _init_f_layout_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QLayout * > ();
}

static void _call_f_layout_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QLayout * > ((QLayout *)((QLayoutItem *)cls)->layout ());
}


// QSize QLayoutItem::maximumSize()


static void _init_f_maximumSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_maximumSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QLayoutItem *)cls)->maximumSize ());
}


// int QLayoutItem::minimumHeightForWidth(int)


static void _init_f_minimumHeightForWidth_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_minimumHeightForWidth_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<int > ((int)((QLayoutItem *)cls)->minimumHeightForWidth (arg1));
}


// QSize QLayoutItem::minimumSize()


static void _init_f_minimumSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_minimumSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QLayoutItem *)cls)->minimumSize ());
}


// void QLayoutItem::setAlignment(QFlags<Qt::AlignmentFlag> a)


static void _init_f_setAlignment_2750 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("a");
  decl->add_arg<QFlags<Qt::AlignmentFlag> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAlignment_2750 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::AlignmentFlag> arg1 = gsi::arg_reader<QFlags<Qt::AlignmentFlag> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLayoutItem *)cls)->setAlignment (arg1);
}


// void QLayoutItem::setGeometry(const QRect &)


static void _init_f_setGeometry_1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setGeometry_1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLayoutItem *)cls)->setGeometry (arg1);
}


// QSize QLayoutItem::sizeHint()


static void _init_f_sizeHint_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_sizeHint_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QLayoutItem *)cls)->sizeHint ());
}


// QSpacerItem *QLayoutItem::spacerItem()


static void _init_f_spacerItem_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSpacerItem * > ();
}

static void _call_f_spacerItem_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSpacerItem * > ((QSpacerItem *)((QLayoutItem *)cls)->spacerItem ());
}


// QWidget *QLayoutItem::widget()


static void _init_f_widget_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QWidget * > ();
}

static void _call_f_widget_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QWidget * > ((QWidget *)((QLayoutItem *)cls)->widget ());
}


namespace gsi
{

static gsi::Methods methods_QLayoutItem () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod (":alignment", "@brief Method QFlags<Qt::AlignmentFlag> QLayoutItem::alignment()\n", true, &_init_f_alignment_c0, &_call_f_alignment_c0);
  methods += new qt_gsi::GenericMethod ("controlTypes", "@brief Method QFlags<QSizePolicy::ControlType> QLayoutItem::controlTypes()\n", true, &_init_f_controlTypes_c0, &_call_f_controlTypes_c0);
  methods += new qt_gsi::GenericMethod ("expandingDirections", "@brief Method QFlags<Qt::Orientation> QLayoutItem::expandingDirections()\n", true, &_init_f_expandingDirections_c0, &_call_f_expandingDirections_c0);
  methods += new qt_gsi::GenericMethod (":geometry", "@brief Method QRect QLayoutItem::geometry()\n", true, &_init_f_geometry_c0, &_call_f_geometry_c0);
  methods += new qt_gsi::GenericMethod ("hasHeightForWidth", "@brief Method bool QLayoutItem::hasHeightForWidth()\n", true, &_init_f_hasHeightForWidth_c0, &_call_f_hasHeightForWidth_c0);
  methods += new qt_gsi::GenericMethod ("heightForWidth", "@brief Method int QLayoutItem::heightForWidth(int)\n", true, &_init_f_heightForWidth_c767, &_call_f_heightForWidth_c767);
  methods += new qt_gsi::GenericMethod ("invalidate", "@brief Method void QLayoutItem::invalidate()\n", false, &_init_f_invalidate_0, &_call_f_invalidate_0);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QLayoutItem::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("layout", "@brief Method QLayout *QLayoutItem::layout()\n", false, &_init_f_layout_0, &_call_f_layout_0);
  methods += new qt_gsi::GenericMethod ("maximumSize", "@brief Method QSize QLayoutItem::maximumSize()\n", true, &_init_f_maximumSize_c0, &_call_f_maximumSize_c0);
  methods += new qt_gsi::GenericMethod ("minimumHeightForWidth", "@brief Method int QLayoutItem::minimumHeightForWidth(int)\n", true, &_init_f_minimumHeightForWidth_c767, &_call_f_minimumHeightForWidth_c767);
  methods += new qt_gsi::GenericMethod ("minimumSize", "@brief Method QSize QLayoutItem::minimumSize()\n", true, &_init_f_minimumSize_c0, &_call_f_minimumSize_c0);
  methods += new qt_gsi::GenericMethod ("setAlignment|alignment=", "@brief Method void QLayoutItem::setAlignment(QFlags<Qt::AlignmentFlag> a)\n", false, &_init_f_setAlignment_2750, &_call_f_setAlignment_2750);
  methods += new qt_gsi::GenericMethod ("setGeometry|geometry=", "@brief Method void QLayoutItem::setGeometry(const QRect &)\n", false, &_init_f_setGeometry_1792, &_call_f_setGeometry_1792);
  methods += new qt_gsi::GenericMethod ("sizeHint", "@brief Method QSize QLayoutItem::sizeHint()\n", true, &_init_f_sizeHint_c0, &_call_f_sizeHint_c0);
  methods += new qt_gsi::GenericMethod ("spacerItem", "@brief Method QSpacerItem *QLayoutItem::spacerItem()\n", false, &_init_f_spacerItem_0, &_call_f_spacerItem_0);
  methods += new qt_gsi::GenericMethod ("widget", "@brief Method QWidget *QLayoutItem::widget()\n", true, &_init_f_widget_c0, &_call_f_widget_c0);
  return methods;
}

gsi::Class<QLayoutItem> decl_QLayoutItem ("QtWidgets", "QLayoutItem_Native",
  methods_QLayoutItem (),
  "@hide\n@alias QLayoutItem");

GSI_QTWIDGETS_PUBLIC gsi::Class<QLayoutItem> &qtdecl_QLayoutItem () { return decl_QLayoutItem; }

}


class QLayoutItem_Adaptor : public QLayoutItem, public qt_gsi::QtObjectBase
{
public:

  virtual ~QLayoutItem_Adaptor();

  //  [adaptor ctor] QLayoutItem::QLayoutItem(QFlags<Qt::AlignmentFlag> alignment)
  QLayoutItem_Adaptor() : QLayoutItem()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QLayoutItem::QLayoutItem(QFlags<Qt::AlignmentFlag> alignment)
  QLayoutItem_Adaptor(QFlags<Qt::AlignmentFlag> alignment) : QLayoutItem(alignment)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QFlags<QSizePolicy::ControlType> QLayoutItem::controlTypes()
  QFlags<QSizePolicy::ControlType> cbs_controlTypes_c0_0() const
  {
    return QLayoutItem::controlTypes();
  }

  virtual QFlags<QSizePolicy::ControlType> controlTypes() const
  {
    if (cb_controlTypes_c0_0.can_issue()) {
      return cb_controlTypes_c0_0.issue<QLayoutItem_Adaptor, QFlags<QSizePolicy::ControlType> >(&QLayoutItem_Adaptor::cbs_controlTypes_c0_0);
    } else {
      return QLayoutItem::controlTypes();
    }
  }

  //  [adaptor impl] QFlags<Qt::Orientation> QLayoutItem::expandingDirections()
  QFlags<Qt::Orientation> cbs_expandingDirections_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("expandingDirections");
  }

  virtual QFlags<Qt::Orientation> expandingDirections() const
  {
    if (cb_expandingDirections_c0_0.can_issue()) {
      return cb_expandingDirections_c0_0.issue<QLayoutItem_Adaptor, QFlags<Qt::Orientation> >(&QLayoutItem_Adaptor::cbs_expandingDirections_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("expandingDirections");
    }
  }

  //  [adaptor impl] QRect QLayoutItem::geometry()
  QRect cbs_geometry_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("geometry");
  }

  virtual QRect geometry() const
  {
    if (cb_geometry_c0_0.can_issue()) {
      return cb_geometry_c0_0.issue<QLayoutItem_Adaptor, QRect>(&QLayoutItem_Adaptor::cbs_geometry_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("geometry");
    }
  }

  //  [adaptor impl] bool QLayoutItem::hasHeightForWidth()
  bool cbs_hasHeightForWidth_c0_0() const
  {
    return QLayoutItem::hasHeightForWidth();
  }

  virtual bool hasHeightForWidth() const
  {
    if (cb_hasHeightForWidth_c0_0.can_issue()) {
      return cb_hasHeightForWidth_c0_0.issue<QLayoutItem_Adaptor, bool>(&QLayoutItem_Adaptor::cbs_hasHeightForWidth_c0_0);
    } else {
      return QLayoutItem::hasHeightForWidth();
    }
  }

  //  [adaptor impl] int QLayoutItem::heightForWidth(int)
  int cbs_heightForWidth_c767_0(int arg1) const
  {
    return QLayoutItem::heightForWidth(arg1);
  }

  virtual int heightForWidth(int arg1) const
  {
    if (cb_heightForWidth_c767_0.can_issue()) {
      return cb_heightForWidth_c767_0.issue<QLayoutItem_Adaptor, int, int>(&QLayoutItem_Adaptor::cbs_heightForWidth_c767_0, arg1);
    } else {
      return QLayoutItem::heightForWidth(arg1);
    }
  }

  //  [adaptor impl] void QLayoutItem::invalidate()
  void cbs_invalidate_0_0()
  {
    QLayoutItem::invalidate();
  }

  virtual void invalidate()
  {
    if (cb_invalidate_0_0.can_issue()) {
      cb_invalidate_0_0.issue<QLayoutItem_Adaptor>(&QLayoutItem_Adaptor::cbs_invalidate_0_0);
    } else {
      QLayoutItem::invalidate();
    }
  }

  //  [adaptor impl] bool QLayoutItem::isEmpty()
  bool cbs_isEmpty_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("isEmpty");
  }

  virtual bool isEmpty() const
  {
    if (cb_isEmpty_c0_0.can_issue()) {
      return cb_isEmpty_c0_0.issue<QLayoutItem_Adaptor, bool>(&QLayoutItem_Adaptor::cbs_isEmpty_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("isEmpty");
    }
  }

  //  [adaptor impl] QLayout *QLayoutItem::layout()
  QLayout * cbs_layout_0_0()
  {
    return QLayoutItem::layout();
  }

  virtual QLayout * layout()
  {
    if (cb_layout_0_0.can_issue()) {
      return cb_layout_0_0.issue<QLayoutItem_Adaptor, QLayout *>(&QLayoutItem_Adaptor::cbs_layout_0_0);
    } else {
      return QLayoutItem::layout();
    }
  }

  //  [adaptor impl] QSize QLayoutItem::maximumSize()
  QSize cbs_maximumSize_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("maximumSize");
  }

  virtual QSize maximumSize() const
  {
    if (cb_maximumSize_c0_0.can_issue()) {
      return cb_maximumSize_c0_0.issue<QLayoutItem_Adaptor, QSize>(&QLayoutItem_Adaptor::cbs_maximumSize_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("maximumSize");
    }
  }

  //  [adaptor impl] int QLayoutItem::minimumHeightForWidth(int)
  int cbs_minimumHeightForWidth_c767_0(int arg1) const
  {
    return QLayoutItem::minimumHeightForWidth(arg1);
  }

  virtual int minimumHeightForWidth(int arg1) const
  {
    if (cb_minimumHeightForWidth_c767_0.can_issue()) {
      return cb_minimumHeightForWidth_c767_0.issue<QLayoutItem_Adaptor, int, int>(&QLayoutItem_Adaptor::cbs_minimumHeightForWidth_c767_0, arg1);
    } else {
      return QLayoutItem::minimumHeightForWidth(arg1);
    }
  }

  //  [adaptor impl] QSize QLayoutItem::minimumSize()
  QSize cbs_minimumSize_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("minimumSize");
  }

  virtual QSize minimumSize() const
  {
    if (cb_minimumSize_c0_0.can_issue()) {
      return cb_minimumSize_c0_0.issue<QLayoutItem_Adaptor, QSize>(&QLayoutItem_Adaptor::cbs_minimumSize_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("minimumSize");
    }
  }

  //  [adaptor impl] void QLayoutItem::setGeometry(const QRect &)
  void cbs_setGeometry_1792_0(const QRect &arg1)
  {
    __SUPPRESS_UNUSED_WARNING (arg1);
    throw qt_gsi::AbstractMethodCalledException("setGeometry");
  }

  virtual void setGeometry(const QRect &arg1)
  {
    if (cb_setGeometry_1792_0.can_issue()) {
      cb_setGeometry_1792_0.issue<QLayoutItem_Adaptor, const QRect &>(&QLayoutItem_Adaptor::cbs_setGeometry_1792_0, arg1);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setGeometry");
    }
  }

  //  [adaptor impl] QSize QLayoutItem::sizeHint()
  QSize cbs_sizeHint_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("sizeHint");
  }

  virtual QSize sizeHint() const
  {
    if (cb_sizeHint_c0_0.can_issue()) {
      return cb_sizeHint_c0_0.issue<QLayoutItem_Adaptor, QSize>(&QLayoutItem_Adaptor::cbs_sizeHint_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("sizeHint");
    }
  }

  //  [adaptor impl] QSpacerItem *QLayoutItem::spacerItem()
  QSpacerItem * cbs_spacerItem_0_0()
  {
    return QLayoutItem::spacerItem();
  }

  virtual QSpacerItem * spacerItem()
  {
    if (cb_spacerItem_0_0.can_issue()) {
      return cb_spacerItem_0_0.issue<QLayoutItem_Adaptor, QSpacerItem *>(&QLayoutItem_Adaptor::cbs_spacerItem_0_0);
    } else {
      return QLayoutItem::spacerItem();
    }
  }

  //  [adaptor impl] QWidget *QLayoutItem::widget()
  QWidget * cbs_widget_c0_0() const
  {
    return QLayoutItem::widget();
  }

  virtual QWidget * widget() const
  {
    if (cb_widget_c0_0.can_issue()) {
      return cb_widget_c0_0.issue<QLayoutItem_Adaptor, QWidget *>(&QLayoutItem_Adaptor::cbs_widget_c0_0);
    } else {
      return QLayoutItem::widget();
    }
  }

  gsi::Callback cb_controlTypes_c0_0;
  gsi::Callback cb_expandingDirections_c0_0;
  gsi::Callback cb_geometry_c0_0;
  gsi::Callback cb_hasHeightForWidth_c0_0;
  gsi::Callback cb_heightForWidth_c767_0;
  gsi::Callback cb_invalidate_0_0;
  gsi::Callback cb_isEmpty_c0_0;
  gsi::Callback cb_layout_0_0;
  gsi::Callback cb_maximumSize_c0_0;
  gsi::Callback cb_minimumHeightForWidth_c767_0;
  gsi::Callback cb_minimumSize_c0_0;
  gsi::Callback cb_setGeometry_1792_0;
  gsi::Callback cb_sizeHint_c0_0;
  gsi::Callback cb_spacerItem_0_0;
  gsi::Callback cb_widget_c0_0;
};

QLayoutItem_Adaptor::~QLayoutItem_Adaptor() { }

//  Constructor QLayoutItem::QLayoutItem(QFlags<Qt::AlignmentFlag> alignment) (adaptor class)

static void _init_ctor_QLayoutItem_Adaptor_2750 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("alignment", true, "Qt::Alignment()");
  decl->add_arg<QFlags<Qt::AlignmentFlag> > (argspec_0);
  decl->set_return_new<QLayoutItem_Adaptor> ();
}

static void _call_ctor_QLayoutItem_Adaptor_2750 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::AlignmentFlag> arg1 = args ? gsi::arg_reader<QFlags<Qt::AlignmentFlag> >() (args, heap) : gsi::arg_maker<QFlags<Qt::AlignmentFlag> >() (Qt::Alignment(), heap);
  ret.write<QLayoutItem_Adaptor *> (new QLayoutItem_Adaptor (arg1));
}


// QFlags<QSizePolicy::ControlType> QLayoutItem::controlTypes()

static void _init_cbs_controlTypes_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QSizePolicy::ControlType> > ();
}

static void _call_cbs_controlTypes_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QSizePolicy::ControlType> > ((QFlags<QSizePolicy::ControlType>)((QLayoutItem_Adaptor *)cls)->cbs_controlTypes_c0_0 ());
}

static void _set_callback_cbs_controlTypes_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QLayoutItem_Adaptor *)cls)->cb_controlTypes_c0_0 = cb;
}


// QFlags<Qt::Orientation> QLayoutItem::expandingDirections()

static void _init_cbs_expandingDirections_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::Orientation> > ();
}

static void _call_cbs_expandingDirections_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::Orientation> > ((QFlags<Qt::Orientation>)((QLayoutItem_Adaptor *)cls)->cbs_expandingDirections_c0_0 ());
}

static void _set_callback_cbs_expandingDirections_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QLayoutItem_Adaptor *)cls)->cb_expandingDirections_c0_0 = cb;
}


// QRect QLayoutItem::geometry()

static void _init_cbs_geometry_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_cbs_geometry_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QLayoutItem_Adaptor *)cls)->cbs_geometry_c0_0 ());
}

static void _set_callback_cbs_geometry_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QLayoutItem_Adaptor *)cls)->cb_geometry_c0_0 = cb;
}


// bool QLayoutItem::hasHeightForWidth()

static void _init_cbs_hasHeightForWidth_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_hasHeightForWidth_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QLayoutItem_Adaptor *)cls)->cbs_hasHeightForWidth_c0_0 ());
}

static void _set_callback_cbs_hasHeightForWidth_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QLayoutItem_Adaptor *)cls)->cb_hasHeightForWidth_c0_0 = cb;
}


// int QLayoutItem::heightForWidth(int)

static void _init_cbs_heightForWidth_c767_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_cbs_heightForWidth_c767_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<int > ((int)((QLayoutItem_Adaptor *)cls)->cbs_heightForWidth_c767_0 (arg1));
}

static void _set_callback_cbs_heightForWidth_c767_0 (void *cls, const gsi::Callback &cb)
{
  ((QLayoutItem_Adaptor *)cls)->cb_heightForWidth_c767_0 = cb;
}


// void QLayoutItem::invalidate()

static void _init_cbs_invalidate_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_invalidate_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLayoutItem_Adaptor *)cls)->cbs_invalidate_0_0 ();
}

static void _set_callback_cbs_invalidate_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QLayoutItem_Adaptor *)cls)->cb_invalidate_0_0 = cb;
}


// bool QLayoutItem::isEmpty()

static void _init_cbs_isEmpty_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isEmpty_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QLayoutItem_Adaptor *)cls)->cbs_isEmpty_c0_0 ());
}

static void _set_callback_cbs_isEmpty_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QLayoutItem_Adaptor *)cls)->cb_isEmpty_c0_0 = cb;
}


// QLayout *QLayoutItem::layout()

static void _init_cbs_layout_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QLayout * > ();
}

static void _call_cbs_layout_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QLayout * > ((QLayout *)((QLayoutItem_Adaptor *)cls)->cbs_layout_0_0 ());
}

static void _set_callback_cbs_layout_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QLayoutItem_Adaptor *)cls)->cb_layout_0_0 = cb;
}


// QSize QLayoutItem::maximumSize()

static void _init_cbs_maximumSize_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_cbs_maximumSize_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QLayoutItem_Adaptor *)cls)->cbs_maximumSize_c0_0 ());
}

static void _set_callback_cbs_maximumSize_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QLayoutItem_Adaptor *)cls)->cb_maximumSize_c0_0 = cb;
}


// int QLayoutItem::minimumHeightForWidth(int)

static void _init_cbs_minimumHeightForWidth_c767_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_cbs_minimumHeightForWidth_c767_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<int > ((int)((QLayoutItem_Adaptor *)cls)->cbs_minimumHeightForWidth_c767_0 (arg1));
}

static void _set_callback_cbs_minimumHeightForWidth_c767_0 (void *cls, const gsi::Callback &cb)
{
  ((QLayoutItem_Adaptor *)cls)->cb_minimumHeightForWidth_c767_0 = cb;
}


// QSize QLayoutItem::minimumSize()

static void _init_cbs_minimumSize_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_cbs_minimumSize_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QLayoutItem_Adaptor *)cls)->cbs_minimumSize_c0_0 ());
}

static void _set_callback_cbs_minimumSize_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QLayoutItem_Adaptor *)cls)->cb_minimumSize_c0_0 = cb;
}


// void QLayoutItem::setGeometry(const QRect &)

static void _init_cbs_setGeometry_1792_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setGeometry_1792_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = args.read<const QRect & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLayoutItem_Adaptor *)cls)->cbs_setGeometry_1792_0 (arg1);
}

static void _set_callback_cbs_setGeometry_1792_0 (void *cls, const gsi::Callback &cb)
{
  ((QLayoutItem_Adaptor *)cls)->cb_setGeometry_1792_0 = cb;
}


// QSize QLayoutItem::sizeHint()

static void _init_cbs_sizeHint_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_cbs_sizeHint_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QLayoutItem_Adaptor *)cls)->cbs_sizeHint_c0_0 ());
}

static void _set_callback_cbs_sizeHint_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QLayoutItem_Adaptor *)cls)->cb_sizeHint_c0_0 = cb;
}


// QSpacerItem *QLayoutItem::spacerItem()

static void _init_cbs_spacerItem_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSpacerItem * > ();
}

static void _call_cbs_spacerItem_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSpacerItem * > ((QSpacerItem *)((QLayoutItem_Adaptor *)cls)->cbs_spacerItem_0_0 ());
}

static void _set_callback_cbs_spacerItem_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QLayoutItem_Adaptor *)cls)->cb_spacerItem_0_0 = cb;
}


// QWidget *QLayoutItem::widget()

static void _init_cbs_widget_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QWidget * > ();
}

static void _call_cbs_widget_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QWidget * > ((QWidget *)((QLayoutItem_Adaptor *)cls)->cbs_widget_c0_0 ());
}

static void _set_callback_cbs_widget_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QLayoutItem_Adaptor *)cls)->cb_widget_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QLayoutItem> &qtdecl_QLayoutItem ();

static gsi::Methods methods_QLayoutItem_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QLayoutItem::QLayoutItem(QFlags<Qt::AlignmentFlag> alignment)\nThis method creates an object of class QLayoutItem.", &_init_ctor_QLayoutItem_Adaptor_2750, &_call_ctor_QLayoutItem_Adaptor_2750);
  methods += new qt_gsi::GenericMethod ("controlTypes", "@brief Virtual method QFlags<QSizePolicy::ControlType> QLayoutItem::controlTypes()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_controlTypes_c0_0, &_call_cbs_controlTypes_c0_0);
  methods += new qt_gsi::GenericMethod ("controlTypes", "@hide", true, &_init_cbs_controlTypes_c0_0, &_call_cbs_controlTypes_c0_0, &_set_callback_cbs_controlTypes_c0_0);
  methods += new qt_gsi::GenericMethod ("expandingDirections", "@brief Virtual method QFlags<Qt::Orientation> QLayoutItem::expandingDirections()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_expandingDirections_c0_0, &_call_cbs_expandingDirections_c0_0);
  methods += new qt_gsi::GenericMethod ("expandingDirections", "@hide", true, &_init_cbs_expandingDirections_c0_0, &_call_cbs_expandingDirections_c0_0, &_set_callback_cbs_expandingDirections_c0_0);
  methods += new qt_gsi::GenericMethod ("geometry", "@brief Virtual method QRect QLayoutItem::geometry()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_geometry_c0_0, &_call_cbs_geometry_c0_0);
  methods += new qt_gsi::GenericMethod ("geometry", "@hide", true, &_init_cbs_geometry_c0_0, &_call_cbs_geometry_c0_0, &_set_callback_cbs_geometry_c0_0);
  methods += new qt_gsi::GenericMethod ("hasHeightForWidth", "@brief Virtual method bool QLayoutItem::hasHeightForWidth()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_hasHeightForWidth_c0_0, &_call_cbs_hasHeightForWidth_c0_0);
  methods += new qt_gsi::GenericMethod ("hasHeightForWidth", "@hide", true, &_init_cbs_hasHeightForWidth_c0_0, &_call_cbs_hasHeightForWidth_c0_0, &_set_callback_cbs_hasHeightForWidth_c0_0);
  methods += new qt_gsi::GenericMethod ("heightForWidth", "@brief Virtual method int QLayoutItem::heightForWidth(int)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_heightForWidth_c767_0, &_call_cbs_heightForWidth_c767_0);
  methods += new qt_gsi::GenericMethod ("heightForWidth", "@hide", true, &_init_cbs_heightForWidth_c767_0, &_call_cbs_heightForWidth_c767_0, &_set_callback_cbs_heightForWidth_c767_0);
  methods += new qt_gsi::GenericMethod ("invalidate", "@brief Virtual method void QLayoutItem::invalidate()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_invalidate_0_0, &_call_cbs_invalidate_0_0);
  methods += new qt_gsi::GenericMethod ("invalidate", "@hide", false, &_init_cbs_invalidate_0_0, &_call_cbs_invalidate_0_0, &_set_callback_cbs_invalidate_0_0);
  methods += new qt_gsi::GenericMethod ("isEmpty", "@brief Virtual method bool QLayoutItem::isEmpty()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isEmpty_c0_0, &_call_cbs_isEmpty_c0_0);
  methods += new qt_gsi::GenericMethod ("isEmpty", "@hide", true, &_init_cbs_isEmpty_c0_0, &_call_cbs_isEmpty_c0_0, &_set_callback_cbs_isEmpty_c0_0);
  methods += new qt_gsi::GenericMethod ("layout", "@brief Virtual method QLayout *QLayoutItem::layout()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_layout_0_0, &_call_cbs_layout_0_0);
  methods += new qt_gsi::GenericMethod ("layout", "@hide", false, &_init_cbs_layout_0_0, &_call_cbs_layout_0_0, &_set_callback_cbs_layout_0_0);
  methods += new qt_gsi::GenericMethod ("maximumSize", "@brief Virtual method QSize QLayoutItem::maximumSize()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_maximumSize_c0_0, &_call_cbs_maximumSize_c0_0);
  methods += new qt_gsi::GenericMethod ("maximumSize", "@hide", true, &_init_cbs_maximumSize_c0_0, &_call_cbs_maximumSize_c0_0, &_set_callback_cbs_maximumSize_c0_0);
  methods += new qt_gsi::GenericMethod ("minimumHeightForWidth", "@brief Virtual method int QLayoutItem::minimumHeightForWidth(int)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_minimumHeightForWidth_c767_0, &_call_cbs_minimumHeightForWidth_c767_0);
  methods += new qt_gsi::GenericMethod ("minimumHeightForWidth", "@hide", true, &_init_cbs_minimumHeightForWidth_c767_0, &_call_cbs_minimumHeightForWidth_c767_0, &_set_callback_cbs_minimumHeightForWidth_c767_0);
  methods += new qt_gsi::GenericMethod ("minimumSize", "@brief Virtual method QSize QLayoutItem::minimumSize()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_minimumSize_c0_0, &_call_cbs_minimumSize_c0_0);
  methods += new qt_gsi::GenericMethod ("minimumSize", "@hide", true, &_init_cbs_minimumSize_c0_0, &_call_cbs_minimumSize_c0_0, &_set_callback_cbs_minimumSize_c0_0);
  methods += new qt_gsi::GenericMethod ("setGeometry", "@brief Virtual method void QLayoutItem::setGeometry(const QRect &)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setGeometry_1792_0, &_call_cbs_setGeometry_1792_0);
  methods += new qt_gsi::GenericMethod ("setGeometry", "@hide", false, &_init_cbs_setGeometry_1792_0, &_call_cbs_setGeometry_1792_0, &_set_callback_cbs_setGeometry_1792_0);
  methods += new qt_gsi::GenericMethod ("sizeHint", "@brief Virtual method QSize QLayoutItem::sizeHint()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_sizeHint_c0_0, &_call_cbs_sizeHint_c0_0);
  methods += new qt_gsi::GenericMethod ("sizeHint", "@hide", true, &_init_cbs_sizeHint_c0_0, &_call_cbs_sizeHint_c0_0, &_set_callback_cbs_sizeHint_c0_0);
  methods += new qt_gsi::GenericMethod ("spacerItem", "@brief Virtual method QSpacerItem *QLayoutItem::spacerItem()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_spacerItem_0_0, &_call_cbs_spacerItem_0_0);
  methods += new qt_gsi::GenericMethod ("spacerItem", "@hide", false, &_init_cbs_spacerItem_0_0, &_call_cbs_spacerItem_0_0, &_set_callback_cbs_spacerItem_0_0);
  methods += new qt_gsi::GenericMethod ("widget", "@brief Virtual method QWidget *QLayoutItem::widget()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_widget_c0_0, &_call_cbs_widget_c0_0);
  methods += new qt_gsi::GenericMethod ("widget", "@hide", true, &_init_cbs_widget_c0_0, &_call_cbs_widget_c0_0, &_set_callback_cbs_widget_c0_0);
  return methods;
}

gsi::Class<QLayoutItem_Adaptor> decl_QLayoutItem_Adaptor (qtdecl_QLayoutItem (), "QtWidgets", "QLayoutItem",
  methods_QLayoutItem_Adaptor (),
  "@qt\n@brief Binding of QLayoutItem");

}

