
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
*  @file gsiDeclQStringDecoder.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStringDecoder>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStringDecoder
  static QString decode (QStringDecoder *decoder, const QByteArray &ba)
  {
    return decoder->decode (ba); 
  }

//  Constructor QStringDecoder::QStringDecoder(QStringConverter::Encoding encoding, QFlags<QStringConverterBase::Flag> flags)


static void _init_ctor_QStringDecoder_6584 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("encoding");
  decl->add_arg<const qt_gsi::Converter<QStringConverter::Encoding>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("flags", true, "QStringConverterBase::Flag::Default");
  decl->add_arg<QFlags<QStringConverterBase::Flag> > (argspec_1);
  decl->set_return_new<QStringDecoder> ();
}

static void _call_ctor_QStringDecoder_6584 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QStringConverter::Encoding>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QStringConverter::Encoding>::target_type & >() (args, heap);
  QFlags<QStringConverterBase::Flag> arg2 = args ? gsi::arg_reader<QFlags<QStringConverterBase::Flag> >() (args, heap) : gsi::arg_maker<QFlags<QStringConverterBase::Flag> >() (QStringConverterBase::Flag::Default, heap);
  ret.write<QStringDecoder *> (new QStringDecoder (qt_gsi::QtToCppAdaptor<QStringConverter::Encoding>(arg1).cref(), arg2));
}


//  Constructor QStringDecoder::QStringDecoder()


static void _init_ctor_QStringDecoder_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStringDecoder> ();
}

static void _call_ctor_QStringDecoder_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringDecoder *> (new QStringDecoder ());
}


//  Constructor QStringDecoder::QStringDecoder(const char *name, QFlags<QStringConverterBase::Flag> f)


static void _init_ctor_QStringDecoder_5292 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("f", true, "QStringConverterBase::Flag::Default");
  decl->add_arg<QFlags<QStringConverterBase::Flag> > (argspec_1);
  decl->set_return_new<QStringDecoder> ();
}

static void _call_ctor_QStringDecoder_5292 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  QFlags<QStringConverterBase::Flag> arg2 = args ? gsi::arg_reader<QFlags<QStringConverterBase::Flag> >() (args, heap) : gsi::arg_maker<QFlags<QStringConverterBase::Flag> >() (QStringConverterBase::Flag::Default, heap);
  ret.write<QStringDecoder *> (new QStringDecoder (arg1, arg2));
}


// qsizetype QStringDecoder::requiredSpace(qsizetype inputLength)


static void _init_f_requiredSpace_c1442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("inputLength");
  decl->add_arg<qsizetype > (argspec_0);
  decl->set_return<qsizetype > ();
}

static void _call_f_requiredSpace_c1442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  ret.write<qsizetype > ((qsizetype)((QStringDecoder *)cls)->requiredSpace (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStringDecoder () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStringDecoder::QStringDecoder(QStringConverter::Encoding encoding, QFlags<QStringConverterBase::Flag> flags)\nThis method creates an object of class QStringDecoder.", &_init_ctor_QStringDecoder_6584, &_call_ctor_QStringDecoder_6584);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStringDecoder::QStringDecoder()\nThis method creates an object of class QStringDecoder.", &_init_ctor_QStringDecoder_0, &_call_ctor_QStringDecoder_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStringDecoder::QStringDecoder(const char *name, QFlags<QStringConverterBase::Flag> f)\nThis method creates an object of class QStringDecoder.", &_init_ctor_QStringDecoder_5292, &_call_ctor_QStringDecoder_5292);
  methods += new qt_gsi::GenericMethod ("requiredSpace", "@brief Method qsizetype QStringDecoder::requiredSpace(qsizetype inputLength)\n", true, &_init_f_requiredSpace_c1442, &_call_f_requiredSpace_c1442);
  return methods;
}

gsi::Class<QStringConverter> &qtdecl_QStringConverter ();

gsi::Class<QStringDecoder> decl_QStringDecoder (qtdecl_QStringConverter (), "QtCore", "QStringDecoder",
  gsi::method_ext("decode", &decode, gsi::arg ("ba"), "@brief Method QStringDecoder::EncodedData<QByteArrayView> QStringDecoder::decode(QByteArrayView ba)\n") +
  gsi::method_ext("()", &decode, gsi::arg ("ba"), "@brief Method QStringDecoder::EncodedData<QByteArrayView> QStringDecoder::decode(QByteArrayView ba)\n")
+
  methods_QStringDecoder (),
  "@qt\n@brief Binding of QStringDecoder");


GSI_QTCORE_PUBLIC gsi::Class<QStringDecoder> &qtdecl_QStringDecoder () { return decl_QStringDecoder; }

}

