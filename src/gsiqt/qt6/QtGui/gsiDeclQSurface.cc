
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
*  @file gsiDeclQSurface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSurface>
#include <QSize>
#include <QSurfaceFormat>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSurface

// QSurfaceFormat QSurface::format()


static void _init_f_format_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSurfaceFormat > ();
}

static void _call_f_format_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSurfaceFormat > ((QSurfaceFormat)((QSurface *)cls)->format ());
}


// QSize QSurface::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QSurface *)cls)->size ());
}


// bool QSurface::supportsOpenGL()


static void _init_f_supportsOpenGL_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_supportsOpenGL_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSurface *)cls)->supportsOpenGL ());
}


// QSurface::SurfaceClass QSurface::surfaceClass()


static void _init_f_surfaceClass_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSurface::SurfaceClass>::target_type > ();
}

static void _call_f_surfaceClass_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSurface::SurfaceClass>::target_type > ((qt_gsi::Converter<QSurface::SurfaceClass>::target_type)qt_gsi::CppToQtAdaptor<QSurface::SurfaceClass>(((QSurface *)cls)->surfaceClass ()));
}


// QSurface::SurfaceType QSurface::surfaceType()


static void _init_f_surfaceType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSurface::SurfaceType>::target_type > ();
}

static void _call_f_surfaceType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSurface::SurfaceType>::target_type > ((qt_gsi::Converter<QSurface::SurfaceType>::target_type)qt_gsi::CppToQtAdaptor<QSurface::SurfaceType>(((QSurface *)cls)->surfaceType ()));
}



namespace gsi
{

static gsi::Methods methods_QSurface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("format", "@brief Method QSurfaceFormat QSurface::format()\n", true, &_init_f_format_c0, &_call_f_format_c0);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method QSize QSurface::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericMethod ("supportsOpenGL", "@brief Method bool QSurface::supportsOpenGL()\n", true, &_init_f_supportsOpenGL_c0, &_call_f_supportsOpenGL_c0);
  methods += new qt_gsi::GenericMethod ("surfaceClass", "@brief Method QSurface::SurfaceClass QSurface::surfaceClass()\n", true, &_init_f_surfaceClass_c0, &_call_f_surfaceClass_c0);
  methods += new qt_gsi::GenericMethod ("surfaceType", "@brief Method QSurface::SurfaceType QSurface::surfaceType()\n", true, &_init_f_surfaceType_c0, &_call_f_surfaceType_c0);
  return methods;
}

gsi::Class<QSurface> decl_QSurface ("QtGui", "QSurface",
  methods_QSurface (),
  "@qt\n@brief Binding of QSurface");


GSI_QTGUI_PUBLIC gsi::Class<QSurface> &qtdecl_QSurface () { return decl_QSurface; }

}


//  Implementation of the enum wrapper class for QSurface::SurfaceClass
namespace qt_gsi
{

static gsi::Enum<QSurface::SurfaceClass> decl_QSurface_SurfaceClass_Enum ("QtGui", "QSurface_SurfaceClass",
    gsi::enum_const ("Window", QSurface::Window, "@brief Enum constant QSurface::Window") +
    gsi::enum_const ("Offscreen", QSurface::Offscreen, "@brief Enum constant QSurface::Offscreen"),
  "@qt\n@brief This class represents the QSurface::SurfaceClass enum");

static gsi::QFlagsClass<QSurface::SurfaceClass > decl_QSurface_SurfaceClass_Enums ("QtGui", "QSurface_QFlags_SurfaceClass",
  "@qt\n@brief This class represents the QFlags<QSurface::SurfaceClass> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSurface> inject_QSurface_SurfaceClass_Enum_in_parent (decl_QSurface_SurfaceClass_Enum.defs ());
static gsi::ClassExt<QSurface> decl_QSurface_SurfaceClass_Enum_as_child (decl_QSurface_SurfaceClass_Enum, "SurfaceClass");
static gsi::ClassExt<QSurface> decl_QSurface_SurfaceClass_Enums_as_child (decl_QSurface_SurfaceClass_Enums, "QFlags_SurfaceClass");

}


//  Implementation of the enum wrapper class for QSurface::SurfaceType
namespace qt_gsi
{

static gsi::Enum<QSurface::SurfaceType> decl_QSurface_SurfaceType_Enum ("QtGui", "QSurface_SurfaceType",
    gsi::enum_const ("RasterSurface", QSurface::RasterSurface, "@brief Enum constant QSurface::RasterSurface") +
    gsi::enum_const ("OpenGLSurface", QSurface::OpenGLSurface, "@brief Enum constant QSurface::OpenGLSurface") +
    gsi::enum_const ("RasterGLSurface", QSurface::RasterGLSurface, "@brief Enum constant QSurface::RasterGLSurface") +
    gsi::enum_const ("OpenVGSurface", QSurface::OpenVGSurface, "@brief Enum constant QSurface::OpenVGSurface") +
    gsi::enum_const ("VulkanSurface", QSurface::VulkanSurface, "@brief Enum constant QSurface::VulkanSurface") +
    gsi::enum_const ("MetalSurface", QSurface::MetalSurface, "@brief Enum constant QSurface::MetalSurface") +
    gsi::enum_const ("Direct3DSurface", QSurface::Direct3DSurface, "@brief Enum constant QSurface::Direct3DSurface"),
  "@qt\n@brief This class represents the QSurface::SurfaceType enum");

static gsi::QFlagsClass<QSurface::SurfaceType > decl_QSurface_SurfaceType_Enums ("QtGui", "QSurface_QFlags_SurfaceType",
  "@qt\n@brief This class represents the QFlags<QSurface::SurfaceType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSurface> inject_QSurface_SurfaceType_Enum_in_parent (decl_QSurface_SurfaceType_Enum.defs ());
static gsi::ClassExt<QSurface> decl_QSurface_SurfaceType_Enum_as_child (decl_QSurface_SurfaceType_Enum, "SurfaceType");
static gsi::ClassExt<QSurface> decl_QSurface_SurfaceType_Enums_as_child (decl_QSurface_SurfaceType_Enums, "QFlags_SurfaceType");

}

