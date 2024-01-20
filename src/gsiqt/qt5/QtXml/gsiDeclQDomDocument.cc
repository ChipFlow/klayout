
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
*  @file gsiDeclQDomDocument.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDomDocument>
#include <QDomAttr>
#include <QDomCDATASection>
#include <QDomCharacterData>
#include <QDomComment>
#include <QDomDocumentFragment>
#include <QDomDocumentType>
#include <QDomElement>
#include <QDomEntity>
#include <QDomEntityReference>
#include <QDomImplementation>
#include <QDomNamedNodeMap>
#include <QDomNode>
#include <QDomNodeList>
#include <QDomNotation>
#include <QDomProcessingInstruction>
#include <QDomText>
#include <QIODevice>
#include <QTextStream>
#include <QXmlInputSource>
#include <QXmlReader>
#include "gsiQt.h"
#include "gsiQtXmlCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDomDocument

//  Constructor QDomDocument::QDomDocument()


static void _init_ctor_QDomDocument_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDomDocument> ();
}

static void _call_ctor_QDomDocument_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomDocument *> (new QDomDocument ());
}


//  Constructor QDomDocument::QDomDocument(const QString &name)


static void _init_ctor_QDomDocument_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QDomDocument> ();
}

static void _call_ctor_QDomDocument_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomDocument *> (new QDomDocument (arg1));
}


//  Constructor QDomDocument::QDomDocument(const QDomDocumentType &doctype)


static void _init_ctor_QDomDocument_2931 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("doctype");
  decl->add_arg<const QDomDocumentType & > (argspec_0);
  decl->set_return_new<QDomDocument> ();
}

static void _call_ctor_QDomDocument_2931 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomDocumentType &arg1 = gsi::arg_reader<const QDomDocumentType & >() (args, heap);
  ret.write<QDomDocument *> (new QDomDocument (arg1));
}


//  Constructor QDomDocument::QDomDocument(const QDomDocument &x)


static void _init_ctor_QDomDocument_2513 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<const QDomDocument & > (argspec_0);
  decl->set_return_new<QDomDocument> ();
}

static void _call_ctor_QDomDocument_2513 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomDocument &arg1 = gsi::arg_reader<const QDomDocument & >() (args, heap);
  ret.write<QDomDocument *> (new QDomDocument (arg1));
}


// QDomAttr QDomDocument::createAttribute(const QString &name)


static void _init_f_createAttribute_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QDomAttr > ();
}

static void _call_f_createAttribute_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomAttr > ((QDomAttr)((QDomDocument *)cls)->createAttribute (arg1));
}


// QDomAttr QDomDocument::createAttributeNS(const QString &nsURI, const QString &qName)


static void _init_f_createAttributeNS_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nsURI");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("qName");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QDomAttr > ();
}

static void _call_f_createAttributeNS_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomAttr > ((QDomAttr)((QDomDocument *)cls)->createAttributeNS (arg1, arg2));
}


// QDomCDATASection QDomDocument::createCDATASection(const QString &data)


static void _init_f_createCDATASection_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QDomCDATASection > ();
}

static void _call_f_createCDATASection_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomCDATASection > ((QDomCDATASection)((QDomDocument *)cls)->createCDATASection (arg1));
}


// QDomComment QDomDocument::createComment(const QString &data)


static void _init_f_createComment_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QDomComment > ();
}

static void _call_f_createComment_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomComment > ((QDomComment)((QDomDocument *)cls)->createComment (arg1));
}


// QDomDocumentFragment QDomDocument::createDocumentFragment()


static void _init_f_createDocumentFragment_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDomDocumentFragment > ();
}

static void _call_f_createDocumentFragment_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomDocumentFragment > ((QDomDocumentFragment)((QDomDocument *)cls)->createDocumentFragment ());
}


// QDomElement QDomDocument::createElement(const QString &tagName)


static void _init_f_createElement_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("tagName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QDomElement > ();
}

static void _call_f_createElement_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomElement > ((QDomElement)((QDomDocument *)cls)->createElement (arg1));
}


