
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
*  @file gsiDeclQDirIterator.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDirIterator>
#include <QDir>
#include <QFileInfo>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDirIterator

//  Constructor QDirIterator::QDirIterator(const QDir &dir, QFlags<QDirIterator::IteratorFlag> flags)


static void _init_ctor_QDirIterator_5251 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dir");
  decl->add_arg<const QDir & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("flags", true, "QDirIterator::NoIteratorFlags");
  decl->add_arg<QFlags<QDirIterator::IteratorFlag> > (argspec_1);
  decl->set_return_new<QDirIterator> ();
}

static void _call_ctor_QDirIterator_5251 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDir &arg1 = gsi::arg_reader<const QDir & >() (args, heap);
  QFlags<QDirIterator::IteratorFlag> arg2 = args ? gsi::arg_reader<QFlags<QDirIterator::IteratorFlag> >() (args, heap) : gsi::arg_maker<QFlags<QDirIterator::IteratorFlag> >() (QDirIterator::NoIteratorFlags, heap);
  ret.write<QDirIterator *> (new QDirIterator (arg1, arg2));
}


//  Constructor QDirIterator::QDirIterator(const QString &path, QFlags<QDirIterator::IteratorFlag> flags)


static void _init_ctor_QDirIterator_5595 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("path");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("flags", true, "QDirIterator::NoIteratorFlags");
  decl->add_arg<QFlags<QDirIterator::IteratorFlag> > (argspec_1);
  decl->set_return_new<QDirIterator> ();
}

static void _call_ctor_QDirIterator_5595 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QFlags<QDirIterator::IteratorFlag> arg2 = args ? gsi::arg_reader<QFlags<QDirIterator::IteratorFlag> >() (args, heap) : gsi::arg_maker<QFlags<QDirIterator::IteratorFlag> >() (QDirIterator::NoIteratorFlags, heap);
  ret.write<QDirIterator *> (new QDirIterator (arg1, arg2));
}


//  Constructor QDirIterator::QDirIterator(const QString &path, QFlags<QDir::Filter> filter, QFlags<QDirIterator::IteratorFlag> flags)


static void _init_ctor_QDirIterator_7717 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("path");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("filter");
  decl->add_arg<QFlags<QDir::Filter> > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("flags", true, "QDirIterator::NoIteratorFlags");
  decl->add_arg<QFlags<QDirIterator::IteratorFlag> > (argspec_2);
  decl->set_return_new<QDirIterator> ();
}

static void _call_ctor_QDirIterator_7717 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QFlags<QDir::Filter> arg2 = gsi::arg_reader<QFlags<QDir::Filter> >() (args, heap);
  QFlags<QDirIterator::IteratorFlag> arg3 = args ? gsi::arg_reader<QFlags<QDirIterator::IteratorFlag> >() (args, heap) : gsi::arg_maker<QFlags<QDirIterator::IteratorFlag> >() (QDirIterator::NoIteratorFlags, heap);
  ret.write<QDirIterator *> (new QDirIterator (arg1, arg2, arg3));
}


//  Constructor QDirIterator::QDirIterator(const QString &path, const QStringList &nameFilters, QFlags<QDir::Filter> filters, QFlags<QDirIterator::IteratorFlag> flags)


static void _init_ctor_QDirIterator_10046 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("path");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("nameFilters");
  decl->add_arg<const QStringList & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("filters", true, "QDir::NoFilter");
  decl->add_arg<QFlags<QDir::Filter> > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("flags", true, "QDirIterator::NoIteratorFlags");
  decl->add_arg<QFlags<QDirIterator::IteratorFlag> > (argspec_3);
  decl->set_return_new<QDirIterator> ();
}

static void _call_ctor_QDirIterator_10046 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QStringList &arg2 = gsi::arg_reader<const QStringList & >() (args, heap);
  QFlags<QDir::Filter> arg3 = args ? gsi::arg_reader<QFlags<QDir::Filter> >() (args, heap) : gsi::arg_maker<QFlags<QDir::Filter> >() (QDir::NoFilter, heap);
  QFlags<QDirIterator::IteratorFlag> arg4 = args ? gsi::arg_reader<QFlags<QDirIterator::IteratorFlag> >() (args, heap) : gsi::arg_maker<QFlags<QDirIterator::IteratorFlag> >() (QDirIterator::NoIteratorFlags, heap);
  ret.write<QDirIterator *> (new QDirIterator (arg1, arg2, arg3, arg4));
}


// QFileInfo QDirIterator::fileInfo()


static void _init_f_fileInfo_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFileInfo > ();
}

static void _call_f_fileInfo_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFileInfo > ((QFileInfo)((QDirIterator *)cls)->fileInfo ());
}


// QString QDirIterator::fileName()


static void _init_f_fileName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_fileName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDirIterator *)cls)->fileName ());
}


