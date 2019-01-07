
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
*  @file gsiDeclQDomNodeList.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDomNodeList>
#include <QDomNode>
#include "gsiQt.h"
#include "gsiQtXmlCommon.h"
#include "gsiDeclQtXmlTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDomNodeList

//  Constructor QDomNodeList::QDomNodeList()


static void _init_ctor_QDomNodeList_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDomNodeList> ();
}

static void _call_ctor_QDomNodeList_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomNodeList *> (new QDomNodeList ());
}


//  Constructor QDomNodeList::QDomNodeList(const QDomNodeList &)


static void _init_ctor_QDomNodeList_2484 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomNodeList & > (argspec_0);
  decl->set_return_new<QDomNodeList> ();
}

static void _call_ctor_QDomNodeList_2484 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomNodeList &arg1 = args.read<const QDomNodeList & > (heap);
  ret.write<QDomNodeList *> (new QDomNodeList (arg1));
}


// QDomNode QDomNodeList::at(int index)


static void _init_f_at_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QDomNode > ();
}

static void _call_f_at_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QDomNode > ((QDomNode)((QDomNodeList *)cls)->at (arg1));
}


// int QDomNodeList::count()


static void _init_f_count_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_count_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDomNodeList *)cls)->count ());
}


// bool QDomNodeList::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QDomNodeList *)cls)->isEmpty ());
}


// QDomNode QDomNodeList::item(int index)


static void _init_f_item_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QDomNode > ();
}

static void _call_f_item_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QDomNode > ((QDomNode)((QDomNodeList *)cls)->item (arg1));
}


// int QDomNodeList::length()


static void _init_f_length_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_length_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDomNodeList *)cls)->length ());
}


// bool QDomNodeList::operator!=(const QDomNodeList &)


static void _init_f_operator_excl__eq__c2484 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomNodeList & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2484 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomNodeList &arg1 = args.read<const QDomNodeList & > (heap);
  ret.write<bool > ((bool)((QDomNodeList *)cls)->operator!= (arg1));
}


// QDomNodeList &QDomNodeList::operator=(const QDomNodeList &)


static void _init_f_operator_eq__2484 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomNodeList & > (argspec_0);
  decl->set_return<QDomNodeList & > ();
}

static void _call_f_operator_eq__2484 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomNodeList &arg1 = args.read<const QDomNodeList & > (heap);
  ret.write<QDomNodeList & > ((QDomNodeList &)((QDomNodeList *)cls)->operator= (arg1));
}


// bool QDomNodeList::operator==(const QDomNodeList &)


static void _init_f_operator_eq__eq__c2484 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomNodeList & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2484 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomNodeList &arg1 = args.read<const QDomNodeList & > (heap);
  ret.write<bool > ((bool)((QDomNodeList *)cls)->operator== (arg1));
}


// int QDomNodeList::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDomNodeList *)cls)->size ());
}



namespace gsi
{

static gsi::Methods methods_QDomNodeList () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomNodeList::QDomNodeList()\nThis method creates an object of class QDomNodeList.", &_init_ctor_QDomNodeList_0, &_call_ctor_QDomNodeList_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomNodeList::QDomNodeList(const QDomNodeList &)\nThis method creates an object of class QDomNodeList.", &_init_ctor_QDomNodeList_2484, &_call_ctor_QDomNodeList_2484);
  methods += new qt_gsi::GenericMethod ("at", "@brief Method QDomNode QDomNodeList::at(int index)\n", true, &_init_f_at_c767, &_call_f_at_c767);
  methods += new qt_gsi::GenericMethod ("count", "@brief Method int QDomNodeList::count()\n", true, &_init_f_count_c0, &_call_f_count_c0);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QDomNodeList::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("item", "@brief Method QDomNode QDomNodeList::item(int index)\n", true, &_init_f_item_c767, &_call_f_item_c767);
  methods += new qt_gsi::GenericMethod ("length", "@brief Method int QDomNodeList::length()\n", true, &_init_f_length_c0, &_call_f_length_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QDomNodeList::operator!=(const QDomNodeList &)\n", true, &_init_f_operator_excl__eq__c2484, &_call_f_operator_excl__eq__c2484);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDomNodeList &QDomNodeList::operator=(const QDomNodeList &)\n", false, &_init_f_operator_eq__2484, &_call_f_operator_eq__2484);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QDomNodeList::operator==(const QDomNodeList &)\n", true, &_init_f_operator_eq__eq__c2484, &_call_f_operator_eq__eq__c2484);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method int QDomNodeList::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  return methods;
}

gsi::Class<QDomNodeList> decl_QDomNodeList ("QtXml", "QDomNodeList",
  methods_QDomNodeList (),
  "@qt\n@brief Binding of QDomNodeList");


GSI_QTXML_PUBLIC gsi::Class<QDomNodeList> &qtdecl_QDomNodeList () { return decl_QDomNodeList; }

}

