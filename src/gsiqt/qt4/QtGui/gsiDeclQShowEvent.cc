
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

/**
*  @file gsiDeclQShowEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QShowEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QShowEvent

namespace gsi
{

static gsi::Methods methods_QShowEvent () {
  gsi::Methods methods;
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QShowEvent> decl_QShowEvent (qtdecl_QEvent (), "QtGui", "QShowEvent_Native",
  methods_QShowEvent (),
  "@hide\n@alias QShowEvent");

GSI_QTGUI_PUBLIC gsi::Class<QShowEvent> &qtdecl_QShowEvent () { return decl_QShowEvent; }

}


class QShowEvent_Adaptor : public QShowEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QShowEvent_Adaptor();

  //  [adaptor ctor] QShowEvent::QShowEvent()
  QShowEvent_Adaptor() : QShowEvent()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QShowEvent_Adaptor::~QShowEvent_Adaptor() { }

//  Constructor QShowEvent::QShowEvent() (adaptor class)

static void _init_ctor_QShowEvent_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QShowEvent_Adaptor> ();
}

static void _call_ctor_QShowEvent_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QShowEvent_Adaptor *> (new QShowEvent_Adaptor ());
}


namespace gsi
{

gsi::Class<QShowEvent> &qtdecl_QShowEvent ();

static gsi::Methods methods_QShowEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QShowEvent::QShowEvent()\nThis method creates an object of class QShowEvent.", &_init_ctor_QShowEvent_Adaptor_0, &_call_ctor_QShowEvent_Adaptor_0);
  return methods;
}

gsi::Class<QShowEvent_Adaptor> decl_QShowEvent_Adaptor (qtdecl_QShowEvent (), "QtGui", "QShowEvent",
  methods_QShowEvent_Adaptor (),
  "@qt\n@brief Binding of QShowEvent");

}

