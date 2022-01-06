
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
*  @file gsiDeclQStyleOptionViewItem.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionViewItem>
#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionViewItem

//  Constructor QStyleOptionViewItem::QStyleOptionViewItem()


static void _init_ctor_QStyleOptionViewItem_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionViewItem> ();
}

static void _call_ctor_QStyleOptionViewItem_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionViewItem *> (new QStyleOptionViewItem ());
}


//  Constructor QStyleOptionViewItem::QStyleOptionViewItem(const QStyleOptionViewItem &other)


static void _init_ctor_QStyleOptionViewItem_3366 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionViewItem & > (argspec_0);
  decl->set_return_new<QStyleOptionViewItem> ();
}

static void _call_ctor_QStyleOptionViewItem_3366 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionViewItem &arg1 = gsi::arg_reader<const QStyleOptionViewItem & >() (args, heap);
  ret.write<QStyleOptionViewItem *> (new QStyleOptionViewItem (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionViewItem () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionViewItem::QStyleOptionViewItem()\nThis method creates an object of class QStyleOptionViewItem.", &_init_ctor_QStyleOptionViewItem_0, &_call_ctor_QStyleOptionViewItem_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionViewItem::QStyleOptionViewItem(const QStyleOptionViewItem &other)\nThis method creates an object of class QStyleOptionViewItem.", &_init_ctor_QStyleOptionViewItem_3366, &_call_ctor_QStyleOptionViewItem_3366);
  return methods;
}

gsi::Class<QStyleOption> &qtdecl_QStyleOption ();

gsi::Class<QStyleOptionViewItem> decl_QStyleOptionViewItem (qtdecl_QStyleOption (), "QtGui", "QStyleOptionViewItem",
  methods_QStyleOptionViewItem (),
  "@qt\n@brief Binding of QStyleOptionViewItem");


GSI_QTGUI_PUBLIC gsi::Class<QStyleOptionViewItem> &qtdecl_QStyleOptionViewItem () { return decl_QStyleOptionViewItem; }

}

