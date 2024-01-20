
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
*  @file gsiDeclQFileInfo.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QFileInfo>
#include <QDateTime>
#include <QDir>
#include <QFile>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QFileInfo

//  Constructor QFileInfo::QFileInfo()


static void _init_ctor_QFileInfo_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QFileInfo> ();
}

static void _call_ctor_QFileInfo_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFileInfo *> (new QFileInfo ());
}


//  Constructor QFileInfo::QFileInfo(const QString &file)


static void _init_ctor_QFileInfo_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("file");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QFileInfo> ();
}

static void _call_ctor_QFileInfo_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QFileInfo *> (new QFileInfo (arg1));
}


//  Constructor QFileInfo::QFileInfo(const QFile &file)


static void _init_ctor_QFileInfo_1778 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("file");
  decl->add_arg<const QFile & > (argspec_0);
  decl->set_return_new<QFileInfo> ();
}

static void _call_ctor_QFileInfo_1778 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFile &arg1 = gsi::arg_reader<const QFile & >() (args, heap);
  ret.write<QFileInfo *> (new QFileInfo (arg1));
}


//  Constructor QFileInfo::QFileInfo(const QDir &dir, const QString &file)


static void _init_ctor_QFileInfo_3598 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dir");
  decl->add_arg<const QDir & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("file");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return_new<QFileInfo> ();
}

static void _call_ctor_QFileInfo_3598 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDir &arg1 = gsi::arg_reader<const QDir & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QFileInfo *> (new QFileInfo (arg1, arg2));
}


//  Constructor QFileInfo::QFileInfo(const QFileInfo &fileinfo)


static void _init_ctor_QFileInfo_2174 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileinfo");
  decl->add_arg<const QFileInfo & > (argspec_0);
  decl->set_return_new<QFileInfo> ();
}

static void _call_ctor_QFileInfo_2174 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFileInfo &arg1 = gsi::arg_reader<const QFileInfo & >() (args, heap);
  ret.write<QFileInfo *> (new QFileInfo (arg1));
}


// QDir QFileInfo::absoluteDir()


static void _init_f_absoluteDir_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDir > ();
}

static void _call_f_absoluteDir_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDir > ((QDir)((QFileInfo *)cls)->absoluteDir ());
}


// QString QFileInfo::absoluteFilePath()


static void _init_f_absoluteFilePath_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_absoluteFilePath_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFileInfo *)cls)->absoluteFilePath ());
}


// QString QFileInfo::absolutePath()


static void _init_f_absolutePath_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_absolutePath_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFileInfo *)cls)->absolutePath ());
}


// QString QFileInfo::baseName()


static void _init_f_baseName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_baseName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFileInfo *)cls)->baseName ());
}


// QDateTime QFileInfo::birthTime()


static void _init_f_birthTime_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDateTime > ();
}

static void _call_f_birthTime_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDateTime > ((QDateTime)((QFileInfo *)cls)->birthTime ());
}


// QString QFileInfo::bundleName()


static void _init_f_bundleName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_bundleName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFileInfo *)cls)->bundleName ());
}


// bool QFileInfo::caching()


static void _init_f_caching_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_caching_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFileInfo *)cls)->caching ());
}


// QString QFileInfo::canonicalFilePath()


static void _init_f_canonicalFilePath_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_canonicalFilePath_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFileInfo *)cls)->canonicalFilePath ());
}


// QString QFileInfo::canonicalPath()


static void _init_f_canonicalPath_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_canonicalPath_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFileInfo *)cls)->canonicalPath ());
}


// QString QFileInfo::completeBaseName()


static void _init_f_completeBaseName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_completeBaseName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFileInfo *)cls)->completeBaseName ());
}


// QString QFileInfo::completeSuffix()


static void _init_f_completeSuffix_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_completeSuffix_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFileInfo *)cls)->completeSuffix ());
}


// QDateTime QFileInfo::created()


static void _init_f_created_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDateTime > ();
}

static void _call_f_created_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDateTime > ((QDateTime)((QFileInfo *)cls)->created ());
}


// QDir QFileInfo::dir()


static void _init_f_dir_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDir > ();
}

