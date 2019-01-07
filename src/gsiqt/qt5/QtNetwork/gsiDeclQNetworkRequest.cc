
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
*  @file gsiDeclQNetworkRequest.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QNetworkRequest>
#include <QObject>
#include <QSslConfiguration>
#include <QUrl>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include "gsiDeclQtNetworkTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QNetworkRequest

//  Constructor QNetworkRequest::QNetworkRequest(const QUrl &url)


static void _init_ctor_QNetworkRequest_1701 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("url", true, "QUrl()");
  decl->add_arg<const QUrl & > (argspec_0);
  decl->set_return_new<QNetworkRequest> ();
}

static void _call_ctor_QNetworkRequest_1701 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrl &arg1 = args ? args.read<const QUrl & > (heap) : (const QUrl &)(QUrl());
  ret.write<QNetworkRequest *> (new QNetworkRequest (arg1));
}


//  Constructor QNetworkRequest::QNetworkRequest(const QNetworkRequest &other)


static void _init_ctor_QNetworkRequest_2885 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkRequest & > (argspec_0);
  decl->set_return_new<QNetworkRequest> ();
}

static void _call_ctor_QNetworkRequest_2885 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkRequest &arg1 = args.read<const QNetworkRequest & > (heap);
  ret.write<QNetworkRequest *> (new QNetworkRequest (arg1));
}


// QVariant QNetworkRequest::attribute(QNetworkRequest::Attribute code, const QVariant &defaultValue)


static void _init_f_attribute_c5083 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("code");
  decl->add_arg<const qt_gsi::Converter<QNetworkRequest::Attribute>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("defaultValue", true, "QVariant()");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<QVariant > ();
}

static void _call_f_attribute_c5083 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QNetworkRequest::Attribute>::target_type & arg1 = args.read<const qt_gsi::Converter<QNetworkRequest::Attribute>::target_type & > (heap);
  const QVariant &arg2 = args ? args.read<const QVariant & > (heap) : (const QVariant &)(QVariant());
  ret.write<QVariant > ((QVariant)((QNetworkRequest *)cls)->attribute (qt_gsi::QtToCppAdaptor<QNetworkRequest::Attribute>(arg1).cref(), arg2));
}


// bool QNetworkRequest::hasRawHeader(const QByteArray &headerName)


static void _init_f_hasRawHeader_c2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("headerName");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_hasRawHeader_c2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<bool > ((bool)((QNetworkRequest *)cls)->hasRawHeader (arg1));
}


// QVariant QNetworkRequest::header(QNetworkRequest::KnownHeaders header)


static void _init_f_header_c3349 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("header");
  decl->add_arg<const qt_gsi::Converter<QNetworkRequest::KnownHeaders>::target_type & > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_header_c3349 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QNetworkRequest::KnownHeaders>::target_type & arg1 = args.read<const qt_gsi::Converter<QNetworkRequest::KnownHeaders>::target_type & > (heap);
  ret.write<QVariant > ((QVariant)((QNetworkRequest *)cls)->header (qt_gsi::QtToCppAdaptor<QNetworkRequest::KnownHeaders>(arg1).cref()));
}


// bool QNetworkRequest::operator!=(const QNetworkRequest &other)


static void _init_f_operator_excl__eq__c2885 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkRequest & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2885 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkRequest &arg1 = args.read<const QNetworkRequest & > (heap);
  ret.write<bool > ((bool)((QNetworkRequest *)cls)->operator!= (arg1));
}


// QNetworkRequest &QNetworkRequest::operator=(const QNetworkRequest &other)


static void _init_f_operator_eq__2885 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkRequest & > (argspec_0);
  decl->set_return<QNetworkRequest & > ();
}

static void _call_f_operator_eq__2885 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkRequest &arg1 = args.read<const QNetworkRequest & > (heap);
  ret.write<QNetworkRequest & > ((QNetworkRequest &)((QNetworkRequest *)cls)->operator= (arg1));
}


// bool QNetworkRequest::operator==(const QNetworkRequest &other)


static void _init_f_operator_eq__eq__c2885 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkRequest & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2885 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkRequest &arg1 = args.read<const QNetworkRequest & > (heap);
  ret.write<bool > ((bool)((QNetworkRequest *)cls)->operator== (arg1));
}