// QDomElement QDomDocument::createElementNS(const QString &nsURI, const QString &qName)


static void _init_f_createElementNS_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nsURI");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("qName");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QDomElement > ();
}

static void _call_f_createElementNS_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomElement > ((QDomElement)((QDomDocument *)cls)->createElementNS (arg1, arg2));
}


// QDomEntityReference QDomDocument::createEntityReference(const QString &name)


static void _init_f_createEntityReference_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QDomEntityReference > ();
}

static void _call_f_createEntityReference_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomEntityReference > ((QDomEntityReference)((QDomDocument *)cls)->createEntityReference (arg1));
}


// QDomProcessingInstruction QDomDocument::createProcessingInstruction(const QString &target, const QString &data)


static void _init_f_createProcessingInstruction_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("target");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("data");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QDomProcessingInstruction > ();
}

static void _call_f_createProcessingInstruction_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomProcessingInstruction > ((QDomProcessingInstruction)((QDomDocument *)cls)->createProcessingInstruction (arg1, arg2));
}


// QDomText QDomDocument::createTextNode(const QString &data)


static void _init_f_createTextNode_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QDomText > ();
}

static void _call_f_createTextNode_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomText > ((QDomText)((QDomDocument *)cls)->createTextNode (arg1));
}


// QDomDocumentType QDomDocument::doctype()


static void _init_f_doctype_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDomDocumentType > ();
}

static void _call_f_doctype_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomDocumentType > ((QDomDocumentType)((QDomDocument *)cls)->doctype ());
}


// QDomElement QDomDocument::documentElement()


static void _init_f_documentElement_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDomElement > ();
}

static void _call_f_documentElement_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomElement > ((QDomElement)((QDomDocument *)cls)->documentElement ());
}


// QDomElement QDomDocument::elementById(const QString &elementId)


static void _init_f_elementById_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("elementId");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QDomElement > ();
}

static void _call_f_elementById_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomElement > ((QDomElement)((QDomDocument *)cls)->elementById (arg1));
}


// QDomNodeList QDomDocument::elementsByTagName(const QString &tagname)


static void _init_f_elementsByTagName_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("tagname");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QDomNodeList > ();
}

static void _call_f_elementsByTagName_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomNodeList > ((QDomNodeList)((QDomDocument *)cls)->elementsByTagName (arg1));
}


// QDomNodeList QDomDocument::elementsByTagNameNS(const QString &nsURI, const QString &localName)


static void _init_f_elementsByTagNameNS_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nsURI");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("localName");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QDomNodeList > ();
}

static void _call_f_elementsByTagNameNS_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomNodeList > ((QDomNodeList)((QDomDocument *)cls)->elementsByTagNameNS (arg1, arg2));
}


// QDomImplementation QDomDocument::implementation()


static void _init_f_implementation_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDomImplementation > ();
}

static void _call_f_implementation_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomImplementation > ((QDomImplementation)((QDomDocument *)cls)->implementation ());
}


// QDomNode QDomDocument::importNode(const QDomNode &importedNode, bool deep)


static void _init_f_importNode_2828 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("importedNode");
  decl->add_arg<const QDomNode & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("deep");
  decl->add_arg<bool > (argspec_1);
  decl->set_return<QDomNode > ();
}

static void _call_f_importNode_2828 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomNode &arg1 = gsi::arg_reader<const QDomNode & >() (args, heap);
  bool arg2 = gsi::arg_reader<bool >() (args, heap);
  ret.write<QDomNode > ((QDomNode)((QDomDocument *)cls)->importNode (arg1, arg2));
}


// QDomNode::NodeType QDomDocument::nodeType()


static void _init_f_nodeType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QDomNode::NodeType>::target_type > ();
}

static void _call_f_nodeType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QDomNode::NodeType>::target_type > ((qt_gsi::Converter<QDomNode::NodeType>::target_type)qt_gsi::CppToQtAdaptor<QDomNode::NodeType>(((QDomDocument *)cls)->nodeType ()));
}


