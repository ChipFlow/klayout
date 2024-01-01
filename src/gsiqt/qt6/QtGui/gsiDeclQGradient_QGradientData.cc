
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
*  @file gsiDeclQGradient_QGradientData.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGradient>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// union QGradient::QGradientData

//  Constructor QGradient::QGradientData::QGradientData()


static void _init_ctor_QGradient_QGradientData_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QGradient::QGradientData> ();
}

static void _call_ctor_QGradient_QGradientData_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QGradient::QGradientData *> (new QGradient::QGradientData ());
}



namespace gsi
{

static gsi::Methods methods_QGradient_QGradientData () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGradient::QGradientData::QGradientData()\nThis method creates an object of class QGradient::QGradientData.", &_init_ctor_QGradient_QGradientData_0, &_call_ctor_QGradient_QGradientData_0);
  return methods;
}

gsi::Class<QGradient::QGradientData> decl_QGradient_QGradientData ("QtGui", "QGradient_QGradientData",
  methods_QGradient_QGradientData (),
  "@qt\n@brief Binding of QGradient::QGradientData");

gsi::ClassExt<QGradient> decl_QGradient_QGradientData_as_child (decl_QGradient_QGradientData, "QGradientData");

GSI_QTGUI_PUBLIC gsi::Class<QGradient::QGradientData> &qtdecl_QGradient_QGradientData () { return decl_QGradient_QGradientData; }

}

