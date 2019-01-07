
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
*  @file gsiDeclQStyleHintReturnVariant.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleHintReturnVariant>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include "gsiDeclQtWidgetsTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleHintReturnVariant

//  Constructor QStyleHintReturnVariant::QStyleHintReturnVariant()


static void _init_ctor_QStyleHintReturnVariant_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleHintReturnVariant> ();
}

static void _call_ctor_QStyleHintReturnVariant_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleHintReturnVariant *> (new QStyleHintReturnVariant ());
}



namespace gsi
{

static gsi::Methods methods_QStyleHintReturnVariant () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleHintReturnVariant::QStyleHintReturnVariant()\nThis method creates an object of class QStyleHintReturnVariant.", &_init_ctor_QStyleHintReturnVariant_0, &_call_ctor_QStyleHintReturnVariant_0);
  return methods;
}

gsi::Class<QStyleHintReturn> &qtdecl_QStyleHintReturn ();

gsi::Class<QStyleHintReturnVariant> decl_QStyleHintReturnVariant (qtdecl_QStyleHintReturn (), "QtWidgets", "QStyleHintReturnVariant",
  methods_QStyleHintReturnVariant (),
  "@qt\n@brief Binding of QStyleHintReturnVariant");


GSI_QTWIDGETS_PUBLIC gsi::Class<QStyleHintReturnVariant> &qtdecl_QStyleHintReturnVariant () { return decl_QStyleHintReturnVariant; }

}