static void _call_f_dir_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDir > ((QDir)((QFileInfo *)cls)->dir ());
}


// bool QFileInfo::exists()


static void _init_f_exists_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_exists_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFileInfo *)cls)->exists ());
}


// QString QFileInfo::fileName()


static void _init_f_fileName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_fileName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFileInfo *)cls)->fileName ());
}


// QString QFileInfo::filePath()


static void _init_f_filePath_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_filePath_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFileInfo *)cls)->filePath ());
}


// QDateTime QFileInfo::fileTime(QFileDevice::FileTime time)


static void _init_f_fileTime_c2392 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("time");
  decl->add_arg<const qt_gsi::Converter<QFileDevice::FileTime>::target_type & > (argspec_0);
  decl->set_return<QDateTime > ();
}

static void _call_f_fileTime_c2392 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QFileDevice::FileTime>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QFileDevice::FileTime>::target_type & >() (args, heap);
  ret.write<QDateTime > ((QDateTime)((QFileInfo *)cls)->fileTime (qt_gsi::QtToCppAdaptor<QFileDevice::FileTime>(arg1).cref()));
}


// QString QFileInfo::group()


static void _init_f_group_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_group_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFileInfo *)cls)->group ());
}


// unsigned int QFileInfo::groupId()


static void _init_f_groupId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<unsigned int > ();
}

static void _call_f_groupId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<unsigned int > ((unsigned int)((QFileInfo *)cls)->groupId ());
}


// bool QFileInfo::isAbsolute()


static void _init_f_isAbsolute_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isAbsolute_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFileInfo *)cls)->isAbsolute ());
}


// bool QFileInfo::isBundle()


static void _init_f_isBundle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isBundle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFileInfo *)cls)->isBundle ());
}


// bool QFileInfo::isDir()


static void _init_f_isDir_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isDir_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFileInfo *)cls)->isDir ());
}


// bool QFileInfo::isExecutable()


static void _init_f_isExecutable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isExecutable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFileInfo *)cls)->isExecutable ());
}


// bool QFileInfo::isFile()


static void _init_f_isFile_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isFile_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFileInfo *)cls)->isFile ());
}


// bool QFileInfo::isHidden()


static void _init_f_isHidden_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isHidden_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFileInfo *)cls)->isHidden ());
}


// bool QFileInfo::isNativePath()


static void _init_f_isNativePath_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNativePath_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFileInfo *)cls)->isNativePath ());
}


// bool QFileInfo::isReadable()


static void _init_f_isReadable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isReadable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFileInfo *)cls)->isReadable ());
}


// bool QFileInfo::isRelative()


static void _init_f_isRelative_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isRelative_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFileInfo *)cls)->isRelative ());
}


// bool QFileInfo::isRoot()


static void _init_f_isRoot_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isRoot_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFileInfo *)cls)->isRoot ());
}


// bool QFileInfo::isSymLink()


static void _init_f_isSymLink_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isSymLink_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFileInfo *)cls)->isSymLink ());
}


// bool QFileInfo::isWritable()


static void _init_f_isWritable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isWritable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFileInfo *)cls)->isWritable ());
}


// QDateTime QFileInfo::lastModified()


static void _init_f_lastModified_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDateTime > ();
}

static void _call_f_lastModified_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDateTime > ((QDateTime)((QFileInfo *)cls)->lastModified ());
}


// QDateTime QFileInfo::lastRead()


static void _init_f_lastRead_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDateTime > ();
}

static void _call_f_lastRead_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDateTime > ((QDateTime)((QFileInfo *)cls)->lastRead ());
}


// bool QFileInfo::makeAbsolute()


static void _init_f_makeAbsolute_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_makeAbsolute_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFileInfo *)cls)->makeAbsolute ());
}


// QDateTime QFileInfo::metadataChangeTime()


static void _init_f_metadataChangeTime_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDateTime > ();
}

static void _call_f_metadataChangeTime_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDateTime > ((QDateTime)((QFileInfo *)cls)->metadataChangeTime ());
}


// bool QFileInfo::operator!=(const QFileInfo &fileinfo)


