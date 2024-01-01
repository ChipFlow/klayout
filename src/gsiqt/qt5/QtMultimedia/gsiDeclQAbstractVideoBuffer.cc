
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
*  @file gsiDeclQAbstractVideoBuffer.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAbstractVideoBuffer>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAbstractVideoBuffer

// QVariant QAbstractVideoBuffer::handle()


static void _init_f_handle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_f_handle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QAbstractVideoBuffer *)cls)->handle ());
}


// QAbstractVideoBuffer::HandleType QAbstractVideoBuffer::handleType()


static void _init_f_handleType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAbstractVideoBuffer::HandleType>::target_type > ();
}

static void _call_f_handleType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAbstractVideoBuffer::HandleType>::target_type > ((qt_gsi::Converter<QAbstractVideoBuffer::HandleType>::target_type)qt_gsi::CppToQtAdaptor<QAbstractVideoBuffer::HandleType>(((QAbstractVideoBuffer *)cls)->handleType ()));
}


// QAbstractVideoBuffer::MapMode QAbstractVideoBuffer::mapMode()


static void _init_f_mapMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAbstractVideoBuffer::MapMode>::target_type > ();
}

static void _call_f_mapMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAbstractVideoBuffer::MapMode>::target_type > ((qt_gsi::Converter<QAbstractVideoBuffer::MapMode>::target_type)qt_gsi::CppToQtAdaptor<QAbstractVideoBuffer::MapMode>(((QAbstractVideoBuffer *)cls)->mapMode ()));
}


// void QAbstractVideoBuffer::release()


static void _init_f_release_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_release_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractVideoBuffer *)cls)->release ();
}


// void QAbstractVideoBuffer::unmap()


static void _init_f_unmap_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_unmap_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractVideoBuffer *)cls)->unmap ();
}



namespace gsi
{

static gsi::Methods methods_QAbstractVideoBuffer () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("handle", "@brief Method QVariant QAbstractVideoBuffer::handle()\n", true, &_init_f_handle_c0, &_call_f_handle_c0);
  methods += new qt_gsi::GenericMethod ("handleType", "@brief Method QAbstractVideoBuffer::HandleType QAbstractVideoBuffer::handleType()\n", true, &_init_f_handleType_c0, &_call_f_handleType_c0);
  methods += new qt_gsi::GenericMethod ("mapMode", "@brief Method QAbstractVideoBuffer::MapMode QAbstractVideoBuffer::mapMode()\n", true, &_init_f_mapMode_c0, &_call_f_mapMode_c0);
  methods += new qt_gsi::GenericMethod ("release", "@brief Method void QAbstractVideoBuffer::release()\n", false, &_init_f_release_0, &_call_f_release_0);
  methods += new qt_gsi::GenericMethod ("unmap", "@brief Method void QAbstractVideoBuffer::unmap()\n", false, &_init_f_unmap_0, &_call_f_unmap_0);
  return methods;
}

gsi::Class<QAbstractVideoBuffer> decl_QAbstractVideoBuffer ("QtMultimedia", "QAbstractVideoBuffer",
  methods_QAbstractVideoBuffer (),
  "@qt\n@brief Binding of QAbstractVideoBuffer");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QAbstractVideoBuffer> &qtdecl_QAbstractVideoBuffer () { return decl_QAbstractVideoBuffer; }

}