// QObject *QNetworkRequest::originatingObject()


static void _init_f_originatingObject_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_f_originatingObject_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QNetworkRequest *)cls)->originatingObject ());
}


// QNetworkRequest::Priority QNetworkRequest::priority()


static void _init_f_priority_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QNetworkRequest::Priority>::target_type > ();
}

static void _call_f_priority_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QNetworkRequest::Priority>::target_type > ((qt_gsi::Converter<QNetworkRequest::Priority>::target_type)qt_gsi::CppToQtAdaptor<QNetworkRequest::Priority>(((QNetworkRequest *)cls)->priority ()));
}


// QByteArray QNetworkRequest::rawHeader(const QByteArray &headerName)


static void _init_f_rawHeader_c2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("headerName");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_rawHeader_c2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<QByteArray > ((QByteArray)((QNetworkRequest *)cls)->rawHeader (arg1));
}


// QList<QByteArray> QNetworkRequest::rawHeaderList()


static void _init_f_rawHeaderList_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_rawHeaderList_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)((QNetworkRequest *)cls)->rawHeaderList ());
}


// void QNetworkRequest::setAttribute(QNetworkRequest::Attribute code, const QVariant &value)


static void _init_f_setAttribute_5083 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("code");
  decl->add_arg<const qt_gsi::Converter<QNetworkRequest::Attribute>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setAttribute_5083 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QNetworkRequest::Attribute>::target_type & arg1 = args.read<const qt_gsi::Converter<QNetworkRequest::Attribute>::target_type & > (heap);
  const QVariant &arg2 = args.read<const QVariant & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkRequest *)cls)->setAttribute (qt_gsi::QtToCppAdaptor<QNetworkRequest::Attribute>(arg1).cref(), arg2);
}


// void QNetworkRequest::setHeader(QNetworkRequest::KnownHeaders header, const QVariant &value)


static void _init_f_setHeader_5360 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("header");
  decl->add_arg<const qt_gsi::Converter<QNetworkRequest::KnownHeaders>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setHeader_5360 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QNetworkRequest::KnownHeaders>::target_type & arg1 = args.read<const qt_gsi::Converter<QNetworkRequest::KnownHeaders>::target_type & > (heap);
  const QVariant &arg2 = args.read<const QVariant & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkRequest *)cls)->setHeader (qt_gsi::QtToCppAdaptor<QNetworkRequest::KnownHeaders>(arg1).cref(), arg2);
}


// void QNetworkRequest::setOriginatingObject(QObject *object)


static void _init_f_setOriginatingObject_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("object");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setOriginatingObject_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkRequest *)cls)->setOriginatingObject (arg1);
}


// void QNetworkRequest::setPriority(QNetworkRequest::Priority priority)


static void _init_f_setPriority_2990 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("priority");
  decl->add_arg<const qt_gsi::Converter<QNetworkRequest::Priority>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPriority_2990 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QNetworkRequest::Priority>::target_type & arg1 = args.read<const qt_gsi::Converter<QNetworkRequest::Priority>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkRequest *)cls)->setPriority (qt_gsi::QtToCppAdaptor<QNetworkRequest::Priority>(arg1).cref());
}


// void QNetworkRequest::setRawHeader(const QByteArray &headerName, const QByteArray &value)


static void _init_f_setRawHeader_4510 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("headerName");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QByteArray & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setRawHeader_4510 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  const QByteArray &arg2 = args.read<const QByteArray & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkRequest *)cls)->setRawHeader (arg1, arg2);
}


// void QNetworkRequest::setSslConfiguration(const QSslConfiguration &configuration)


static void _init_f_setSslConfiguration_3068 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("configuration");
  decl->add_arg<const QSslConfiguration & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSslConfiguration_3068 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslConfiguration &arg1 = args.read<const QSslConfiguration & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkRequest *)cls)->setSslConfiguration (arg1);
}


// void QNetworkRequest::setUrl(const QUrl &url)


static void _init_f_setUrl_1701 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("url");
  decl->add_arg<const QUrl & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setUrl_1701 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrl &arg1 = args.read<const QUrl & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkRequest *)cls)->setUrl (arg1);
}