// QDomDocument &QDomDocument::operator=(const QDomDocument &)


static void _init_f_operator_eq__2513 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomDocument & > (argspec_0);
  decl->set_return<QDomDocument & > ();
}

static void _call_f_operator_eq__2513 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomDocument &arg1 = gsi::arg_reader<const QDomDocument & >() (args, heap);
  ret.write<QDomDocument & > ((QDomDocument &)((QDomDocument *)cls)->operator= (arg1));
}


// bool QDomDocument::setContent(const QString &text, bool namespaceProcessing, QString *errorMsg, int *errorLine, int *errorColumn)


static void _init_f_setContent_5697 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("namespaceProcessing");
  decl->add_arg<bool > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("errorMsg", true, "nullptr");
  decl->add_arg<QString * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("errorLine", true, "nullptr");
  decl->add_arg<int * > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("errorColumn", true, "nullptr");
  decl->add_arg<int * > (argspec_4);
  decl->set_return<bool > ();
}

static void _call_f_setContent_5697 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  bool arg2 = gsi::arg_reader<bool >() (args, heap);
  QString *arg3 = args ? gsi::arg_reader<QString * >() (args, heap) : gsi::arg_maker<QString * >() (nullptr, heap);
  int *arg4 = args ? gsi::arg_reader<int * >() (args, heap) : gsi::arg_maker<int * >() (nullptr, heap);
  int *arg5 = args ? gsi::arg_reader<int * >() (args, heap) : gsi::arg_maker<int * >() (nullptr, heap);
  ret.write<bool > ((bool)((QDomDocument *)cls)->setContent (arg1, arg2, arg3, arg4, arg5));
}


// bool QDomDocument::setContent(QIODevice *dev, bool namespaceProcessing, QString *errorMsg, int *errorLine, int *errorColumn)


static void _init_f_setContent_5119 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dev");
  decl->add_arg<QIODevice * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("namespaceProcessing");
  decl->add_arg<bool > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("errorMsg", true, "nullptr");
  decl->add_arg<QString * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("errorLine", true, "nullptr");
  decl->add_arg<int * > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("errorColumn", true, "nullptr");
  decl->add_arg<int * > (argspec_4);
  decl->set_return<bool > ();
}

static void _call_f_setContent_5119 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  bool arg2 = gsi::arg_reader<bool >() (args, heap);
  QString *arg3 = args ? gsi::arg_reader<QString * >() (args, heap) : gsi::arg_maker<QString * >() (nullptr, heap);
  int *arg4 = args ? gsi::arg_reader<int * >() (args, heap) : gsi::arg_maker<int * >() (nullptr, heap);
  int *arg5 = args ? gsi::arg_reader<int * >() (args, heap) : gsi::arg_maker<int * >() (nullptr, heap);
  ret.write<bool > ((bool)((QDomDocument *)cls)->setContent (arg1, arg2, arg3, arg4, arg5));
}


// bool QDomDocument::setContent(QXmlInputSource *source, bool namespaceProcessing, QString *errorMsg, int *errorLine, int *errorColumn)


static void _init_f_setContent_5833 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("source");
  decl->add_arg<QXmlInputSource * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("namespaceProcessing");
  decl->add_arg<bool > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("errorMsg", true, "nullptr");
  decl->add_arg<QString * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("errorLine", true, "nullptr");
  decl->add_arg<int * > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("errorColumn", true, "nullptr");
  decl->add_arg<int * > (argspec_4);
  decl->set_return<bool > ();
}

static void _call_f_setContent_5833 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QXmlInputSource *arg1 = gsi::arg_reader<QXmlInputSource * >() (args, heap);
  bool arg2 = gsi::arg_reader<bool >() (args, heap);
  QString *arg3 = args ? gsi::arg_reader<QString * >() (args, heap) : gsi::arg_maker<QString * >() (nullptr, heap);
  int *arg4 = args ? gsi::arg_reader<int * >() (args, heap) : gsi::arg_maker<int * >() (nullptr, heap);
  int *arg5 = args ? gsi::arg_reader<int * >() (args, heap) : gsi::arg_maker<int * >() (nullptr, heap);
  ret.write<bool > ((bool)((QDomDocument *)cls)->setContent (arg1, arg2, arg3, arg4, arg5));
}


