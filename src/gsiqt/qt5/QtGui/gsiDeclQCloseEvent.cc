
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

/**
*  @file gsiDeclQCloseEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCloseEvent>
#include <QEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCloseEvent

namespace gsi
{

static gsi::Methods methods_QCloseEvent () {
  gsi::Methods methods;
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QCloseEvent> decl_QCloseEvent (qtdecl_QEvent (), "QtGui", "QCloseEvent_Native",
  methods_QCloseEvent (),
  "@hide\n@alias QCloseEvent");

GSI_QTGUI_PUBLIC gsi::Class<QCloseEvent> &qtdecl_QCloseEvent () { return decl_QCloseEvent; }

}


class QCloseEvent_Adaptor : public QCloseEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QCloseEvent_Adaptor();

  //  [adaptor ctor] QCloseEvent::QCloseEvent()
  QCloseEvent_Adaptor() : QCloseEvent()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QCloseEvent_Adaptor::~QCloseEvent_Adaptor() { }

//  Constructor QCloseEvent::QCloseEvent() (adaptor class)

static void _init_ctor_QCloseEvent_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QCloseEvent_Adaptor> ();
}

static void _call_ctor_QCloseEvent_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCloseEvent_Adaptor *> (new QCloseEvent_Adaptor ());
}


namespace gsi
{

gsi::Class<QCloseEvent> &qtdecl_QCloseEvent ();

static gsi::Methods methods_QCloseEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCloseEvent::QCloseEvent()\nThis method creates an object of class QCloseEvent.", &_init_ctor_QCloseEvent_Adaptor_0, &_call_ctor_QCloseEvent_Adaptor_0);
  return methods;
}

gsi::Class<QCloseEvent_Adaptor> decl_QCloseEvent_Adaptor (qtdecl_QCloseEvent (), "QtGui", "QCloseEvent",
  methods_QCloseEvent_Adaptor (),
  "@qt\n@brief Binding of QCloseEvent");

}