static void _init_f_operator_excl__eq__c2174 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileinfo");
  decl->add_arg<const QFileInfo & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2174 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFileInfo &arg1 = gsi::arg_reader<const QFileInfo & >() (args, heap);
  ret.write<bool > ((bool)((QFileInfo *)cls)->operator!= (arg1));
}


// QFileInfo &QFileInfo::operator=(const QFileInfo &fileinfo)


static void _init_f_operator_eq__2174 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileinfo");
  decl->add_arg<const QFileInfo & > (argspec_0);
  decl->set_return<QFileInfo & > ();
}

static void _call_f_operator_eq__2174 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFileInfo &arg1 = gsi::arg_reader<const QFileInfo & >() (args, heap);
  ret.write<QFileInfo & > ((QFileInfo &)((QFileInfo *)cls)->operator= (arg1));
}


// bool QFileInfo::operator==(const QFileInfo &fileinfo)


static void _init_f_operator_eq__eq__c2174 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileinfo");
  decl->add_arg<const QFileInfo & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2174 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFileInfo &arg1 = gsi::arg_reader<const QFileInfo & >() (args, heap);
  ret.write<bool > ((bool)((QFileInfo *)cls)->operator== (arg1));
}


// QString QFileInfo::owner()


static void _init_f_owner_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_owner_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFileInfo *)cls)->owner ());
}


// unsigned int QFileInfo::ownerId()


static void _init_f_ownerId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<unsigned int > ();
}

static void _call_f_ownerId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<unsigned int > ((unsigned int)((QFileInfo *)cls)->ownerId ());
}


// QString QFileInfo::path()


static void _init_f_path_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_path_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFileInfo *)cls)->path ());
}


// bool QFileInfo::permission(QFlags<QFileDevice::Permission> permissions)


static void _init_f_permission_c3370 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("permissions");
  decl->add_arg<QFlags<QFileDevice::Permission> > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_permission_c3370 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QFileDevice::Permission> arg1 = gsi::arg_reader<QFlags<QFileDevice::Permission> >() (args, heap);
  ret.write<bool > ((bool)((QFileInfo *)cls)->permission (arg1));
}


// QFlags<QFileDevice::Permission> QFileInfo::permissions()


static void _init_f_permissions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QFileDevice::Permission> > ();
}

static void _call_f_permissions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QFileDevice::Permission> > ((QFlags<QFileDevice::Permission>)((QFileInfo *)cls)->permissions ());
}


// QString QFileInfo::readLink()


static void _init_f_readLink_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_readLink_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFileInfo *)cls)->readLink ());
}


// void QFileInfo::refresh()


static void _init_f_refresh_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_refresh_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFileInfo *)cls)->refresh ();
}


// void QFileInfo::setCaching(bool on)


static void _init_f_setCaching_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("on");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCaching_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFileInfo *)cls)->setCaching (arg1);
}


// void QFileInfo::setFile(const QString &file)


static void _init_f_setFile_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("file");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFile_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFileInfo *)cls)->setFile (arg1);
}


// void QFileInfo::setFile(const QFile &file)


static void _init_f_setFile_1778 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("file");
  decl->add_arg<const QFile & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFile_1778 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFile &arg1 = gsi::arg_reader<const QFile & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFileInfo *)cls)->setFile (arg1);
}


// void QFileInfo::setFile(const QDir &dir, const QString &file)


static void _init_f_setFile_3598 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dir");
  decl->add_arg<const QDir & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("file");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setFile_3598 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDir &arg1 = gsi::arg_reader<const QDir & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFileInfo *)cls)->setFile (arg1, arg2);
}


// qint64 QFileInfo::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QFileInfo *)cls)->size ());
}


// QString QFileInfo::suffix()


static void _init_f_suffix_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_suffix_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFileInfo *)cls)->suffix ());
}


// void QFileInfo::swap(QFileInfo &other)


static void _init_f_swap_1479 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QFileInfo & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1479 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFileInfo &arg1 = gsi::arg_reader<QFileInfo & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFileInfo *)cls)->swap (arg1);
}


// QString QFileInfo::symLinkTarget()


