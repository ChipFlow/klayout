
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
*  @file gsiDeclQPaintEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPaintEvent>
#include <QRect>
#include <QRegion>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPaintEvent

// const QRect &QPaintEvent::rect()


static void _init_f_rect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QRect & > ();
}

static void _call_f_rect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QRect & > ((const QRect &)((QPaintEvent *)cls)->rect ());
}


// const QRegion &QPaintEvent::region()


static void _init_f_region_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QRegion & > ();
}

static void _call_f_region_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QRegion & > ((const QRegion &)((QPaintEvent *)cls)->region ());
}


namespace gsi
{

static gsi::Methods methods_QPaintEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("rect", "@brief Method const QRect &QPaintEvent::rect()\n", true, &_init_f_rect_c0, &_call_f_rect_c0);
  methods += new qt_gsi::GenericMethod ("region", "@brief Method const QRegion &QPaintEvent::region()\n", true, &_init_f_region_c0, &_call_f_region_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QPaintEvent> decl_QPaintEvent (qtdecl_QEvent (), "QtGui", "QPaintEvent_Native",
  methods_QPaintEvent (),
  "@hide\n@alias QPaintEvent");

GSI_QTGUI_PUBLIC gsi::Class<QPaintEvent> &qtdecl_QPaintEvent () { return decl_QPaintEvent; }

}


class QPaintEvent_Adaptor : public QPaintEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QPaintEvent_Adaptor();

  //  [adaptor ctor] QPaintEvent::QPaintEvent(const QRegion &paintRegion)
  QPaintEvent_Adaptor(const QRegion &paintRegion) : QPaintEvent(paintRegion)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPaintEvent::QPaintEvent(const QRect &paintRect)
  QPaintEvent_Adaptor(const QRect &paintRect) : QPaintEvent(paintRect)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QPaintEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QPaintEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QPaintEvent_Adaptor, bool>(&QPaintEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QPaintEvent::setAccepted(accepted);
    }
  }

  gsi::Callback cb_setAccepted_864_0;
};

QPaintEvent_Adaptor::~QPaintEvent_Adaptor() { }

//  Constructor QPaintEvent::QPaintEvent(const QRegion &paintRegion) (adaptor class)

static void _init_ctor_QPaintEvent_Adaptor_2006 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("paintRegion");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return_new<QPaintEvent_Adaptor> ();
}

static void _call_ctor_QPaintEvent_Adaptor_2006 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QPaintEvent_Adaptor *> (new QPaintEvent_Adaptor (arg1));
}


//  Constructor QPaintEvent::QPaintEvent(const QRect &paintRect) (adaptor class)

static void _init_ctor_QPaintEvent_Adaptor_1792 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("paintRect");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return_new<QPaintEvent_Adaptor> ();
}

static void _call_ctor_QPaintEvent_Adaptor_1792 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  ret.write<QPaintEvent_Adaptor *> (new QPaintEvent_Adaptor (arg1));
}


// void QPaintEvent::setAccepted(bool accepted)

static void _init_cbs_setAccepted_864_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("accepted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setAccepted_864_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPaintEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QPaintEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


namespace gsi
{

gsi::Class<QPaintEvent> &qtdecl_QPaintEvent ();

static gsi::Methods methods_QPaintEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPaintEvent::QPaintEvent(const QRegion &paintRegion)\nThis method creates an object of class QPaintEvent.", &_init_ctor_QPaintEvent_Adaptor_2006, &_call_ctor_QPaintEvent_Adaptor_2006);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPaintEvent::QPaintEvent(const QRect &paintRect)\nThis method creates an object of class QPaintEvent.", &_init_ctor_QPaintEvent_Adaptor_1792, &_call_ctor_QPaintEvent_Adaptor_1792);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QPaintEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  return methods;
}

gsi::Class<QPaintEvent_Adaptor> decl_QPaintEvent_Adaptor (qtdecl_QPaintEvent (), "QtGui", "QPaintEvent",
  methods_QPaintEvent_Adaptor (),
  "@qt\n@brief Binding of QPaintEvent");

}

