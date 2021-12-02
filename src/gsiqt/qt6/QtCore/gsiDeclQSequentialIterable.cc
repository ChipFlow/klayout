
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
*  @file gsiDeclQSequentialIterable.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSequentialIterable>
#include <QMetaSequence>
#include <QMetaType>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSequentialIterable

//  Constructor QSequentialIterable::QSequentialIterable()


static void _init_ctor_QSequentialIterable_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSequentialIterable> ();
}

static void _call_ctor_QSequentialIterable_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSequentialIterable *> (new QSequentialIterable ());
}


//  Constructor QSequentialIterable::QSequentialIterable(const QMetaSequence &metaSequence, const QMetaType &metaType, void *iterable)


static void _init_ctor_QSequentialIterable_5653 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("metaSequence");
  decl->add_arg<const QMetaSequence & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("metaType");
  decl->add_arg<const QMetaType & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("iterable");
  decl->add_arg<void * > (argspec_2);
  decl->set_return_new<QSequentialIterable> ();
}

static void _call_ctor_QSequentialIterable_5653 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaSequence &arg1 = gsi::arg_reader<const QMetaSequence & >() (args, heap);
  const QMetaType &arg2 = gsi::arg_reader<const QMetaType & >() (args, heap);
  void *arg3 = gsi::arg_reader<void * >() (args, heap);
  ret.write<QSequentialIterable *> (new QSequentialIterable (arg1, arg2, arg3));
}


//  Constructor QSequentialIterable::QSequentialIterable(const QMetaSequence &metaSequence, const QMetaType &metaType, const void *iterable)


static void _init_ctor_QSequentialIterable_6348 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("metaSequence");
  decl->add_arg<const QMetaSequence & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("metaType");
  decl->add_arg<const QMetaType & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("iterable");
  decl->add_arg<const void * > (argspec_2);
  decl->set_return_new<QSequentialIterable> ();
}

static void _call_ctor_QSequentialIterable_6348 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaSequence &arg1 = gsi::arg_reader<const QMetaSequence & >() (args, heap);
  const QMetaType &arg2 = gsi::arg_reader<const QMetaType & >() (args, heap);
  const void *arg3 = gsi::arg_reader<const void * >() (args, heap);
  ret.write<QSequentialIterable *> (new QSequentialIterable (arg1, arg2, arg3));
}


// void QSequentialIterable::addValue(const QVariant &value, QSequentialIterable::Position position)


static void _init_f_addValue_5356 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QVariant & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("position", true, "QSequentialIterable::Unspecified");
  decl->add_arg<const qt_gsi::Converter<QSequentialIterable::Position>::target_type & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_addValue_5356 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVariant &arg1 = gsi::arg_reader<const QVariant & >() (args, heap);
  const qt_gsi::Converter<QSequentialIterable::Position>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QSequentialIterable::Position>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QSequentialIterable::Position>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QSequentialIterable::Position>(heap, QSequentialIterable::Unspecified), heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSequentialIterable *)cls)->addValue (arg1, qt_gsi::QtToCppAdaptor<QSequentialIterable::Position>(arg2).cref());
}


// QVariant QSequentialIterable::at(qsizetype idx)


static void _init_f_at_c1442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("idx");
  decl->add_arg<qsizetype > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_at_c1442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  ret.write<QVariant > ((QVariant)((QSequentialIterable *)cls)->at (arg1));
}


// QSequentialIterable::const_iterator QSequentialIterable::constBegin()


static void _init_f_constBegin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSequentialIterable::const_iterator > ();
}

static void _call_f_constBegin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSequentialIterable::const_iterator > ((QSequentialIterable::const_iterator)((QSequentialIterable *)cls)->constBegin ());
}


// QSequentialIterable::const_iterator QSequentialIterable::constEnd()


static void _init_f_constEnd_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSequentialIterable::const_iterator > ();
}

static void _call_f_constEnd_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSequentialIterable::const_iterator > ((QSequentialIterable::const_iterator)((QSequentialIterable *)cls)->constEnd ());
}


// QSequentialIterable::iterator QSequentialIterable::mutableBegin()


static void _init_f_mutableBegin_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSequentialIterable::iterator > ();
}

static void _call_f_mutableBegin_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSequentialIterable::iterator > ((QSequentialIterable::iterator)((QSequentialIterable *)cls)->mutableBegin ());
}


// QSequentialIterable::iterator QSequentialIterable::mutableEnd()


static void _init_f_mutableEnd_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSequentialIterable::iterator > ();
}

static void _call_f_mutableEnd_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSequentialIterable::iterator > ((QSequentialIterable::iterator)((QSequentialIterable *)cls)->mutableEnd ());
}


// void QSequentialIterable::removeValue(QSequentialIterable::Position position)


static void _init_f_removeValue_3345 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("position", true, "QSequentialIterable::Unspecified");
  decl->add_arg<const qt_gsi::Converter<QSequentialIterable::Position>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removeValue_3345 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSequentialIterable::Position>::target_type & arg1 = args ? gsi::arg_reader<const qt_gsi::Converter<QSequentialIterable::Position>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QSequentialIterable::Position>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QSequentialIterable::Position>(heap, QSequentialIterable::Unspecified), heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSequentialIterable *)cls)->removeValue (qt_gsi::QtToCppAdaptor<QSequentialIterable::Position>(arg1).cref());
}


// void QSequentialIterable::set(qsizetype idx, const QVariant &value)