// bool QDomDocument::setContent(const QString &text, QString *errorMsg, int *errorLine, int *errorColumn)


static void _init_f_setContent_4941 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("errorMsg", true, "nullptr");
  decl->add_arg<QString * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("errorLine", true, "nullptr");
  decl->add_arg<int * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("errorColumn", true, "nullptr");
  decl->add_arg<int * > (argspec_3);
  decl->set_return<bool > ();
}

static void _call_f_setContent_4941 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QString *arg2 = args ? gsi::arg_reader<QString * >() (args, heap) : gsi::arg_maker<QString * >() (nullptr, heap);
  int *arg3 = args ? gsi::arg_reader<int * >() (args, heap) : gsi::arg_maker<int * >() (nullptr, heap);
  int *arg4 = args ? gsi::arg_reader<int * >() (args, heap) : gsi::arg_maker<int * >() (nullptr, heap);
  ret.write<bool > ((bool)((QDomDocument *)cls)->setContent (arg1, arg2, arg3, arg4));
}


// bool QDomDocument::setContent(QIODevice *dev, QString *errorMsg, int *errorLine, int *errorColumn)


static void _init_f_setContent_4363 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dev");
  decl->add_arg<QIODevice * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("errorMsg", true, "nullptr");
  decl->add_arg<QString * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("errorLine", true, "nullptr");
  decl->add_arg<int * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("errorColumn", true, "nullptr");
  decl->add_arg<int * > (argspec_3);
  decl->set_return<bool > ();
}

static void _call_f_setContent_4363 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  QString *arg2 = args ? gsi::arg_reader<QString * >() (args, heap) : gsi::arg_maker<QString * >() (nullptr, heap);
  int *arg3 = args ? gsi::arg_reader<int * >() (args, heap) : gsi::arg_maker<int * >() (nullptr, heap);
  int *arg4 = args ? gsi::arg_reader<int * >() (args, heap) : gsi::arg_maker<int * >() (nullptr, heap);
  ret.write<bool > ((bool)((QDomDocument *)cls)->setContent (arg1, arg2, arg3, arg4));
}


// bool QDomDocument::setContent(QXmlInputSource *source, QXmlReader *reader, QString *errorMsg, int *errorLine, int *errorColumn)


static void _init_f_setContent_6572 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("source");
  decl->add_arg<QXmlInputSource * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("reader");
  decl->add_arg<QXmlReader * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("errorMsg", true, "nullptr");
  decl->add_arg<QString * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("errorLine", true, "nullptr");
  decl->add_arg<int * > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("errorColumn", true, "nullptr");
  decl->add_arg<int * > (argspec_4);
  decl->set_return<bool > ();
}

static void _call_f_setContent_6572 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QXmlInputSource *arg1 = gsi::arg_reader<QXmlInputSource * >() (args, heap);
  QXmlReader *arg2 = gsi::arg_reader<QXmlReader * >() (args, heap);
  QString *arg3 = args ? gsi::arg_reader<QString * >() (args, heap) : gsi::arg_maker<QString * >() (nullptr, heap);
  int *arg4 = args ? gsi::arg_reader<int * >() (args, heap) : gsi::arg_maker<int * >() (nullptr, heap);
  int *arg5 = args ? gsi::arg_reader<int * >() (args, heap) : gsi::arg_maker<int * >() (nullptr, heap);
  ret.write<bool > ((bool)((QDomDocument *)cls)->setContent (arg1, arg2, arg3, arg4, arg5));
}


// QByteArray QDomDocument::toByteArray(int)


static void _init_f_toByteArray_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_toByteArray_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (1, heap);
  ret.write<QByteArray > ((QByteArray)((QDomDocument *)cls)->toByteArray (arg1));
}


// QString QDomDocument::toString(int)