// QString QDirIterator::filePath()


static void _init_f_filePath_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_filePath_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDirIterator *)cls)->filePath ());
}


// bool QDirIterator::hasNext()


static void _init_f_hasNext_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasNext_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QDirIterator *)cls)->hasNext ());
}


// QString QDirIterator::next()


static void _init_f_next_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_next_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDirIterator *)cls)->next ());
}


// QString QDirIterator::path()


static void _init_f_path_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_path_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDirIterator *)cls)->path ());
}



namespace gsi
{

static gsi::Methods methods_QDirIterator () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDirIterator::QDirIterator(const QDir &dir, QFlags<QDirIterator::IteratorFlag> flags)\nThis method creates an object of class QDirIterator.", &_init_ctor_QDirIterator_5251, &_call_ctor_QDirIterator_5251);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDirIterator::QDirIterator(const QString &path, QFlags<QDirIterator::IteratorFlag> flags)\nThis method creates an object of class QDirIterator.", &_init_ctor_QDirIterator_5595, &_call_ctor_QDirIterator_5595);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDirIterator::QDirIterator(const QString &path, QFlags<QDir::Filter> filter, QFlags<QDirIterator::IteratorFlag> flags)\nThis method creates an object of class QDirIterator.", &_init_ctor_QDirIterator_7717, &_call_ctor_QDirIterator_7717);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDirIterator::QDirIterator(const QString &path, const QStringList &nameFilters, QFlags<QDir::Filter> filters, QFlags<QDirIterator::IteratorFlag> flags)\nThis method creates an object of class QDirIterator.", &_init_ctor_QDirIterator_10046, &_call_ctor_QDirIterator_10046);
  methods += new qt_gsi::GenericMethod ("fileInfo", "@brief Method QFileInfo QDirIterator::fileInfo()\n", true, &_init_f_fileInfo_c0, &_call_f_fileInfo_c0);
  methods += new qt_gsi::GenericMethod ("fileName", "@brief Method QString QDirIterator::fileName()\n", true, &_init_f_fileName_c0, &_call_f_fileName_c0);
  methods += new qt_gsi::GenericMethod ("filePath", "@brief Method QString QDirIterator::filePath()\n", true, &_init_f_filePath_c0, &_call_f_filePath_c0);
  methods += new qt_gsi::GenericMethod ("hasNext", "@brief Method bool QDirIterator::hasNext()\n", true, &_init_f_hasNext_c0, &_call_f_hasNext_c0);
  methods += new qt_gsi::GenericMethod ("next", "@brief Method QString QDirIterator::next()\n", false, &_init_f_next_0, &_call_f_next_0);
  methods += new qt_gsi::GenericMethod ("path", "@brief Method QString QDirIterator::path()\n", true, &_init_f_path_c0, &_call_f_path_c0);
  return methods;
}

gsi::Class<QDirIterator> decl_QDirIterator ("QtCore", "QDirIterator",
  methods_QDirIterator (),
  "@qt\n@brief Binding of QDirIterator");


GSI_QTCORE_PUBLIC gsi::Class<QDirIterator> &qtdecl_QDirIterator () { return decl_QDirIterator; }

}


//  Implementation of the enum wrapper class for QDirIterator::IteratorFlag
namespace qt_gsi
{

static gsi::Enum<QDirIterator::IteratorFlag> decl_QDirIterator_IteratorFlag_Enum ("QtCore", "QDirIterator_IteratorFlag",
    gsi::enum_const ("NoIteratorFlags", QDirIterator::NoIteratorFlags, "@brief Enum constant QDirIterator::NoIteratorFlags") +
    gsi::enum_const ("FollowSymlinks", QDirIterator::FollowSymlinks, "@brief Enum constant QDirIterator::FollowSymlinks") +
    gsi::enum_const ("Subdirectories", QDirIterator::Subdirectories, "@brief Enum constant QDirIterator::Subdirectories"),
  "@qt\n@brief This class represents the QDirIterator::IteratorFlag enum");

static gsi::QFlagsClass<QDirIterator::IteratorFlag > decl_QDirIterator_IteratorFlag_Enums ("QtCore", "QDirIterator_QFlags_IteratorFlag",
  "@qt\n@brief This class represents the QFlags<QDirIterator::IteratorFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QDirIterator> inject_QDirIterator_IteratorFlag_Enum_in_parent (decl_QDirIterator_IteratorFlag_Enum.defs ());
static gsi::ClassExt<QDirIterator> decl_QDirIterator_IteratorFlag_Enum_as_child (decl_QDirIterator_IteratorFlag_Enum, "IteratorFlag");
static gsi::ClassExt<QDirIterator> decl_QDirIterator_IteratorFlag_Enums_as_child (decl_QDirIterator_IteratorFlag_Enums, "QFlags_IteratorFlag");

}

