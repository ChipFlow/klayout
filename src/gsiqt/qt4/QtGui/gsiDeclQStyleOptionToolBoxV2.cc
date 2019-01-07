
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
*  @file gsiDeclQStyleOptionToolBoxV2.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionToolBoxV2>
#include <QStyleOptionToolBox>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionToolBoxV2

//  Constructor QStyleOptionToolBoxV2::QStyleOptionToolBoxV2()


static void _init_ctor_QStyleOptionToolBoxV2_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionToolBoxV2> ();
}

static void _call_ctor_QStyleOptionToolBoxV2_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionToolBoxV2 *> (new QStyleOptionToolBoxV2 ());
}


//  Constructor QStyleOptionToolBoxV2::QStyleOptionToolBoxV2(const QStyleOptionToolBoxV2 &other)


static void _init_ctor_QStyleOptionToolBoxV2_3403 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionToolBoxV2 & > (argspec_0);
  decl->set_return_new<QStyleOptionToolBoxV2> ();
}

static void _call_ctor_QStyleOptionToolBoxV2_3403 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionToolBoxV2 &arg1 = args.read<const QStyleOptionToolBoxV2 & > (heap);
  ret.write<QStyleOptionToolBoxV2 *> (new QStyleOptionToolBoxV2 (arg1));
}


//  Constructor QStyleOptionToolBoxV2::QStyleOptionToolBoxV2(const QStyleOptionToolBox &other)


static void _init_ctor_QStyleOptionToolBoxV2_3267 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionToolBox & > (argspec_0);
  decl->set_return_new<QStyleOptionToolBoxV2> ();
}

static void _call_ctor_QStyleOptionToolBoxV2_3267 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionToolBox &arg1 = args.read<const QStyleOptionToolBox & > (heap);
  ret.write<QStyleOptionToolBoxV2 *> (new QStyleOptionToolBoxV2 (arg1));
}


// QStyleOptionToolBoxV2 &QStyleOptionToolBoxV2::operator=(const QStyleOptionToolBox &other)


static void _init_f_operator_eq__3267 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionToolBox & > (argspec_0);
  decl->set_return<QStyleOptionToolBoxV2 & > ();
}

static void _call_f_operator_eq__3267 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionToolBox &arg1 = args.read<const QStyleOptionToolBox & > (heap);
  ret.write<QStyleOptionToolBoxV2 & > ((QStyleOptionToolBoxV2 &)((QStyleOptionToolBoxV2 *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionToolBoxV2 () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionToolBoxV2::QStyleOptionToolBoxV2()\nThis method creates an object of class QStyleOptionToolBoxV2.", &_init_ctor_QStyleOptionToolBoxV2_0, &_call_ctor_QStyleOptionToolBoxV2_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionToolBoxV2::QStyleOptionToolBoxV2(const QStyleOptionToolBoxV2 &other)\nThis method creates an object of class QStyleOptionToolBoxV2.", &_init_ctor_QStyleOptionToolBoxV2_3403, &_call_ctor_QStyleOptionToolBoxV2_3403);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionToolBoxV2::QStyleOptionToolBoxV2(const QStyleOptionToolBox &other)\nThis method creates an object of class QStyleOptionToolBoxV2.", &_init_ctor_QStyleOptionToolBoxV2_3267, &_call_ctor_QStyleOptionToolBoxV2_3267);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QStyleOptionToolBoxV2 &QStyleOptionToolBoxV2::operator=(const QStyleOptionToolBox &other)\n", false, &_init_f_operator_eq__3267, &_call_f_operator_eq__3267);
  return methods;
}

gsi::Class<QStyleOptionToolBox> &qtdecl_QStyleOptionToolBox ();

gsi::Class<QStyleOptionToolBoxV2> decl_QStyleOptionToolBoxV2 (qtdecl_QStyleOptionToolBox (), "QtGui", "QStyleOptionToolBoxV2",
  methods_QStyleOptionToolBoxV2 (),
  "@qt\n@brief Binding of QStyleOptionToolBoxV2");


GSI_QTGUI_PUBLIC gsi::Class<QStyleOptionToolBoxV2> &qtdecl_QStyleOptionToolBoxV2 () { return decl_QStyleOptionToolBoxV2; }

}