static void _init_f_symLinkTarget_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_symLinkTarget_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFileInfo *)cls)->symLinkTarget ());
}


// static bool QFileInfo::exists(const QString &file)


static void _init_f_exists_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("file");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_exists_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)QFileInfo::exists (arg1));
}



namespace gsi
{

static gsi::Methods methods_QFileInfo () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFileInfo::QFileInfo()\nThis method creates an object of class QFileInfo.", &_init_ctor_QFileInfo_0, &_call_ctor_QFileInfo_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFileInfo::QFileInfo(const QString &file)\nThis method creates an object of class QFileInfo.", &_init_ctor_QFileInfo_2025, &_call_ctor_QFileInfo_2025);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFileInfo::QFileInfo(const QFile &file)\nThis method creates an object of class QFileInfo.", &_init_ctor_QFileInfo_1778, &_call_ctor_QFileInfo_1778);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFileInfo::QFileInfo(const QDir &dir, const QString &file)\nThis method creates an object of class QFileInfo.", &_init_ctor_QFileInfo_3598, &_call_ctor_QFileInfo_3598);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFileInfo::QFileInfo(const QFileInfo &fileinfo)\nThis method creates an object of class QFileInfo.", &_init_ctor_QFileInfo_2174, &_call_ctor_QFileInfo_2174);
  methods += new qt_gsi::GenericMethod ("absoluteDir", "@brief Method QDir QFileInfo::absoluteDir()\n", true, &_init_f_absoluteDir_c0, &_call_f_absoluteDir_c0);
  methods += new qt_gsi::GenericMethod ("absoluteFilePath", "@brief Method QString QFileInfo::absoluteFilePath()\n", true, &_init_f_absoluteFilePath_c0, &_call_f_absoluteFilePath_c0);
  methods += new qt_gsi::GenericMethod ("absolutePath", "@brief Method QString QFileInfo::absolutePath()\n", true, &_init_f_absolutePath_c0, &_call_f_absolutePath_c0);
  methods += new qt_gsi::GenericMethod ("baseName", "@brief Method QString QFileInfo::baseName()\n", true, &_init_f_baseName_c0, &_call_f_baseName_c0);
  methods += new qt_gsi::GenericMethod ("birthTime", "@brief Method QDateTime QFileInfo::birthTime()\n", true, &_init_f_birthTime_c0, &_call_f_birthTime_c0);
  methods += new qt_gsi::GenericMethod ("bundleName", "@brief Method QString QFileInfo::bundleName()\n", true, &_init_f_bundleName_c0, &_call_f_bundleName_c0);
  methods += new qt_gsi::GenericMethod (":caching", "@brief Method bool QFileInfo::caching()\n", true, &_init_f_caching_c0, &_call_f_caching_c0);
  methods += new qt_gsi::GenericMethod ("canonicalFilePath", "@brief Method QString QFileInfo::canonicalFilePath()\n", true, &_init_f_canonicalFilePath_c0, &_call_f_canonicalFilePath_c0);
  methods += new qt_gsi::GenericMethod ("canonicalPath", "@brief Method QString QFileInfo::canonicalPath()\n", true, &_init_f_canonicalPath_c0, &_call_f_canonicalPath_c0);
  methods += new qt_gsi::GenericMethod ("completeBaseName", "@brief Method QString QFileInfo::completeBaseName()\n", true, &_init_f_completeBaseName_c0, &_call_f_completeBaseName_c0);
  methods += new qt_gsi::GenericMethod ("completeSuffix", "@brief Method QString QFileInfo::completeSuffix()\n", true, &_init_f_completeSuffix_c0, &_call_f_completeSuffix_c0);
  methods += new qt_gsi::GenericMethod ("created", "@brief Method QDateTime QFileInfo::created()\n", true, &_init_f_created_c0, &_call_f_created_c0);
  methods += new qt_gsi::GenericMethod ("dir", "@brief Method QDir QFileInfo::dir()\n", true, &_init_f_dir_c0, &_call_f_dir_c0);
  methods += new qt_gsi::GenericMethod ("exists", "@brief Method bool QFileInfo::exists()\n", true, &_init_f_exists_c0, &_call_f_exists_c0);
  methods += new qt_gsi::GenericMethod ("fileName", "@brief Method QString QFileInfo::fileName()\n", true, &_init_f_fileName_c0, &_call_f_fileName_c0);
  methods += new qt_gsi::GenericMethod ("filePath", "@brief Method QString QFileInfo::filePath()\n", true, &_init_f_filePath_c0, &_call_f_filePath_c0);
  methods += new qt_gsi::GenericMethod ("fileTime", "@brief Method QDateTime QFileInfo::fileTime(QFileDevice::FileTime time)\n", true, &_init_f_fileTime_c2392, &_call_f_fileTime_c2392);
  methods += new qt_gsi::GenericMethod ("group", "@brief Method QString QFileInfo::group()\n", true, &_init_f_group_c0, &_call_f_group_c0);
  methods += new qt_gsi::GenericMethod ("groupId", "@brief Method unsigned int QFileInfo::groupId()\n", true, &_init_f_groupId_c0, &_call_f_groupId_c0);
  methods += new qt_gsi::GenericMethod ("isAbsolute?", "@brief Method bool QFileInfo::isAbsolute()\n", true, &_init_f_isAbsolute_c0, &_call_f_isAbsolute_c0);
  methods += new qt_gsi::GenericMethod ("isBundle?", "@brief Method bool QFileInfo::isBundle()\n", true, &_init_f_isBundle_c0, &_call_f_isBundle_c0);
  methods += new qt_gsi::GenericMethod ("isDir?", "@brief Method bool QFileInfo::isDir()\n", true, &_init_f_isDir_c0, &_call_f_isDir_c0);
  methods += new qt_gsi::GenericMethod ("isExecutable?", "@brief Method bool QFileInfo::isExecutable()\n", true, &_init_f_isExecutable_c0, &_call_f_isExecutable_c0);
  methods += new qt_gsi::GenericMethod ("isFile?", "@brief Method bool QFileInfo::isFile()\n", true, &_init_f_isFile_c0, &_call_f_isFile_c0);
  methods += new qt_gsi::GenericMethod ("isHidden?", "@brief Method bool QFileInfo::isHidden()\n", true, &_init_f_isHidden_c0, &_call_f_isHidden_c0);
  methods += new qt_gsi::GenericMethod ("isNativePath?", "@brief Method bool QFileInfo::isNativePath()\n", true, &_init_f_isNativePath_c0, &_call_f_isNativePath_c0);
  methods += new qt_gsi::GenericMethod ("isReadable?", "@brief Method bool QFileInfo::isReadable()\n", true, &_init_f_isReadable_c0, &_call_f_isReadable_c0);
  methods += new qt_gsi::GenericMethod ("isRelative?", "@brief Method bool QFileInfo::isRelative()\n", true, &_init_f_isRelative_c0, &_call_f_isRelative_c0);
  methods += new qt_gsi::GenericMethod ("isRoot?", "@brief Method bool QFileInfo::isRoot()\n", true, &_init_f_isRoot_c0, &_call_f_isRoot_c0);
  methods += new qt_gsi::GenericMethod ("isSymLink?", "@brief Method bool QFileInfo::isSymLink()\n", true, &_init_f_isSymLink_c0, &_call_f_isSymLink_c0);
  methods += new qt_gsi::GenericMethod ("isWritable?", "@brief Method bool QFileInfo::isWritable()\n", true, &_init_f_isWritable_c0, &_call_f_isWritable_c0);
  methods += new qt_gsi::GenericMethod ("lastModified", "@brief Method QDateTime QFileInfo::lastModified()\n", true, &_init_f_lastModified_c0, &_call_f_lastModified_c0);
  methods += new qt_gsi::GenericMethod ("lastRead", "@brief Method QDateTime QFileInfo::lastRead()\n", true, &_init_f_lastRead_c0, &_call_f_lastRead_c0);
  methods += new qt_gsi::GenericMethod ("makeAbsolute", "@brief Method bool QFileInfo::makeAbsolute()\n", false, &_init_f_makeAbsolute_0, &_call_f_makeAbsolute_0);
  methods += new qt_gsi::GenericMethod ("metadataChangeTime", "@brief Method QDateTime QFileInfo::metadataChangeTime()\n", true, &_init_f_metadataChangeTime_c0, &_call_f_metadataChangeTime_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QFileInfo::operator!=(const QFileInfo &fileinfo)\n", true, &_init_f_operator_excl__eq__c2174, &_call_f_operator_excl__eq__c2174);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QFileInfo &QFileInfo::operator=(const QFileInfo &fileinfo)\n", false, &_init_f_operator_eq__2174, &_call_f_operator_eq__2174);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QFileInfo::operator==(const QFileInfo &fileinfo)\n", true, &_init_f_operator_eq__eq__c2174, &_call_f_operator_eq__eq__c2174);
  methods += new qt_gsi::GenericMethod ("owner", "@brief Method QString QFileInfo::owner()\n", true, &_init_f_owner_c0, &_call_f_owner_c0);
  methods += new qt_gsi::GenericMethod ("ownerId", "@brief Method unsigned int QFileInfo::ownerId()\n", true, &_init_f_ownerId_c0, &_call_f_ownerId_c0);
  methods += new qt_gsi::GenericMethod ("path", "@brief Method QString QFileInfo::path()\n", true, &_init_f_path_c0, &_call_f_path_c0);
  methods += new qt_gsi::GenericMethod ("permission", "@brief Method bool QFileInfo::permission(QFlags<QFileDevice::Permission> permissions)\n", true, &_init_f_permission_c3370, &_call_f_permission_c3370);
  methods += new qt_gsi::GenericMethod ("permissions", "@brief Method QFlags<QFileDevice::Permission> QFileInfo::permissions()\n", true, &_init_f_permissions_c0, &_call_f_permissions_c0);
  methods += new qt_gsi::GenericMethod ("readLink", "@brief Method QString QFileInfo::readLink()\n", true, &_init_f_readLink_c0, &_call_f_readLink_c0);
  methods += new qt_gsi::GenericMethod ("refresh", "@brief Method void QFileInfo::refresh()\n", false, &_init_f_refresh_0, &_call_f_refresh_0);
  methods += new qt_gsi::GenericMethod ("setCaching|caching=", "@brief Method void QFileInfo::setCaching(bool on)\n", false, &_init_f_setCaching_864, &_call_f_setCaching_864);
  methods += new qt_gsi::GenericMethod ("setFile", "@brief Method void QFileInfo::setFile(const QString &file)\n", false, &_init_f_setFile_2025, &_call_f_setFile_2025);
  methods += new qt_gsi::GenericMethod ("setFile", "@brief Method void QFileInfo::setFile(const QFile &file)\n", false, &_init_f_setFile_1778, &_call_f_setFile_1778);
  methods += new qt_gsi::GenericMethod ("setFile", "@brief Method void QFileInfo::setFile(const QDir &dir, const QString &file)\n", false, &_init_f_setFile_3598, &_call_f_setFile_3598);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method qint64 QFileInfo::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericMethod ("suffix", "@brief Method QString QFileInfo::suffix()\n", true, &_init_f_suffix_c0, &_call_f_suffix_c0);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QFileInfo::swap(QFileInfo &other)\n", false, &_init_f_swap_1479, &_call_f_swap_1479);
  methods += new qt_gsi::GenericMethod ("symLinkTarget", "@brief Method QString QFileInfo::symLinkTarget()\n", true, &_init_f_symLinkTarget_c0, &_call_f_symLinkTarget_c0);
  methods += new qt_gsi::GenericStaticMethod ("exists", "@brief Static method bool QFileInfo::exists(const QString &file)\nThis method is static and can be called without an instance.", &_init_f_exists_2025, &_call_f_exists_2025);
  return methods;
}

gsi::Class<QFileInfo> decl_QFileInfo ("QtCore", "QFileInfo",
  methods_QFileInfo (),
  "@qt\n@brief Binding of QFileInfo");


GSI_QTCORE_PUBLIC gsi::Class<QFileInfo> &qtdecl_QFileInfo () { return decl_QFileInfo; }

}

