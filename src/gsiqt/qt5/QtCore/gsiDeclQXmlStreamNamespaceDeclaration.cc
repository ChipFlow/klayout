
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

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
*  @file gsiDeclQXmlStreamNamespaceDeclaration.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlStreamNamespaceDeclaration>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlStreamNamespaceDeclaration

//  Constructor QXmlStreamNamespaceDeclaration::QXmlStreamNamespaceDeclaration()


static void _init_ctor_QXmlStreamNamespaceDeclaration_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlStreamNamespaceDeclaration> ();
}

static void _call_ctor_QXmlStreamNamespaceDeclaration_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlStreamNamespaceDeclaration *> (new QXmlStreamNamespaceDeclaration ());
}


//  Constructor QXmlStreamNamespaceDeclaration::QXmlStreamNamespaceDeclaration(const QXmlStreamNamespaceDeclaration &)


static void _init_ctor_QXmlStreamNamespaceDeclaration_4354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QXmlStreamNamespaceDeclaration & > (argspec_0);
  decl->set_return_new<QXmlStreamNamespaceDeclaration> ();
}

static void _call_ctor_QXmlStreamNamespaceDeclaration_4354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamNamespaceDeclaration &arg1 = gsi::arg_reader<const QXmlStreamNamespaceDeclaration & >() (args, heap);
  ret.write<QXmlStreamNamespaceDeclaration *> (new QXmlStreamNamespaceDeclaration (arg1));
}


//  Constructor QXmlStreamNamespaceDeclaration::QXmlStreamNamespaceDeclaration(const QString &prefix, const QString &namespaceUri)


static void _init_ctor_QXmlStreamNamespaceDeclaration_3942 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("prefix");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("namespaceUri");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return_new<QXmlStreamNamespaceDeclaration> ();
}

static void _call_ctor_QXmlStreamNamespaceDeclaration_3942 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QXmlStreamNamespaceDeclaration *> (new QXmlStreamNamespaceDeclaration (arg1, arg2));
}


// QStringRef QXmlStreamNamespaceDeclaration::namespaceUri()


static void _init_f_namespaceUri_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringRef > ();
}

static void _call_f_namespaceUri_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringRef > ((QStringRef)((QXmlStreamNamespaceDeclaration *)cls)->namespaceUri ());
}


// bool QXmlStreamNamespaceDeclaration::operator!=(const QXmlStreamNamespaceDeclaration &other)


static void _init_f_operator_excl__eq__c4354 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlStreamNamespaceDeclaration & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c4354 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamNamespaceDeclaration &arg1 = gsi::arg_reader<const QXmlStreamNamespaceDeclaration & >() (args, heap);
  ret.write<bool > ((bool)((QXmlStreamNamespaceDeclaration *)cls)->operator!= (arg1));
}


// QXmlStreamNamespaceDeclaration &QXmlStreamNamespaceDeclaration::operator=(const QXmlStreamNamespaceDeclaration &)


static void _init_f_operator_eq__4354 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QXmlStreamNamespaceDeclaration & > (argspec_0);
  decl->set_return<QXmlStreamNamespaceDeclaration & > ();
}

static void _call_f_operator_eq__4354 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamNamespaceDeclaration &arg1 = gsi::arg_reader<const QXmlStreamNamespaceDeclaration & >() (args, heap);
  ret.write<QXmlStreamNamespaceDeclaration & > ((QXmlStreamNamespaceDeclaration &)((QXmlStreamNamespaceDeclaration *)cls)->operator= (arg1));
}


// bool QXmlStreamNamespaceDeclaration::operator==(const QXmlStreamNamespaceDeclaration &other)


static void _init_f_operator_eq__eq__c4354 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlStreamNamespaceDeclaration & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c4354 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamNamespaceDeclaration &arg1 = gsi::arg_reader<const QXmlStreamNamespaceDeclaration & >() (args, heap);
  ret.write<bool > ((bool)((QXmlStreamNamespaceDeclaration *)cls)->operator== (arg1));
}


// QStringRef QXmlStreamNamespaceDeclaration::prefix()


static void _init_f_prefix_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringRef > ();
}

static void _call_f_prefix_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringRef > ((QStringRef)((QXmlStreamNamespaceDeclaration *)cls)->prefix ());
}



namespace gsi
{

static gsi::Methods methods_QXmlStreamNamespaceDeclaration () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlStreamNamespaceDeclaration::QXmlStreamNamespaceDeclaration()\nThis method creates an object of class QXmlStreamNamespaceDeclaration.", &_init_ctor_QXmlStreamNamespaceDeclaration_0, &_call_ctor_QXmlStreamNamespaceDeclaration_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlStreamNamespaceDeclaration::QXmlStreamNamespaceDeclaration(const QXmlStreamNamespaceDeclaration &)\nThis method creates an object of class QXmlStreamNamespaceDeclaration.", &_init_ctor_QXmlStreamNamespaceDeclaration_4354, &_call_ctor_QXmlStreamNamespaceDeclaration_4354);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlStreamNamespaceDeclaration::QXmlStreamNamespaceDeclaration(const QString &prefix, const QString &namespaceUri)\nThis method creates an object of class QXmlStreamNamespaceDeclaration.", &_init_ctor_QXmlStreamNamespaceDeclaration_3942, &_call_ctor_QXmlStreamNamespaceDeclaration_3942);
  methods += new qt_gsi::GenericMethod ("namespaceUri", "@brief Method QStringRef QXmlStreamNamespaceDeclaration::namespaceUri()\n", true, &_init_f_namespaceUri_c0, &_call_f_namespaceUri_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QXmlStreamNamespaceDeclaration::operator!=(const QXmlStreamNamespaceDeclaration &other)\n", true, &_init_f_operator_excl__eq__c4354, &_call_f_operator_excl__eq__c4354);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QXmlStreamNamespaceDeclaration &QXmlStreamNamespaceDeclaration::operator=(const QXmlStreamNamespaceDeclaration &)\n", false, &_init_f_operator_eq__4354, &_call_f_operator_eq__4354);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QXmlStreamNamespaceDeclaration::operator==(const QXmlStreamNamespaceDeclaration &other)\n", true, &_init_f_operator_eq__eq__c4354, &_call_f_operator_eq__eq__c4354);
  methods += new qt_gsi::GenericMethod ("prefix", "@brief Method QStringRef QXmlStreamNamespaceDeclaration::prefix()\n", true, &_init_f_prefix_c0, &_call_f_prefix_c0);
  return methods;
}

gsi::Class<QXmlStreamNamespaceDeclaration> decl_QXmlStreamNamespaceDeclaration ("QtCore", "QXmlStreamNamespaceDeclaration",
  methods_QXmlStreamNamespaceDeclaration (),
  "@qt\n@brief Binding of QXmlStreamNamespaceDeclaration");


GSI_QTCORE_PUBLIC gsi::Class<QXmlStreamNamespaceDeclaration> &qtdecl_QXmlStreamNamespaceDeclaration () { return decl_QXmlStreamNamespaceDeclaration; }

}

