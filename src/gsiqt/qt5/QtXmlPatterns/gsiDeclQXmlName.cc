
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2019 Matthias Koefferlein

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
*  @file gsiDeclQXmlName.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlName>
#include <QXmlNamePool>
#include "gsiQt.h"
#include "gsiQtXmlPatternsCommon.h"
#include "gsiDeclQtXmlPatternsTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlName

//  Constructor QXmlName::QXmlName()


static void _init_ctor_QXmlName_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlName> ();
}

static void _call_ctor_QXmlName_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlName *> (new QXmlName ());
}


//  Constructor QXmlName::QXmlName(QXmlNamePool &namePool, const QString &localName, const QString &namespaceURI, const QString &prefix)


static void _init_ctor_QXmlName_7550 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("namePool");
  decl->add_arg<QXmlNamePool & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("localName");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("namespaceURI", true, "QString()");
  decl->add_arg<const QString & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("prefix", true, "QString()");
  decl->add_arg<const QString & > (argspec_3);
  decl->set_return_new<QXmlName> ();
}

static void _call_ctor_QXmlName_7550 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QXmlNamePool &arg1 = args.read<QXmlNamePool & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  const QString &arg3 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  const QString &arg4 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  ret.write<QXmlName *> (new QXmlName (arg1, arg2, arg3, arg4));
}


// bool QXmlName::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlName *)cls)->isNull ());
}


// QString QXmlName::namespaceUri(const QXmlNamePool &query)


static void _init_f_namespaceUri_c2494 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("query");
  decl->add_arg<const QXmlNamePool & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_namespaceUri_c2494 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNamePool &arg1 = args.read<const QXmlNamePool & > (heap);
  ret.write<QString > ((QString)((QXmlName *)cls)->namespaceUri (arg1));
}


// bool QXmlName::operator!=(const QXmlName &other)


static void _init_f_operator_excl__eq__c2084 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2084 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  ret.write<bool > ((bool)((QXmlName *)cls)->operator!= (arg1));
}


// QXmlName &QXmlName::operator=(const QXmlName &other)


static void _init_f_operator_eq__2084 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<QXmlName & > ();
}

static void _call_f_operator_eq__2084 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  ret.write<QXmlName & > ((QXmlName &)((QXmlName *)cls)->operator= (arg1));
}


// bool QXmlName::operator==(const QXmlName &other)


static void _init_f_operator_eq__eq__c2084 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2084 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  ret.write<bool > ((bool)((QXmlName *)cls)->operator== (arg1));
}


// QString QXmlName::toClarkName(const QXmlNamePool &query)


static void _init_f_toClarkName_c2494 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("query");
  decl->add_arg<const QXmlNamePool & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_toClarkName_c2494 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNamePool &arg1 = args.read<const QXmlNamePool & > (heap);
  ret.write<QString > ((QString)((QXmlName *)cls)->toClarkName (arg1));
}


// static QXmlName QXmlName::fromClarkName(const QString &clarkName, const QXmlNamePool &namePool)


static void _init_f_fromClarkName_4411 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("clarkName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("namePool");
  decl->add_arg<const QXmlNamePool & > (argspec_1);
  decl->set_return<QXmlName > ();
}

static void _call_f_fromClarkName_4411 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QXmlNamePool &arg2 = args.read<const QXmlNamePool & > (heap);
  ret.write<QXmlName > ((QXmlName)QXmlName::fromClarkName (arg1, arg2));
}


// static bool QXmlName::isNCName(const QString &candidate)


static void _init_f_isNCName_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("candidate");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isNCName_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)QXmlName::isNCName (arg1));
}



namespace gsi
{

static gsi::Methods methods_QXmlName () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlName::QXmlName()\nThis method creates an object of class QXmlName.", &_init_ctor_QXmlName_0, &_call_ctor_QXmlName_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlName::QXmlName(QXmlNamePool &namePool, const QString &localName, const QString &namespaceURI, const QString &prefix)\nThis method creates an object of class QXmlName.", &_init_ctor_QXmlName_7550, &_call_ctor_QXmlName_7550);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QXmlName::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("namespaceUri", "@brief Method QString QXmlName::namespaceUri(const QXmlNamePool &query)\n", true, &_init_f_namespaceUri_c2494, &_call_f_namespaceUri_c2494);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QXmlName::operator!=(const QXmlName &other)\n", true, &_init_f_operator_excl__eq__c2084, &_call_f_operator_excl__eq__c2084);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QXmlName &QXmlName::operator=(const QXmlName &other)\n", false, &_init_f_operator_eq__2084, &_call_f_operator_eq__2084);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QXmlName::operator==(const QXmlName &other)\n", true, &_init_f_operator_eq__eq__c2084, &_call_f_operator_eq__eq__c2084);
  methods += new qt_gsi::GenericMethod ("toClarkName", "@brief Method QString QXmlName::toClarkName(const QXmlNamePool &query)\n", true, &_init_f_toClarkName_c2494, &_call_f_toClarkName_c2494);
  methods += new qt_gsi::GenericStaticMethod ("fromClarkName", "@brief Static method QXmlName QXmlName::fromClarkName(const QString &clarkName, const QXmlNamePool &namePool)\nThis method is static and can be called without an instance.", &_init_f_fromClarkName_4411, &_call_f_fromClarkName_4411);
  methods += new qt_gsi::GenericStaticMethod ("isNCName?", "@brief Static method bool QXmlName::isNCName(const QString &candidate)\nThis method is static and can be called without an instance.", &_init_f_isNCName_2025, &_call_f_isNCName_2025);
  return methods;
}

gsi::Class<QXmlName> decl_QXmlName ("QtXmlPatterns", "QXmlName",
  methods_QXmlName (),
  "@qt\n@brief Binding of QXmlName");


GSI_QTXMLPATTERNS_PUBLIC gsi::Class<QXmlName> &qtdecl_QXmlName () { return decl_QXmlName; }

}

