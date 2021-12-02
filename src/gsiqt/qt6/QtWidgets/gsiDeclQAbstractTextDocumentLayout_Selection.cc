
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
*  @file gsiDeclQAbstractTextDocumentLayout_Selection.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAbstractTextDocumentLayout>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QAbstractTextDocumentLayout::Selection

//  Constructor QAbstractTextDocumentLayout::Selection::Selection()


static void _init_ctor_QAbstractTextDocumentLayout_Selection_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAbstractTextDocumentLayout::Selection> ();
}

static void _call_ctor_QAbstractTextDocumentLayout_Selection_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractTextDocumentLayout::Selection *> (new QAbstractTextDocumentLayout::Selection ());
}



namespace gsi
{

static gsi::Methods methods_QAbstractTextDocumentLayout_Selection () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAbstractTextDocumentLayout::Selection::Selection()\nThis method creates an object of class QAbstractTextDocumentLayout::Selection.", &_init_ctor_QAbstractTextDocumentLayout_Selection_0, &_call_ctor_QAbstractTextDocumentLayout_Selection_0);
  return methods;
}

gsi::Class<QAbstractTextDocumentLayout::Selection> decl_QAbstractTextDocumentLayout_Selection ("Qt", "QAbstractTextDocumentLayout_Selection",
  methods_QAbstractTextDocumentLayout_Selection (),
  "@qt\n@brief Binding of QAbstractTextDocumentLayout::Selection");

gsi::ClassExt<QAbstractTextDocumentLayout> decl_QAbstractTextDocumentLayout_Selection_as_child (decl_QAbstractTextDocumentLayout_Selection, "Selection");

GSI_QT_PUBLIC gsi::Class<QAbstractTextDocumentLayout::Selection> &qtdecl_QAbstractTextDocumentLayout_Selection () { return decl_QAbstractTextDocumentLayout_Selection; }

}

