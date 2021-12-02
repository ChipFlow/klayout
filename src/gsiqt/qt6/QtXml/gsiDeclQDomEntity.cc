
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
*  @file gsiDeclQDomEntity.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDomEntity>
#include <QDomAttr>
#include <QDomCDATASection>
#include <QDomCharacterData>
#include <QDomComment>
#include <QDomDocument>
#include <QDomDocumentFragment>
#include <QDomDocumentType>
#include <QDomElement>
#include <QDomEntityReference>
#include <QDomNamedNodeMap>
#include <QDomNode>
#include <QDomNodeList>
#include <QDomNotation>
#include <QDomProcessingInstruction>
#include <QDomText>
#include <QTextStream>
#include "gsiQt.h"
#include "gsiQtXmlCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDomEntity

//  Constructor QDomEntity::QDomEntity()


static void _init_ctor_QDomEntity_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDomEntity> ();
}

static void _call_ctor_QDomEntity_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomEntity *> (new QDomEntity ());
}


//  Constructor QDomEntity::QDomEntity(const QDomEntity &x)


static void _init_ctor_QDomEntity_2319 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<const QDomEntity & > (argspec_0);
  decl->set_return_new<QDomEntity> ();
}

static void _call_ctor_QDomEntity_2319 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomEntity &arg1 = gsi::arg_reader<const QDomEntity & >() (args, heap);
  ret.write<QDomEntity *> (new QDomEntity (arg1));
}


// QDomNode::NodeType QDomEntity::nodeType()


static void _init_f_nodeType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QDomNode::NodeType>::target_type > ();
}

static void _call_f_nodeType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QDomNode::NodeType>::target_type > ((qt_gsi::Converter<QDomNode::NodeType>::target_type)qt_gsi::CppToQtAdaptor<QDomNode::NodeType>(((QDomEntity *)cls)->nodeType ()));
}


// QString QDomEntity::notationName()


static void _init_f_notationName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_notationName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDomEntity *)cls)->notationName ());
}


// QDomEntity &QDomEntity::operator=(const QDomEntity &)


static void _init_f_operator_eq__2319 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomEntity & > (argspec_0);
  decl->set_return<QDomEntity & > ();
}

static void _call_f_operator_eq__2319 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomEntity &arg1 = gsi::arg_reader<const QDomEntity & >() (args, heap);
  ret.write<QDomEntity & > ((QDomEntity &)((QDomEntity *)cls)->operator= (arg1));
}


// QString QDomEntity::publicId()


static void _init_f_publicId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_publicId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDomEntity *)cls)->publicId ());
}


// QString QDomEntity::systemId()


static void _init_f_systemId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_systemId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDomEntity *)cls)->systemId ());
}



namespace gsi
{

static gsi::Methods methods_QDomEntity () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomEntity::QDomEntity()\nThis method creates an object of class QDomEntity.", &_init_ctor_QDomEntity_0, &_call_ctor_QDomEntity_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomEntity::QDomEntity(const QDomEntity &x)\nThis method creates an object of class QDomEntity.", &_init_ctor_QDomEntity_2319, &_call_ctor_QDomEntity_2319);
  methods += new qt_gsi::GenericMethod ("nodeType", "@brief Method QDomNode::NodeType QDomEntity::nodeType()\n", true, &_init_f_nodeType_c0, &_call_f_nodeType_c0);
  methods += new qt_gsi::GenericMethod ("notationName", "@brief Method QString QDomEntity::notationName()\n", true, &_init_f_notationName_c0, &_call_f_notationName_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDomEntity &QDomEntity::operator=(const QDomEntity &)\n", false, &_init_f_operator_eq__2319, &_call_f_operator_eq__2319);
  methods += new qt_gsi::GenericMethod ("publicId", "@brief Method QString QDomEntity::publicId()\n", true, &_init_f_publicId_c0, &_call_f_publicId_c0);
  methods += new qt_gsi::GenericMethod ("systemId", "@brief Method QString QDomEntity::systemId()\n", true, &_init_f_systemId_c0, &_call_f_systemId_c0);
  return methods;
}

gsi::Class<QDomNode> &qtdecl_QDomNode ();

gsi::Class<QDomEntity> decl_QDomEntity (qtdecl_QDomNode (), "QtXml", "QDomEntity",
  methods_QDomEntity (),
  "@qt\n@brief Binding of QDomEntity");


GSI_QTXML_PUBLIC gsi::Class<QDomEntity> &qtdecl_QDomEntity () { return decl_QDomEntity; }

}

