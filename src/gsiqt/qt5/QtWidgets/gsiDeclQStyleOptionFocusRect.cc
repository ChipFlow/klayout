
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
*  @file gsiDeclQStyleOptionFocusRect.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionFocusRect>
#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionFocusRect

//  Constructor QStyleOptionFocusRect::QStyleOptionFocusRect()


static void _init_ctor_QStyleOptionFocusRect_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionFocusRect> ();
}

static void _call_ctor_QStyleOptionFocusRect_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionFocusRect *> (new QStyleOptionFocusRect ());
}


//  Constructor QStyleOptionFocusRect::QStyleOptionFocusRect(const QStyleOptionFocusRect &other)


static void _init_ctor_QStyleOptionFocusRect_3466 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionFocusRect & > (argspec_0);
  decl->set_return_new<QStyleOptionFocusRect> ();
}

static void _call_ctor_QStyleOptionFocusRect_3466 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionFocusRect &arg1 = gsi::arg_reader<const QStyleOptionFocusRect & >() (args, heap);
  ret.write<QStyleOptionFocusRect *> (new QStyleOptionFocusRect (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionFocusRect () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionFocusRect::QStyleOptionFocusRect()\nThis method creates an object of class QStyleOptionFocusRect.", &_init_ctor_QStyleOptionFocusRect_0, &_call_ctor_QStyleOptionFocusRect_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionFocusRect::QStyleOptionFocusRect(const QStyleOptionFocusRect &other)\nThis method creates an object of class QStyleOptionFocusRect.", &_init_ctor_QStyleOptionFocusRect_3466, &_call_ctor_QStyleOptionFocusRect_3466);
  return methods;
}

gsi::Class<QStyleOption> &qtdecl_QStyleOption ();

gsi::Class<QStyleOptionFocusRect> decl_QStyleOptionFocusRect (qtdecl_QStyleOption (), "QtWidgets", "QStyleOptionFocusRect",
  methods_QStyleOptionFocusRect (),
  "@qt\n@brief Binding of QStyleOptionFocusRect");


GSI_QTWIDGETS_PUBLIC gsi::Class<QStyleOptionFocusRect> &qtdecl_QStyleOptionFocusRect () { return decl_QStyleOptionFocusRect; }

}

