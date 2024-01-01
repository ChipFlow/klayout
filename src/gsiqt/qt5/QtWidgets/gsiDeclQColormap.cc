
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
*  @file gsiDeclQColormap.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QColormap>
#include <QColor>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QColormap

//  Constructor QColormap::QColormap(const QColormap &colormap)


static void _init_ctor_QColormap_2223 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("colormap");
  decl->add_arg<const QColormap & > (argspec_0);
  decl->set_return_new<QColormap> ();
}

static void _call_ctor_QColormap_2223 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QColormap &arg1 = gsi::arg_reader<const QColormap & >() (args, heap);
  ret.write<QColormap *> (new QColormap (arg1));
}


// const QColor QColormap::colorAt(unsigned int pixel)


static void _init_f_colorAt_c1772 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pixel");
  decl->add_arg<unsigned int > (argspec_0);
  decl->set_return<const QColor > ();
}

static void _call_f_colorAt_c1772 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  unsigned int arg1 = gsi::arg_reader<unsigned int >() (args, heap);
  ret.write<const QColor > ((const QColor)((QColormap *)cls)->colorAt (arg1));
}


// const QVector<QColor> QColormap::colormap()


static void _init_f_colormap_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QVector<QColor> > ();
}

static void _call_f_colormap_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QVector<QColor> > ((const QVector<QColor>)((QColormap *)cls)->colormap ());
}


// int QColormap::depth()


static void _init_f_depth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_depth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QColormap *)cls)->depth ());
}


// QColormap::Mode QColormap::mode()


static void _init_f_mode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QColormap::Mode>::target_type > ();
}

static void _call_f_mode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QColormap::Mode>::target_type > ((qt_gsi::Converter<QColormap::Mode>::target_type)qt_gsi::CppToQtAdaptor<QColormap::Mode>(((QColormap *)cls)->mode ()));
}


// QColormap &QColormap::operator=(const QColormap &colormap)


static void _init_f_operator_eq__2223 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("colormap");
  decl->add_arg<const QColormap & > (argspec_0);
  decl->set_return<QColormap & > ();
}

static void _call_f_operator_eq__2223 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QColormap &arg1 = gsi::arg_reader<const QColormap & >() (args, heap);
  ret.write<QColormap & > ((QColormap &)((QColormap *)cls)->operator= (arg1));
}


// unsigned int QColormap::pixel(const QColor &color)


static void _init_f_pixel_c1905 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("color");
  decl->add_arg<const QColor & > (argspec_0);
  decl->set_return<unsigned int > ();
}

static void _call_f_pixel_c1905 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QColor &arg1 = gsi::arg_reader<const QColor & >() (args, heap);
  ret.write<unsigned int > ((unsigned int)((QColormap *)cls)->pixel (arg1));
}


// int QColormap::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QColormap *)cls)->size ());
}


// static void QColormap::cleanup()


static void _init_f_cleanup_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_cleanup_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  QColormap::cleanup ();
}


// static QColormap QColormap::instance(int screen)


static void _init_f_instance_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("screen", true, "-1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QColormap > ();
}

static void _call_f_instance_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QColormap > ((QColormap)QColormap::instance (arg1));
}



namespace gsi
{

static gsi::Methods methods_QColormap () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QColormap::QColormap(const QColormap &colormap)\nThis method creates an object of class QColormap.", &_init_ctor_QColormap_2223, &_call_ctor_QColormap_2223);
  methods += new qt_gsi::GenericMethod ("colorAt", "@brief Method const QColor QColormap::colorAt(unsigned int pixel)\n", true, &_init_f_colorAt_c1772, &_call_f_colorAt_c1772);
  methods += new qt_gsi::GenericMethod ("colormap", "@brief Method const QVector<QColor> QColormap::colormap()\n", true, &_init_f_colormap_c0, &_call_f_colormap_c0);
  methods += new qt_gsi::GenericMethod ("depth", "@brief Method int QColormap::depth()\n", true, &_init_f_depth_c0, &_call_f_depth_c0);
  methods += new qt_gsi::GenericMethod ("mode", "@brief Method QColormap::Mode QColormap::mode()\n", true, &_init_f_mode_c0, &_call_f_mode_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QColormap &QColormap::operator=(const QColormap &colormap)\n", false, &_init_f_operator_eq__2223, &_call_f_operator_eq__2223);
  methods += new qt_gsi::GenericMethod ("pixel", "@brief Method unsigned int QColormap::pixel(const QColor &color)\n", true, &_init_f_pixel_c1905, &_call_f_pixel_c1905);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method int QColormap::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericStaticMethod ("cleanup", "@brief Static method void QColormap::cleanup()\nThis method is static and can be called without an instance.", &_init_f_cleanup_0, &_call_f_cleanup_0);
  methods += new qt_gsi::GenericStaticMethod ("instance", "@brief Static method QColormap QColormap::instance(int screen)\nThis method is static and can be called without an instance.", &_init_f_instance_767, &_call_f_instance_767);
  return methods;
}

gsi::Class<QColormap> decl_QColormap ("QtWidgets", "QColormap",
  methods_QColormap (),
  "@qt\n@brief Binding of QColormap");


GSI_QTWIDGETS_PUBLIC gsi::Class<QColormap> &qtdecl_QColormap () { return decl_QColormap; }

}


//  Implementation of the enum wrapper class for QColormap::Mode
namespace qt_gsi
{

static gsi::Enum<QColormap::Mode> decl_QColormap_Mode_Enum ("QtWidgets", "QColormap_Mode",
    gsi::enum_const ("Direct", QColormap::Direct, "@brief Enum constant QColormap::Direct") +
    gsi::enum_const ("Indexed", QColormap::Indexed, "@brief Enum constant QColormap::Indexed") +
    gsi::enum_const ("Gray", QColormap::Gray, "@brief Enum constant QColormap::Gray"),
  "@qt\n@brief This class represents the QColormap::Mode enum");

static gsi::QFlagsClass<QColormap::Mode > decl_QColormap_Mode_Enums ("QtWidgets", "QColormap_QFlags_Mode",
  "@qt\n@brief This class represents the QFlags<QColormap::Mode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QColormap> inject_QColormap_Mode_Enum_in_parent (decl_QColormap_Mode_Enum.defs ());
static gsi::ClassExt<QColormap> decl_QColormap_Mode_Enum_as_child (decl_QColormap_Mode_Enum, "Mode");
static gsi::ClassExt<QColormap> decl_QColormap_Mode_Enums_as_child (decl_QColormap_Mode_Enums, "QFlags_Mode");

}

