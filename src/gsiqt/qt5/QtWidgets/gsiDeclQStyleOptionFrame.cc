
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
*  @file gsiDeclQStyleOptionFrame.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionFrame>
#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionFrame

//  Constructor QStyleOptionFrame::QStyleOptionFrame()


static void _init_ctor_QStyleOptionFrame_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionFrame> ();
}

static void _call_ctor_QStyleOptionFrame_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionFrame *> (new QStyleOptionFrame ());
}


//  Constructor QStyleOptionFrame::QStyleOptionFrame(const QStyleOptionFrame &other)


static void _init_ctor_QStyleOptionFrame_3047 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionFrame & > (argspec_0);
  decl->set_return_new<QStyleOptionFrame> ();
}

static void _call_ctor_QStyleOptionFrame_3047 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionFrame &arg1 = gsi::arg_reader<const QStyleOptionFrame & >() (args, heap);
  ret.write<QStyleOptionFrame *> (new QStyleOptionFrame (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionFrame () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionFrame::QStyleOptionFrame()\nThis method creates an object of class QStyleOptionFrame.", &_init_ctor_QStyleOptionFrame_0, &_call_ctor_QStyleOptionFrame_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionFrame::QStyleOptionFrame(const QStyleOptionFrame &other)\nThis method creates an object of class QStyleOptionFrame.", &_init_ctor_QStyleOptionFrame_3047, &_call_ctor_QStyleOptionFrame_3047);
  return methods;
}

gsi::Class<QStyleOption> &qtdecl_QStyleOption ();

gsi::Class<QStyleOptionFrame> decl_QStyleOptionFrame (qtdecl_QStyleOption (), "QtWidgets", "QStyleOptionFrame",
  methods_QStyleOptionFrame (),
  "@qt\n@brief Binding of QStyleOptionFrame");


GSI_QTWIDGETS_PUBLIC gsi::Class<QStyleOptionFrame> &qtdecl_QStyleOptionFrame () { return decl_QStyleOptionFrame; }

}

