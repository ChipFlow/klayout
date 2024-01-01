
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
*  @file gsiDeclQStyleOptionDockWidget.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionDockWidget>
#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionDockWidget

//  Constructor QStyleOptionDockWidget::QStyleOptionDockWidget()


static void _init_ctor_QStyleOptionDockWidget_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionDockWidget> ();
}

static void _call_ctor_QStyleOptionDockWidget_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionDockWidget *> (new QStyleOptionDockWidget ());
}


//  Constructor QStyleOptionDockWidget::QStyleOptionDockWidget(const QStyleOptionDockWidget &other)


static void _init_ctor_QStyleOptionDockWidget_3553 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionDockWidget & > (argspec_0);
  decl->set_return_new<QStyleOptionDockWidget> ();
}

static void _call_ctor_QStyleOptionDockWidget_3553 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionDockWidget &arg1 = gsi::arg_reader<const QStyleOptionDockWidget & >() (args, heap);
  ret.write<QStyleOptionDockWidget *> (new QStyleOptionDockWidget (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionDockWidget () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionDockWidget::QStyleOptionDockWidget()\nThis method creates an object of class QStyleOptionDockWidget.", &_init_ctor_QStyleOptionDockWidget_0, &_call_ctor_QStyleOptionDockWidget_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionDockWidget::QStyleOptionDockWidget(const QStyleOptionDockWidget &other)\nThis method creates an object of class QStyleOptionDockWidget.", &_init_ctor_QStyleOptionDockWidget_3553, &_call_ctor_QStyleOptionDockWidget_3553);
  return methods;
}

gsi::Class<QStyleOption> &qtdecl_QStyleOption ();

gsi::Class<QStyleOptionDockWidget> decl_QStyleOptionDockWidget (qtdecl_QStyleOption (), "QtGui", "QStyleOptionDockWidget",
  methods_QStyleOptionDockWidget (),
  "@qt\n@brief Binding of QStyleOptionDockWidget");


GSI_QTGUI_PUBLIC gsi::Class<QStyleOptionDockWidget> &qtdecl_QStyleOptionDockWidget () { return decl_QStyleOptionDockWidget; }

}