// QSslConfiguration QNetworkRequest::sslConfiguration()


static void _init_f_sslConfiguration_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSslConfiguration > ();
}

static void _call_f_sslConfiguration_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSslConfiguration > ((QSslConfiguration)((QNetworkRequest *)cls)->sslConfiguration ());
}


// void QNetworkRequest::swap(QNetworkRequest &other)


static void _init_f_swap_2190 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QNetworkRequest & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2190 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QNetworkRequest &arg1 = args.read<QNetworkRequest & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkRequest *)cls)->swap (arg1);
}


// QUrl QNetworkRequest::url()


static void _init_f_url_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QUrl > ();
}

static void _call_f_url_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QUrl > ((QUrl)((QNetworkRequest *)cls)->url ());
}



namespace gsi
{

static gsi::Methods methods_QNetworkRequest () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QNetworkRequest::QNetworkRequest(const QUrl &url)\nThis method creates an object of class QNetworkRequest.", &_init_ctor_QNetworkRequest_1701, &_call_ctor_QNetworkRequest_1701);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QNetworkRequest::QNetworkRequest(const QNetworkRequest &other)\nThis method creates an object of class QNetworkRequest.", &_init_ctor_QNetworkRequest_2885, &_call_ctor_QNetworkRequest_2885);
  methods += new qt_gsi::GenericMethod ("attribute", "@brief Method QVariant QNetworkRequest::attribute(QNetworkRequest::Attribute code, const QVariant &defaultValue)\n", true, &_init_f_attribute_c5083, &_call_f_attribute_c5083);
  methods += new qt_gsi::GenericMethod ("hasRawHeader", "@brief Method bool QNetworkRequest::hasRawHeader(const QByteArray &headerName)\n", true, &_init_f_hasRawHeader_c2309, &_call_f_hasRawHeader_c2309);
  methods += new qt_gsi::GenericMethod ("header", "@brief Method QVariant QNetworkRequest::header(QNetworkRequest::KnownHeaders header)\n", true, &_init_f_header_c3349, &_call_f_header_c3349);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QNetworkRequest::operator!=(const QNetworkRequest &other)\n", true, &_init_f_operator_excl__eq__c2885, &_call_f_operator_excl__eq__c2885);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QNetworkRequest &QNetworkRequest::operator=(const QNetworkRequest &other)\n", false, &_init_f_operator_eq__2885, &_call_f_operator_eq__2885);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QNetworkRequest::operator==(const QNetworkRequest &other)\n", true, &_init_f_operator_eq__eq__c2885, &_call_f_operator_eq__eq__c2885);
  methods += new qt_gsi::GenericMethod (":originatingObject", "@brief Method QObject *QNetworkRequest::originatingObject()\n", true, &_init_f_originatingObject_c0, &_call_f_originatingObject_c0);
  methods += new qt_gsi::GenericMethod (":priority", "@brief Method QNetworkRequest::Priority QNetworkRequest::priority()\n", true, &_init_f_priority_c0, &_call_f_priority_c0);
  methods += new qt_gsi::GenericMethod ("rawHeader", "@brief Method QByteArray QNetworkRequest::rawHeader(const QByteArray &headerName)\n", true, &_init_f_rawHeader_c2309, &_call_f_rawHeader_c2309);
  methods += new qt_gsi::GenericMethod ("rawHeaderList", "@brief Method QList<QByteArray> QNetworkRequest::rawHeaderList()\n", true, &_init_f_rawHeaderList_c0, &_call_f_rawHeaderList_c0);
  methods += new qt_gsi::GenericMethod ("setAttribute", "@brief Method void QNetworkRequest::setAttribute(QNetworkRequest::Attribute code, const QVariant &value)\n", false, &_init_f_setAttribute_5083, &_call_f_setAttribute_5083);
  methods += new qt_gsi::GenericMethod ("setHeader", "@brief Method void QNetworkRequest::setHeader(QNetworkRequest::KnownHeaders header, const QVariant &value)\n", false, &_init_f_setHeader_5360, &_call_f_setHeader_5360);
  methods += new qt_gsi::GenericMethod ("setOriginatingObject|originatingObject=", "@brief Method void QNetworkRequest::setOriginatingObject(QObject *object)\n", false, &_init_f_setOriginatingObject_1302, &_call_f_setOriginatingObject_1302);
  methods += new qt_gsi::GenericMethod ("setPriority|priority=", "@brief Method void QNetworkRequest::setPriority(QNetworkRequest::Priority priority)\n", false, &_init_f_setPriority_2990, &_call_f_setPriority_2990);
  methods += new qt_gsi::GenericMethod ("setRawHeader", "@brief Method void QNetworkRequest::setRawHeader(const QByteArray &headerName, const QByteArray &value)\n", false, &_init_f_setRawHeader_4510, &_call_f_setRawHeader_4510);
  methods += new qt_gsi::GenericMethod ("setSslConfiguration|sslConfiguration=", "@brief Method void QNetworkRequest::setSslConfiguration(const QSslConfiguration &configuration)\n", false, &_init_f_setSslConfiguration_3068, &_call_f_setSslConfiguration_3068);
  methods += new qt_gsi::GenericMethod ("setUrl|url=", "@brief Method void QNetworkRequest::setUrl(const QUrl &url)\n", false, &_init_f_setUrl_1701, &_call_f_setUrl_1701);
  methods += new qt_gsi::GenericMethod (":sslConfiguration", "@brief Method QSslConfiguration QNetworkRequest::sslConfiguration()\n", true, &_init_f_sslConfiguration_c0, &_call_f_sslConfiguration_c0);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QNetworkRequest::swap(QNetworkRequest &other)\n", false, &_init_f_swap_2190, &_call_f_swap_2190);
  methods += new qt_gsi::GenericMethod (":url", "@brief Method QUrl QNetworkRequest::url()\n", true, &_init_f_url_c0, &_call_f_url_c0);
  return methods;
}

