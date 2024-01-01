
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
*  @file gsiDeclQPagedPaintDevice_Margins.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPagedPaintDevice>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QPagedPaintDevice::Margins

//  Constructor QPagedPaintDevice::Margins::Margins()


static void _init_ctor_QPagedPaintDevice_Margins_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPagedPaintDevice::Margins> ();
}

static void _call_ctor_QPagedPaintDevice_Margins_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPagedPaintDevice::Margins *> (new QPagedPaintDevice::Margins ());
}



namespace gsi
{

static gsi::Methods methods_QPagedPaintDevice_Margins () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPagedPaintDevice::Margins::Margins()\nThis method creates an object of class QPagedPaintDevice::Margins.", &_init_ctor_QPagedPaintDevice_Margins_0, &_call_ctor_QPagedPaintDevice_Margins_0);
  return methods;
}

gsi::Class<QPagedPaintDevice::Margins> decl_QPagedPaintDevice_Margins ("QtGui", "QPagedPaintDevice_Margins",
  methods_QPagedPaintDevice_Margins (),
  "@qt\n@brief Binding of QPagedPaintDevice::Margins");

gsi::ClassExt<QPagedPaintDevice> decl_QPagedPaintDevice_Margins_as_child (decl_QPagedPaintDevice_Margins, "Margins");

GSI_QTGUI_PUBLIC gsi::Class<QPagedPaintDevice::Margins> &qtdecl_QPagedPaintDevice_Margins () { return decl_QPagedPaintDevice_Margins; }

}

