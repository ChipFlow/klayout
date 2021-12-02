
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
*  @file gsiDeclQAssociativeIterator.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAssociativeIterator>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAssociativeIterator

// QVariant QAssociativeIterator::key()


static void _init_f_key_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_f_key_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QAssociativeIterator *)cls)->key ());
}


// QVariantRef<QAssociativeIterator> QAssociativeIterator::operator*()


static void _init_f_operator_star__c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariantRef<QAssociativeIterator> > ();
}

static void _call_f_operator_star__c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariantRef<QAssociativeIterator> > ((QVariantRef<QAssociativeIterator>)((QAssociativeIterator *)cls)->operator* ());
}


// QVariantPointer<QAssociativeIterator> QAssociativeIterator::operator->()


static void _init_f_operator_minus__gt__c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariantPointer<QAssociativeIterator> > ();
}

static void _call_f_operator_minus__gt__c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariantPointer<QAssociativeIterator> > ((QVariantPointer<QAssociativeIterator>)((QAssociativeIterator *)cls)->operator-> ());
}


// QVariantRef<QAssociativeIterator> QAssociativeIterator::value()


static void _init_f_value_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariantRef<QAssociativeIterator> > ();
}

static void _call_f_value_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariantRef<QAssociativeIterator> > ((QVariantRef<QAssociativeIterator>)((QAssociativeIterator *)cls)->value ());
}



namespace gsi
{

static gsi::Methods methods_QAssociativeIterator () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("key", "@brief Method QVariant QAssociativeIterator::key()\n", true, &_init_f_key_c0, &_call_f_key_c0);
  methods += new qt_gsi::GenericMethod ("*", "@brief Method QVariantRef<QAssociativeIterator> QAssociativeIterator::operator*()\n", true, &_init_f_operator_star__c0, &_call_f_operator_star__c0);
  methods += new qt_gsi::GenericMethod ("->", "@brief Method QVariantPointer<QAssociativeIterator> QAssociativeIterator::operator->()\n", true, &_init_f_operator_minus__gt__c0, &_call_f_operator_minus__gt__c0);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QVariantRef<QAssociativeIterator> QAssociativeIterator::value()\n", true, &_init_f_value_c0, &_call_f_value_c0);
  return methods;
}

gsi::Class<QIterator<QMetaAssociation>> &qtdecl_QIterator<QMetaAssociation> ();

gsi::Class<QAssociativeIterator> decl_QAssociativeIterator (qtdecl_QIterator<QMetaAssociation> (), "QtCore", "QAssociativeIterator",
  methods_QAssociativeIterator (),
  "@qt\n@brief Binding of QAssociativeIterator");


GSI_QTCORE_PUBLIC gsi::Class<QAssociativeIterator> &qtdecl_QAssociativeIterator () { return decl_QAssociativeIterator; }

}