static void _init_f_toString_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_toString_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (1, heap);
  ret.write<QString > ((QString)((QDomDocument *)cls)->toString (arg1));
}



namespace gsi
{

static gsi::Methods methods_QDomDocument () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomDocument::QDomDocument()\nThis method creates an object of class QDomDocument.", &_init_ctor_QDomDocument_0, &_call_ctor_QDomDocument_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomDocument::QDomDocument(const QString &name)\nThis method creates an object of class QDomDocument.", &_init_ctor_QDomDocument_2025, &_call_ctor_QDomDocument_2025);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomDocument::QDomDocument(const QDomDocumentType &doctype)\nThis method creates an object of class QDomDocument.", &_init_ctor_QDomDocument_2931, &_call_ctor_QDomDocument_2931);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomDocument::QDomDocument(const QDomDocument &x)\nThis method creates an object of class QDomDocument.", &_init_ctor_QDomDocument_2513, &_call_ctor_QDomDocument_2513);
  methods += new qt_gsi::GenericMethod ("createAttribute", "@brief Method QDomAttr QDomDocument::createAttribute(const QString &name)\n", false, &_init_f_createAttribute_2025, &_call_f_createAttribute_2025);
  methods += new qt_gsi::GenericMethod ("createAttributeNS", "@brief Method QDomAttr QDomDocument::createAttributeNS(const QString &nsURI, const QString &qName)\n", false, &_init_f_createAttributeNS_3942, &_call_f_createAttributeNS_3942);
  methods += new qt_gsi::GenericMethod ("createCDATASection", "@brief Method QDomCDATASection QDomDocument::createCDATASection(const QString &data)\n", false, &_init_f_createCDATASection_2025, &_call_f_createCDATASection_2025);
  methods += new qt_gsi::GenericMethod ("createComment", "@brief Method QDomComment QDomDocument::createComment(const QString &data)\n", false, &_init_f_createComment_2025, &_call_f_createComment_2025);
  methods += new qt_gsi::GenericMethod ("createDocumentFragment", "@brief Method QDomDocumentFragment QDomDocument::createDocumentFragment()\n", false, &_init_f_createDocumentFragment_0, &_call_f_createDocumentFragment_0);
  methods += new qt_gsi::GenericMethod ("createElement", "@brief Method QDomElement QDomDocument::createElement(const QString &tagName)\n", false, &_init_f_createElement_2025, &_call_f_createElement_2025);
  methods += new qt_gsi::GenericMethod ("createElementNS", "@brief Method QDomElement QDomDocument::createElementNS(const QString &nsURI, const QString &qName)\n", false, &_init_f_createElementNS_3942, &_call_f_createElementNS_3942);
  methods += new qt_gsi::GenericMethod ("createEntityReference", "@brief Method QDomEntityReference QDomDocument::createEntityReference(const QString &name)\n", false, &_init_f_createEntityReference_2025, &_call_f_createEntityReference_2025);
  methods += new qt_gsi::GenericMethod ("createProcessingInstruction", "@brief Method QDomProcessingInstruction QDomDocument::createProcessingInstruction(const QString &target, const QString &data)\n", false, &_init_f_createProcessingInstruction_3942, &_call_f_createProcessingInstruction_3942);
  methods += new qt_gsi::GenericMethod ("createTextNode", "@brief Method QDomText QDomDocument::createTextNode(const QString &data)\n", false, &_init_f_createTextNode_2025, &_call_f_createTextNode_2025);
  methods += new qt_gsi::GenericMethod ("doctype", "@brief Method QDomDocumentType QDomDocument::doctype()\n", true, &_init_f_doctype_c0, &_call_f_doctype_c0);
  methods += new qt_gsi::GenericMethod ("documentElement", "@brief Method QDomElement QDomDocument::documentElement()\n", true, &_init_f_documentElement_c0, &_call_f_documentElement_c0);
  methods += new qt_gsi::GenericMethod ("elementById", "@brief Method QDomElement QDomDocument::elementById(const QString &elementId)\n", false, &_init_f_elementById_2025, &_call_f_elementById_2025);
  methods += new qt_gsi::GenericMethod ("elementsByTagName", "@brief Method QDomNodeList QDomDocument::elementsByTagName(const QString &tagname)\n", true, &_init_f_elementsByTagName_c2025, &_call_f_elementsByTagName_c2025);
  methods += new qt_gsi::GenericMethod ("elementsByTagNameNS", "@brief Method QDomNodeList QDomDocument::elementsByTagNameNS(const QString &nsURI, const QString &localName)\n", false, &_init_f_elementsByTagNameNS_3942, &_call_f_elementsByTagNameNS_3942);
  methods += new qt_gsi::GenericMethod ("implementation", "@brief Method QDomImplementation QDomDocument::implementation()\n", true, &_init_f_implementation_c0, &_call_f_implementation_c0);
  methods += new qt_gsi::GenericMethod ("importNode", "@brief Method QDomNode QDomDocument::importNode(const QDomNode &importedNode, bool deep)\n", false, &_init_f_importNode_2828, &_call_f_importNode_2828);
  methods += new qt_gsi::GenericMethod ("nodeType", "@brief Method QDomNode::NodeType QDomDocument::nodeType()\n", true, &_init_f_nodeType_c0, &_call_f_nodeType_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDomDocument &QDomDocument::operator=(const QDomDocument &)\n", false, &_init_f_operator_eq__2513, &_call_f_operator_eq__2513);
  methods += new qt_gsi::GenericMethod ("setContent", "@brief Method bool QDomDocument::setContent(const QString &text, bool namespaceProcessing, QString *errorMsg, int *errorLine, int *errorColumn)\n", false, &_init_f_setContent_5697, &_call_f_setContent_5697);
  methods += new qt_gsi::GenericMethod ("setContent", "@brief Method bool QDomDocument::setContent(QIODevice *dev, bool namespaceProcessing, QString *errorMsg, int *errorLine, int *errorColumn)\n", false, &_init_f_setContent_5119, &_call_f_setContent_5119);
  methods += new qt_gsi::GenericMethod ("setContent", "@brief Method bool QDomDocument::setContent(QXmlInputSource *source, bool namespaceProcessing, QString *errorMsg, int *errorLine, int *errorColumn)\n", false, &_init_f_setContent_5833, &_call_f_setContent_5833);
  methods += new qt_gsi::GenericMethod ("setContent", "@brief Method bool QDomDocument::setContent(const QString &text, QString *errorMsg, int *errorLine, int *errorColumn)\n", false, &_init_f_setContent_4941, &_call_f_setContent_4941);
  methods += new qt_gsi::GenericMethod ("setContent", "@brief Method bool QDomDocument::setContent(QIODevice *dev, QString *errorMsg, int *errorLine, int *errorColumn)\n", false, &_init_f_setContent_4363, &_call_f_setContent_4363);
  methods += new qt_gsi::GenericMethod ("setContent", "@brief Method bool QDomDocument::setContent(QXmlInputSource *source, QXmlReader *reader, QString *errorMsg, int *errorLine, int *errorColumn)\n", false, &_init_f_setContent_6572, &_call_f_setContent_6572);
  methods += new qt_gsi::GenericMethod ("toByteArray", "@brief Method QByteArray QDomDocument::toByteArray(int)\n", true, &_init_f_toByteArray_c767, &_call_f_toByteArray_c767);
  methods += new qt_gsi::GenericMethod ("toString", "@brief Method QString QDomDocument::toString(int)\n", true, &_init_f_toString_c767, &_call_f_toString_c767);
  return methods;
}

gsi::Class<QDomNode> &qtdecl_QDomNode ();

gsi::Class<QDomDocument> decl_QDomDocument (qtdecl_QDomNode (), "QtXml", "QDomDocument",
  methods_QDomDocument (),
  "@qt\n@brief Binding of QDomDocument");


GSI_QTXML_PUBLIC gsi::Class<QDomDocument> &qtdecl_QDomDocument () { return decl_QDomDocument; }

}