static void _init_f_set_3453 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("idx");
  decl->add_arg<qsizetype > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_set_3453 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  const QVariant &arg2 = gsi::arg_reader<const QVariant & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSequentialIterable *)cls)->set (arg1, arg2);
}


// QMetaType QSequentialIterable::valueMetaType()


static void _init_f_valueMetaType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMetaType > ();
}

static void _call_f_valueMetaType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMetaType > ((QMetaType)((QSequentialIterable *)cls)->valueMetaType ());
}



namespace gsi
{

static gsi::Methods methods_QSequentialIterable () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSequentialIterable::QSequentialIterable()\nThis method creates an object of class QSequentialIterable.", &_init_ctor_QSequentialIterable_0, &_call_ctor_QSequentialIterable_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSequentialIterable::QSequentialIterable(const QMetaSequence &metaSequence, const QMetaType &metaType, void *iterable)\nThis method creates an object of class QSequentialIterable.", &_init_ctor_QSequentialIterable_5653, &_call_ctor_QSequentialIterable_5653);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSequentialIterable::QSequentialIterable(const QMetaSequence &metaSequence, const QMetaType &metaType, const void *iterable)\nThis method creates an object of class QSequentialIterable.", &_init_ctor_QSequentialIterable_6348, &_call_ctor_QSequentialIterable_6348);
  methods += new qt_gsi::GenericMethod ("addValue", "@brief Method void QSequentialIterable::addValue(const QVariant &value, QSequentialIterable::Position position)\n", false, &_init_f_addValue_5356, &_call_f_addValue_5356);
  methods += new qt_gsi::GenericMethod ("at", "@brief Method QVariant QSequentialIterable::at(qsizetype idx)\n", true, &_init_f_at_c1442, &_call_f_at_c1442);
  methods += new qt_gsi::GenericMethod ("constBegin", "@brief Method QSequentialIterable::const_iterator QSequentialIterable::constBegin()\n", true, &_init_f_constBegin_c0, &_call_f_constBegin_c0);
  methods += new qt_gsi::GenericMethod ("constEnd", "@brief Method QSequentialIterable::const_iterator QSequentialIterable::constEnd()\n", true, &_init_f_constEnd_c0, &_call_f_constEnd_c0);
  methods += new qt_gsi::GenericMethod ("mutableBegin", "@brief Method QSequentialIterable::iterator QSequentialIterable::mutableBegin()\n", false, &_init_f_mutableBegin_0, &_call_f_mutableBegin_0);
  methods += new qt_gsi::GenericMethod ("mutableEnd", "@brief Method QSequentialIterable::iterator QSequentialIterable::mutableEnd()\n", false, &_init_f_mutableEnd_0, &_call_f_mutableEnd_0);
  methods += new qt_gsi::GenericMethod ("removeValue", "@brief Method void QSequentialIterable::removeValue(QSequentialIterable::Position position)\n", false, &_init_f_removeValue_3345, &_call_f_removeValue_3345);
  methods += new qt_gsi::GenericMethod ("set", "@brief Method void QSequentialIterable::set(qsizetype idx, const QVariant &value)\n", false, &_init_f_set_3453, &_call_f_set_3453);
  methods += new qt_gsi::GenericMethod ("valueMetaType", "@brief Method QMetaType QSequentialIterable::valueMetaType()\n", true, &_init_f_valueMetaType_c0, &_call_f_valueMetaType_c0);
  return methods;
}

gsi::Class<QIterable<QMetaSequence>> &qtdecl_QIterable<QMetaSequence> ();

gsi::Class<QSequentialIterable> decl_QSequentialIterable (qtdecl_QIterable<QMetaSequence> (), "QtCore", "QSequentialIterable",
  methods_QSequentialIterable (),
  "@qt\n@brief Binding of QSequentialIterable");


GSI_QTCORE_PUBLIC gsi::Class<QSequentialIterable> &qtdecl_QSequentialIterable () { return decl_QSequentialIterable; }

}


//  Implementation of the enum wrapper class for QSequentialIterable::Position
namespace qt_gsi
{

static gsi::Enum<QSequentialIterable::Position> decl_QSequentialIterable_Position_Enum ("QtCore", "QSequentialIterable_Position",
    gsi::enum_const ("Unspecified", QSequentialIterable::Unspecified, "@brief Enum constant QSequentialIterable::Unspecified") +
    gsi::enum_const ("AtBegin", QSequentialIterable::AtBegin, "@brief Enum constant QSequentialIterable::AtBegin") +
    gsi::enum_const ("AtEnd", QSequentialIterable::AtEnd, "@brief Enum constant QSequentialIterable::AtEnd"),
  "@qt\n@brief This class represents the QSequentialIterable::Position enum");

static gsi::QFlagsClass<QSequentialIterable::Position > decl_QSequentialIterable_Position_Enums ("QtCore", "QSequentialIterable_QFlags_Position",
  "@qt\n@brief This class represents the QFlags<QSequentialIterable::Position> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSequentialIterable> inject_QSequentialIterable_Position_Enum_in_parent (decl_QSequentialIterable_Position_Enum.defs ());
static gsi::ClassExt<QSequentialIterable> decl_QSequentialIterable_Position_Enum_as_child (decl_QSequentialIterable_Position_Enum, "Position");
static gsi::ClassExt<QSequentialIterable> decl_QSequentialIterable_Position_Enums_as_child (decl_QSequentialIterable_Position_Enums, "QFlags_Position");

}

