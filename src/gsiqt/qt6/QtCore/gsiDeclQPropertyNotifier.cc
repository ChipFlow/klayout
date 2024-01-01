
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
*  @file gsiDeclQPropertyNotifier.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPropertyNotifier>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPropertyNotifier

//  Constructor QPropertyNotifier::QPropertyNotifier()


static void _init_ctor_QPropertyNotifier_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPropertyNotifier> ();
}

static void _call_ctor_QPropertyNotifier_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPropertyNotifier *> (new QPropertyNotifier ());
}



namespace gsi
{

static gsi::Methods methods_QPropertyNotifier () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPropertyNotifier::QPropertyNotifier()\nThis method creates an object of class QPropertyNotifier.", &_init_ctor_QPropertyNotifier_0, &_call_ctor_QPropertyNotifier_0);
  return methods;
}

gsi::Class<QPropertyObserver> &qtdecl_QPropertyObserver ();

gsi::Class<QPropertyNotifier> decl_QPropertyNotifier (qtdecl_QPropertyObserver (), "QtCore", "QPropertyNotifier",
  methods_QPropertyNotifier (),
  "@qt\n@brief Binding of QPropertyNotifier");


GSI_QTCORE_PUBLIC gsi::Class<QPropertyNotifier> &qtdecl_QPropertyNotifier () { return decl_QPropertyNotifier; }

}