gsi::Class<QNetworkRequest> decl_QNetworkRequest ("QtNetwork", "QNetworkRequest",
  methods_QNetworkRequest (),
  "@qt\n@brief Binding of QNetworkRequest");


GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkRequest> &qtdecl_QNetworkRequest () { return decl_QNetworkRequest; }

}


//  Implementation of the enum wrapper class for QNetworkRequest::Attribute
namespace qt_gsi
{

static gsi::Enum<QNetworkRequest::Attribute> decl_QNetworkRequest_Attribute_Enum ("QtNetwork", "QNetworkRequest_Attribute",
    gsi::enum_const ("HttpStatusCodeAttribute", QNetworkRequest::HttpStatusCodeAttribute, "@brief Enum constant QNetworkRequest::HttpStatusCodeAttribute") +
    gsi::enum_const ("HttpReasonPhraseAttribute", QNetworkRequest::HttpReasonPhraseAttribute, "@brief Enum constant QNetworkRequest::HttpReasonPhraseAttribute") +
    gsi::enum_const ("RedirectionTargetAttribute", QNetworkRequest::RedirectionTargetAttribute, "@brief Enum constant QNetworkRequest::RedirectionTargetAttribute") +
    gsi::enum_const ("ConnectionEncryptedAttribute", QNetworkRequest::ConnectionEncryptedAttribute, "@brief Enum constant QNetworkRequest::ConnectionEncryptedAttribute") +
    gsi::enum_const ("CacheLoadControlAttribute", QNetworkRequest::CacheLoadControlAttribute, "@brief Enum constant QNetworkRequest::CacheLoadControlAttribute") +
    gsi::enum_const ("CacheSaveControlAttribute", QNetworkRequest::CacheSaveControlAttribute, "@brief Enum constant QNetworkRequest::CacheSaveControlAttribute") +
    gsi::enum_const ("SourceIsFromCacheAttribute", QNetworkRequest::SourceIsFromCacheAttribute, "@brief Enum constant QNetworkRequest::SourceIsFromCacheAttribute") +
    gsi::enum_const ("DoNotBufferUploadDataAttribute", QNetworkRequest::DoNotBufferUploadDataAttribute, "@brief Enum constant QNetworkRequest::DoNotBufferUploadDataAttribute") +
    gsi::enum_const ("HttpPipeliningAllowedAttribute", QNetworkRequest::HttpPipeliningAllowedAttribute, "@brief Enum constant QNetworkRequest::HttpPipeliningAllowedAttribute") +
    gsi::enum_const ("HttpPipeliningWasUsedAttribute", QNetworkRequest::HttpPipeliningWasUsedAttribute, "@brief Enum constant QNetworkRequest::HttpPipeliningWasUsedAttribute") +
    gsi::enum_const ("CustomVerbAttribute", QNetworkRequest::CustomVerbAttribute, "@brief Enum constant QNetworkRequest::CustomVerbAttribute") +
    gsi::enum_const ("CookieLoadControlAttribute", QNetworkRequest::CookieLoadControlAttribute, "@brief Enum constant QNetworkRequest::CookieLoadControlAttribute") +
    gsi::enum_const ("AuthenticationReuseAttribute", QNetworkRequest::AuthenticationReuseAttribute, "@brief Enum constant QNetworkRequest::AuthenticationReuseAttribute") +
    gsi::enum_const ("CookieSaveControlAttribute", QNetworkRequest::CookieSaveControlAttribute, "@brief Enum constant QNetworkRequest::CookieSaveControlAttribute") +
    gsi::enum_const ("MaximumDownloadBufferSizeAttribute", QNetworkRequest::MaximumDownloadBufferSizeAttribute, "@brief Enum constant QNetworkRequest::MaximumDownloadBufferSizeAttribute") +
    gsi::enum_const ("DownloadBufferAttribute", QNetworkRequest::DownloadBufferAttribute, "@brief Enum constant QNetworkRequest::DownloadBufferAttribute") +
    gsi::enum_const ("SynchronousRequestAttribute", QNetworkRequest::SynchronousRequestAttribute, "@brief Enum constant QNetworkRequest::SynchronousRequestAttribute") +
    gsi::enum_const ("BackgroundRequestAttribute", QNetworkRequest::BackgroundRequestAttribute, "@brief Enum constant QNetworkRequest::BackgroundRequestAttribute") +
    gsi::enum_const ("SpdyAllowedAttribute", QNetworkRequest::SpdyAllowedAttribute, "@brief Enum constant QNetworkRequest::SpdyAllowedAttribute") +
    gsi::enum_const ("SpdyWasUsedAttribute", QNetworkRequest::SpdyWasUsedAttribute, "@brief Enum constant QNetworkRequest::SpdyWasUsedAttribute") +
    gsi::enum_const ("EmitAllUploadProgressSignalsAttribute", QNetworkRequest::EmitAllUploadProgressSignalsAttribute, "@brief Enum constant QNetworkRequest::EmitAllUploadProgressSignalsAttribute") +
    gsi::enum_const ("User", QNetworkRequest::User, "@brief Enum constant QNetworkRequest::User") +
    gsi::enum_const ("UserMax", QNetworkRequest::UserMax, "@brief Enum constant QNetworkRequest::UserMax"),
  "@qt\n@brief This class represents the QNetworkRequest::Attribute enum");

static gsi::QFlagsClass<QNetworkRequest::Attribute > decl_QNetworkRequest_Attribute_Enums ("QtNetwork", "QNetworkRequest_QFlags_Attribute",
  "@qt\n@brief This class represents the QFlags<QNetworkRequest::Attribute> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QNetworkRequest> inject_QNetworkRequest_Attribute_Enum_in_parent (decl_QNetworkRequest_Attribute_Enum.defs ());
static gsi::ClassExt<QNetworkRequest> decl_QNetworkRequest_Attribute_Enum_as_child (decl_QNetworkRequest_Attribute_Enum, "Attribute");
static gsi::ClassExt<QNetworkRequest> decl_QNetworkRequest_Attribute_Enums_as_child (decl_QNetworkRequest_Attribute_Enums, "QFlags_Attribute");

}


//  Implementation of the enum wrapper class for QNetworkRequest::KnownHeaders
namespace qt_gsi
{

static gsi::Enum<QNetworkRequest::KnownHeaders> decl_QNetworkRequest_KnownHeaders_Enum ("QtNetwork", "QNetworkRequest_KnownHeaders",
    gsi::enum_const ("ContentTypeHeader", QNetworkRequest::ContentTypeHeader, "@brief Enum constant QNetworkRequest::ContentTypeHeader") +
    gsi::enum_const ("ContentLengthHeader", QNetworkRequest::ContentLengthHeader, "@brief Enum constant QNetworkRequest::ContentLengthHeader") +
    gsi::enum_const ("LocationHeader", QNetworkRequest::LocationHeader, "@brief Enum constant QNetworkRequest::LocationHeader") +
    gsi::enum_const ("LastModifiedHeader", QNetworkRequest::LastModifiedHeader, "@brief Enum constant QNetworkRequest::LastModifiedHeader") +
    gsi::enum_const ("CookieHeader", QNetworkRequest::CookieHeader, "@brief Enum constant QNetworkRequest::CookieHeader") +
    gsi::enum_const ("SetCookieHeader", QNetworkRequest::SetCookieHeader, "@brief Enum constant QNetworkRequest::SetCookieHeader") +
    gsi::enum_const ("ContentDispositionHeader", QNetworkRequest::ContentDispositionHeader, "@brief Enum constant QNetworkRequest::ContentDispositionHeader") +
    gsi::enum_const ("UserAgentHeader", QNetworkRequest::UserAgentHeader, "@brief Enum constant QNetworkRequest::UserAgentHeader") +
    gsi::enum_const ("ServerHeader", QNetworkRequest::ServerHeader, "@brief Enum constant QNetworkRequest::ServerHeader"),
  "@qt\n@brief This class represents the QNetworkRequest::KnownHeaders enum");

static gsi::QFlagsClass<QNetworkRequest::KnownHeaders > decl_QNetworkRequest_KnownHeaders_Enums ("QtNetwork", "QNetworkRequest_QFlags_KnownHeaders",
  "@qt\n@brief This class represents the QFlags<QNetworkRequest::KnownHeaders> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QNetworkRequest> inject_QNetworkRequest_KnownHeaders_Enum_in_parent (decl_QNetworkRequest_KnownHeaders_Enum.defs ());
static gsi::ClassExt<QNetworkRequest> decl_QNetworkRequest_KnownHeaders_Enum_as_child (decl_QNetworkRequest_KnownHeaders_Enum, "KnownHeaders");
static gsi::ClassExt<QNetworkRequest> decl_QNetworkRequest_KnownHeaders_Enums_as_child (decl_QNetworkRequest_KnownHeaders_Enums, "QFlags_KnownHeaders");

}


//  Implementation of the enum wrapper class for QNetworkRequest::Priority
namespace qt_gsi
{

static gsi::Enum<QNetworkRequest::Priority> decl_QNetworkRequest_Priority_Enum ("QtNetwork", "QNetworkRequest_Priority",
    gsi::enum_const ("HighPriority", QNetworkRequest::HighPriority, "@brief Enum constant QNetworkRequest::HighPriority") +
    gsi::enum_const ("NormalPriority", QNetworkRequest::NormalPriority, "@brief Enum constant QNetworkRequest::NormalPriority") +
    gsi::enum_const ("LowPriority", QNetworkRequest::LowPriority, "@brief Enum constant QNetworkRequest::LowPriority"),
  "@qt\n@brief This class represents the QNetworkRequest::Priority enum");

static gsi::QFlagsClass<QNetworkRequest::Priority > decl_QNetworkRequest_Priority_Enums ("QtNetwork", "QNetworkRequest_QFlags_Priority",
  "@qt\n@brief This class represents the QFlags<QNetworkRequest::Priority> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QNetworkRequest> inject_QNetworkRequest_Priority_Enum_in_parent (decl_QNetworkRequest_Priority_Enum.defs ());
static gsi::ClassExt<QNetworkRequest> decl_QNetworkRequest_Priority_Enum_as_child (decl_QNetworkRequest_Priority_Enum, "Priority");
static gsi::ClassExt<QNetworkRequest> decl_QNetworkRequest_Priority_Enums_as_child (decl_QNetworkRequest_Priority_Enums, "QFlags_Priority");

}

