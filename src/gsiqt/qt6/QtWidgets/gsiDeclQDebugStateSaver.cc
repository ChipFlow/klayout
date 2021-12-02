
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
*  @file gsiDeclQDebugStateSaver.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDebugStateSaver>
#include <QDebug>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDebugStateSaver

//  Constructor QDebugStateSaver::QDebugStateSaver(QDebug &dbg)


static void _init_ctor_QDebugStateSaver_1186 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dbg");
  decl->add_arg<QDebug & > (argspec_0);
  decl->set_return_new<QDebugStateSaver> ();
}

static void _call_ctor_QDebugStateSaver_1186 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QDebug &arg1 = gsi::arg_reader<QDebug & >() (args, heap);
  ret.write<QDebugStateSaver *> (new QDebugStateSaver (arg1));
}



namespace gsi
{

static gsi::Methods methods_QDebugStateSaver () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDebugStateSaver::QDebugStateSaver(QDebug &dbg)\nThis method creates an object of class QDebugStateSaver.", &_init_ctor_QDebugStateSaver_1186, &_call_ctor_QDebugStateSaver_1186);
  return methods;
}

gsi::Class<QDebugStateSaver> decl_QDebugStateSaver ("Qt", "QDebugStateSaver",
  methods_QDebugStateSaver (),
  "@qt\n@brief Binding of QDebugStateSaver");


GSI_QT_PUBLIC gsi::Class<QDebugStateSaver> &qtdecl_QDebugStateSaver () { return decl_QDebugStateSaver; }

}

