
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
*  @file gsiDeclQFormLayout_TakeRowResult.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QFormLayout>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QFormLayout::TakeRowResult

//  Constructor QFormLayout::TakeRowResult::TakeRowResult()


static void _init_ctor_QFormLayout_TakeRowResult_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QFormLayout::TakeRowResult> ();
}

static void _call_ctor_QFormLayout_TakeRowResult_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFormLayout::TakeRowResult *> (new QFormLayout::TakeRowResult ());
}



namespace gsi
{

static gsi::Methods methods_QFormLayout_TakeRowResult () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFormLayout::TakeRowResult::TakeRowResult()\nThis method creates an object of class QFormLayout::TakeRowResult.", &_init_ctor_QFormLayout_TakeRowResult_0, &_call_ctor_QFormLayout_TakeRowResult_0);
  return methods;
}

gsi::Class<QFormLayout::TakeRowResult> decl_QFormLayout_TakeRowResult ("QtWidgets", "QFormLayout_TakeRowResult",
  methods_QFormLayout_TakeRowResult (),
  "@qt\n@brief Binding of QFormLayout::TakeRowResult");

gsi::ClassExt<QFormLayout> decl_QFormLayout_TakeRowResult_as_child (decl_QFormLayout_TakeRowResult, "TakeRowResult");

GSI_QTWIDGETS_PUBLIC gsi::Class<QFormLayout::TakeRowResult> &qtdecl_QFormLayout_TakeRowResult () { return decl_QFormLayout_TakeRowResult; }

}