//  Implementation of the enum wrapper class for QAbstractVideoBuffer::HandleType
namespace qt_gsi
{

static gsi::Enum<QAbstractVideoBuffer::HandleType> decl_QAbstractVideoBuffer_HandleType_Enum ("QtMultimedia", "QAbstractVideoBuffer_HandleType",
    gsi::enum_const ("NoHandle", QAbstractVideoBuffer::NoHandle, "@brief Enum constant QAbstractVideoBuffer::NoHandle") +
    gsi::enum_const ("GLTextureHandle", QAbstractVideoBuffer::GLTextureHandle, "@brief Enum constant QAbstractVideoBuffer::GLTextureHandle") +
    gsi::enum_const ("XvShmImageHandle", QAbstractVideoBuffer::XvShmImageHandle, "@brief Enum constant QAbstractVideoBuffer::XvShmImageHandle") +
    gsi::enum_const ("CoreImageHandle", QAbstractVideoBuffer::CoreImageHandle, "@brief Enum constant QAbstractVideoBuffer::CoreImageHandle") +
    gsi::enum_const ("QPixmapHandle", QAbstractVideoBuffer::QPixmapHandle, "@brief Enum constant QAbstractVideoBuffer::QPixmapHandle") +
    gsi::enum_const ("EGLImageHandle", QAbstractVideoBuffer::EGLImageHandle, "@brief Enum constant QAbstractVideoBuffer::EGLImageHandle") +
    gsi::enum_const ("UserHandle", QAbstractVideoBuffer::UserHandle, "@brief Enum constant QAbstractVideoBuffer::UserHandle"),
  "@qt\n@brief This class represents the QAbstractVideoBuffer::HandleType enum");

static gsi::QFlagsClass<QAbstractVideoBuffer::HandleType > decl_QAbstractVideoBuffer_HandleType_Enums ("QtMultimedia", "QAbstractVideoBuffer_QFlags_HandleType",
  "@qt\n@brief This class represents the QFlags<QAbstractVideoBuffer::HandleType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAbstractVideoBuffer> inject_QAbstractVideoBuffer_HandleType_Enum_in_parent (decl_QAbstractVideoBuffer_HandleType_Enum.defs ());
static gsi::ClassExt<QAbstractVideoBuffer> decl_QAbstractVideoBuffer_HandleType_Enum_as_child (decl_QAbstractVideoBuffer_HandleType_Enum, "HandleType");
static gsi::ClassExt<QAbstractVideoBuffer> decl_QAbstractVideoBuffer_HandleType_Enums_as_child (decl_QAbstractVideoBuffer_HandleType_Enums, "QFlags_HandleType");

}


//  Implementation of the enum wrapper class for QAbstractVideoBuffer::MapMode
namespace qt_gsi
{

static gsi::Enum<QAbstractVideoBuffer::MapMode> decl_QAbstractVideoBuffer_MapMode_Enum ("QtMultimedia", "QAbstractVideoBuffer_MapMode",
    gsi::enum_const ("NotMapped", QAbstractVideoBuffer::NotMapped, "@brief Enum constant QAbstractVideoBuffer::NotMapped") +
    gsi::enum_const ("ReadOnly", QAbstractVideoBuffer::ReadOnly, "@brief Enum constant QAbstractVideoBuffer::ReadOnly") +
    gsi::enum_const ("WriteOnly", QAbstractVideoBuffer::WriteOnly, "@brief Enum constant QAbstractVideoBuffer::WriteOnly") +
    gsi::enum_const ("ReadWrite", QAbstractVideoBuffer::ReadWrite, "@brief Enum constant QAbstractVideoBuffer::ReadWrite"),
  "@qt\n@brief This class represents the QAbstractVideoBuffer::MapMode enum");

static gsi::QFlagsClass<QAbstractVideoBuffer::MapMode > decl_QAbstractVideoBuffer_MapMode_Enums ("QtMultimedia", "QAbstractVideoBuffer_QFlags_MapMode",
  "@qt\n@brief This class represents the QFlags<QAbstractVideoBuffer::MapMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAbstractVideoBuffer> inject_QAbstractVideoBuffer_MapMode_Enum_in_parent (decl_QAbstractVideoBuffer_MapMode_Enum.defs ());
static gsi::ClassExt<QAbstractVideoBuffer> decl_QAbstractVideoBuffer_MapMode_Enum_as_child (decl_QAbstractVideoBuffer_MapMode_Enum, "MapMode");
static gsi::ClassExt<QAbstractVideoBuffer> decl_QAbstractVideoBuffer_MapMode_Enums_as_child (decl_QAbstractVideoBuffer_MapMode_Enums, "QFlags_MapMode");

}

