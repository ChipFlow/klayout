
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
*  @file gsiDeclQImageWriter.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QImageWriter>
#include <QIODevice>
#include <QImage>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QImageWriter

//  Constructor QImageWriter::QImageWriter()


static void _init_ctor_QImageWriter_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QImageWriter> ();
}

static void _call_ctor_QImageWriter_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QImageWriter *> (new QImageWriter ());
}


//  Constructor QImageWriter::QImageWriter(QIODevice *device, const QByteArray &format)


static void _init_ctor_QImageWriter_3648 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format");
  decl->add_arg<const QByteArray & > (argspec_1);
  decl->set_return_new<QImageWriter> ();
}

static void _call_ctor_QImageWriter_3648 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = args.read<QIODevice * > (heap);
  const QByteArray &arg2 = args.read<const QByteArray & > (heap);
  ret.write<QImageWriter *> (new QImageWriter (arg1, arg2));
}


//  Constructor QImageWriter::QImageWriter(const QString &fileName, const QByteArray &format)


static void _init_ctor_QImageWriter_4226 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format", true, "QByteArray()");
  decl->add_arg<const QByteArray & > (argspec_1);
  decl->set_return_new<QImageWriter> ();
}

static void _call_ctor_QImageWriter_4226 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QByteArray &arg2 = args ? args.read<const QByteArray & > (heap) : (const QByteArray &)(QByteArray());
  ret.write<QImageWriter *> (new QImageWriter (arg1, arg2));
}


// bool QImageWriter::canWrite()


static void _init_f_canWrite_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_canWrite_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QImageWriter *)cls)->canWrite ());
}


// int QImageWriter::compression()


static void _init_f_compression_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_compression_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QImageWriter *)cls)->compression ());
}


// QString QImageWriter::description()


static void _init_f_description_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_description_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QImageWriter *)cls)->description ());
}


// QIODevice *QImageWriter::device()


static void _init_f_device_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QIODevice * > ();
}

static void _call_f_device_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIODevice * > ((QIODevice *)((QImageWriter *)cls)->device ());
}


// QImageWriter::ImageWriterError QImageWriter::error()


static void _init_f_error_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QImageWriter::ImageWriterError>::target_type > ();
}

static void _call_f_error_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QImageWriter::ImageWriterError>::target_type > ((qt_gsi::Converter<QImageWriter::ImageWriterError>::target_type)qt_gsi::CppToQtAdaptor<QImageWriter::ImageWriterError>(((QImageWriter *)cls)->error ()));
}


// QString QImageWriter::errorString()


static void _init_f_errorString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_errorString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QImageWriter *)cls)->errorString ());
}


// QString QImageWriter::fileName()


static void _init_f_fileName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_fileName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QImageWriter *)cls)->fileName ());
}


// QByteArray QImageWriter::format()


static void _init_f_format_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_format_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QImageWriter *)cls)->format ());
}


// float QImageWriter::gamma()


static void _init_f_gamma_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<float > ();
}

static void _call_f_gamma_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<float > ((float)((QImageWriter *)cls)->gamma ());
}


// bool QImageWriter::optimizedWrite()


static void _init_f_optimizedWrite_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_optimizedWrite_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QImageWriter *)cls)->optimizedWrite ());
}


// bool QImageWriter::progressiveScanWrite()


static void _init_f_progressiveScanWrite_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_progressiveScanWrite_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QImageWriter *)cls)->progressiveScanWrite ());
}


// int QImageWriter::quality()


static void _init_f_quality_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_quality_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QImageWriter *)cls)->quality ());
}


// void QImageWriter::setCompression(int compression)


static void _init_f_setCompression_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("compression");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCompression_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageWriter *)cls)->setCompression (arg1);
}


// void QImageWriter::setDescription(const QString &description)


static void _init_f_setDescription_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("description");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDescription_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageWriter *)cls)->setDescription (arg1);
}


// void QImageWriter::setDevice(QIODevice *device)


static void _init_f_setDevice_1447 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDevice_1447 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = args.read<QIODevice * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageWriter *)cls)->setDevice (arg1);
}


// void QImageWriter::setFileName(const QString &fileName)


static void _init_f_setFileName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFileName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageWriter *)cls)->setFileName (arg1);
}


// void QImageWriter::setFormat(const QByteArray &format)


static void _init_f_setFormat_2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFormat_2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageWriter *)cls)->setFormat (arg1);
}


// void QImageWriter::setGamma(float gamma)


static void _init_f_setGamma_970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("gamma");
  decl->add_arg<float > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setGamma_970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = args.read<float > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageWriter *)cls)->setGamma (arg1);
}


// void QImageWriter::setOptimizedWrite(bool optimize)


static void _init_f_setOptimizedWrite_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("optimize");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setOptimizedWrite_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageWriter *)cls)->setOptimizedWrite (arg1);
}


// void QImageWriter::setProgressiveScanWrite(bool progressive)


static void _init_f_setProgressiveScanWrite_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("progressive");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setProgressiveScanWrite_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageWriter *)cls)->setProgressiveScanWrite (arg1);
}


// void QImageWriter::setQuality(int quality)


static void _init_f_setQuality_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("quality");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setQuality_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageWriter *)cls)->setQuality (arg1);
}


// void QImageWriter::setSubType(const QByteArray &type)


static void _init_f_setSubType_2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSubType_2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageWriter *)cls)->setSubType (arg1);
}


// void QImageWriter::setText(const QString &key, const QString &text)


static void _init_f_setText_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("text");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setText_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageWriter *)cls)->setText (arg1, arg2);
}


// void QImageWriter::setTransformation(QFlags<QImageIOHandler::Transformation> orientation)


static void _init_f_setTransformation_4161 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("orientation");
  decl->add_arg<QFlags<QImageIOHandler::Transformation> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTransformation_4161 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QImageIOHandler::Transformation> arg1 = args.read<QFlags<QImageIOHandler::Transformation> > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageWriter *)cls)->setTransformation (arg1);
}


// QByteArray QImageWriter::subType()


static void _init_f_subType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_subType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QImageWriter *)cls)->subType ());
}


// QList<QByteArray> QImageWriter::supportedSubTypes()


static void _init_f_supportedSubTypes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_supportedSubTypes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)((QImageWriter *)cls)->supportedSubTypes ());
}


// bool QImageWriter::supportsOption(QImageIOHandler::ImageOption option)


static void _init_f_supportsOption_c3086 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const qt_gsi::Converter<QImageIOHandler::ImageOption>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_supportsOption_c3086 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QImageIOHandler::ImageOption>::target_type & arg1 = args.read<const qt_gsi::Converter<QImageIOHandler::ImageOption>::target_type & > (heap);
  ret.write<bool > ((bool)((QImageWriter *)cls)->supportsOption (qt_gsi::QtToCppAdaptor<QImageIOHandler::ImageOption>(arg1).cref()));
}


// QFlags<QImageIOHandler::Transformation> QImageWriter::transformation()


static void _init_f_transformation_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QImageIOHandler::Transformation> > ();
}

static void _call_f_transformation_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QImageIOHandler::Transformation> > ((QFlags<QImageIOHandler::Transformation>)((QImageWriter *)cls)->transformation ());
}


// bool QImageWriter::write(const QImage &image)


static void _init_f_write_1877 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("image");
  decl->add_arg<const QImage & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_write_1877 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImage &arg1 = args.read<const QImage & > (heap);
  ret.write<bool > ((bool)((QImageWriter *)cls)->write (arg1));
}


// static QList<QByteArray> QImageWriter::supportedImageFormats()


static void _init_f_supportedImageFormats_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_supportedImageFormats_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)QImageWriter::supportedImageFormats ());
}


// static QList<QByteArray> QImageWriter::supportedMimeTypes()


static void _init_f_supportedMimeTypes_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_supportedMimeTypes_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)QImageWriter::supportedMimeTypes ());
}


// static QString QImageWriter::tr(const char *sourceText, const char *disambiguation, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sourceText");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("disambiguation", true, "0");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(0);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QImageWriter::tr (arg1, arg2, arg3));
}


// static QString QImageWriter::trUtf8(const char *sourceText, const char *disambiguation, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sourceText");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("disambiguation", true, "0");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(0);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QImageWriter::trUtf8 (arg1, arg2, arg3));
}



namespace gsi
{

static gsi::Methods methods_QImageWriter () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QImageWriter::QImageWriter()\nThis method creates an object of class QImageWriter.", &_init_ctor_QImageWriter_0, &_call_ctor_QImageWriter_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QImageWriter::QImageWriter(QIODevice *device, const QByteArray &format)\nThis method creates an object of class QImageWriter.", &_init_ctor_QImageWriter_3648, &_call_ctor_QImageWriter_3648);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QImageWriter::QImageWriter(const QString &fileName, const QByteArray &format)\nThis method creates an object of class QImageWriter.", &_init_ctor_QImageWriter_4226, &_call_ctor_QImageWriter_4226);
  methods += new qt_gsi::GenericMethod ("canWrite", "@brief Method bool QImageWriter::canWrite()\n", true, &_init_f_canWrite_c0, &_call_f_canWrite_c0);
  methods += new qt_gsi::GenericMethod (":compression", "@brief Method int QImageWriter::compression()\n", true, &_init_f_compression_c0, &_call_f_compression_c0);
  methods += new qt_gsi::GenericMethod (":description", "@brief Method QString QImageWriter::description()\n", true, &_init_f_description_c0, &_call_f_description_c0);
  methods += new qt_gsi::GenericMethod (":device", "@brief Method QIODevice *QImageWriter::device()\n", true, &_init_f_device_c0, &_call_f_device_c0);
  methods += new qt_gsi::GenericMethod ("error", "@brief Method QImageWriter::ImageWriterError QImageWriter::error()\n", true, &_init_f_error_c0, &_call_f_error_c0);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Method QString QImageWriter::errorString()\n", true, &_init_f_errorString_c0, &_call_f_errorString_c0);
  methods += new qt_gsi::GenericMethod (":fileName", "@brief Method QString QImageWriter::fileName()\n", true, &_init_f_fileName_c0, &_call_f_fileName_c0);
  methods += new qt_gsi::GenericMethod (":format", "@brief Method QByteArray QImageWriter::format()\n", true, &_init_f_format_c0, &_call_f_format_c0);
  methods += new qt_gsi::GenericMethod (":gamma", "@brief Method float QImageWriter::gamma()\n", true, &_init_f_gamma_c0, &_call_f_gamma_c0);
  methods += new qt_gsi::GenericMethod (":optimizedWrite", "@brief Method bool QImageWriter::optimizedWrite()\n", true, &_init_f_optimizedWrite_c0, &_call_f_optimizedWrite_c0);
  methods += new qt_gsi::GenericMethod (":progressiveScanWrite", "@brief Method bool QImageWriter::progressiveScanWrite()\n", true, &_init_f_progressiveScanWrite_c0, &_call_f_progressiveScanWrite_c0);
  methods += new qt_gsi::GenericMethod (":quality", "@brief Method int QImageWriter::quality()\n", true, &_init_f_quality_c0, &_call_f_quality_c0);
  methods += new qt_gsi::GenericMethod ("setCompression|compression=", "@brief Method void QImageWriter::setCompression(int compression)\n", false, &_init_f_setCompression_767, &_call_f_setCompression_767);
  methods += new qt_gsi::GenericMethod ("setDescription|description=", "@brief Method void QImageWriter::setDescription(const QString &description)\n", false, &_init_f_setDescription_2025, &_call_f_setDescription_2025);
  methods += new qt_gsi::GenericMethod ("setDevice|device=", "@brief Method void QImageWriter::setDevice(QIODevice *device)\n", false, &_init_f_setDevice_1447, &_call_f_setDevice_1447);
  methods += new qt_gsi::GenericMethod ("setFileName|fileName=", "@brief Method void QImageWriter::setFileName(const QString &fileName)\n", false, &_init_f_setFileName_2025, &_call_f_setFileName_2025);
  methods += new qt_gsi::GenericMethod ("setFormat|format=", "@brief Method void QImageWriter::setFormat(const QByteArray &format)\n", false, &_init_f_setFormat_2309, &_call_f_setFormat_2309);
  methods += new qt_gsi::GenericMethod ("setGamma|gamma=", "@brief Method void QImageWriter::setGamma(float gamma)\n", false, &_init_f_setGamma_970, &_call_f_setGamma_970);
  methods += new qt_gsi::GenericMethod ("setOptimizedWrite|optimizedWrite=", "@brief Method void QImageWriter::setOptimizedWrite(bool optimize)\n", false, &_init_f_setOptimizedWrite_864, &_call_f_setOptimizedWrite_864);
  methods += new qt_gsi::GenericMethod ("setProgressiveScanWrite|progressiveScanWrite=", "@brief Method void QImageWriter::setProgressiveScanWrite(bool progressive)\n", false, &_init_f_setProgressiveScanWrite_864, &_call_f_setProgressiveScanWrite_864);
  methods += new qt_gsi::GenericMethod ("setQuality|quality=", "@brief Method void QImageWriter::setQuality(int quality)\n", false, &_init_f_setQuality_767, &_call_f_setQuality_767);
  methods += new qt_gsi::GenericMethod ("setSubType|subType=", "@brief Method void QImageWriter::setSubType(const QByteArray &type)\n", false, &_init_f_setSubType_2309, &_call_f_setSubType_2309);
  methods += new qt_gsi::GenericMethod ("setText", "@brief Method void QImageWriter::setText(const QString &key, const QString &text)\n", false, &_init_f_setText_3942, &_call_f_setText_3942);
  methods += new qt_gsi::GenericMethod ("setTransformation|transformation=", "@brief Method void QImageWriter::setTransformation(QFlags<QImageIOHandler::Transformation> orientation)\n", false, &_init_f_setTransformation_4161, &_call_f_setTransformation_4161);
  methods += new qt_gsi::GenericMethod (":subType", "@brief Method QByteArray QImageWriter::subType()\n", true, &_init_f_subType_c0, &_call_f_subType_c0);
  methods += new qt_gsi::GenericMethod ("supportedSubTypes", "@brief Method QList<QByteArray> QImageWriter::supportedSubTypes()\n", true, &_init_f_supportedSubTypes_c0, &_call_f_supportedSubTypes_c0);
  methods += new qt_gsi::GenericMethod ("supportsOption", "@brief Method bool QImageWriter::supportsOption(QImageIOHandler::ImageOption option)\n", true, &_init_f_supportsOption_c3086, &_call_f_supportsOption_c3086);
  methods += new qt_gsi::GenericMethod (":transformation", "@brief Method QFlags<QImageIOHandler::Transformation> QImageWriter::transformation()\n", true, &_init_f_transformation_c0, &_call_f_transformation_c0);
  methods += new qt_gsi::GenericMethod ("write", "@brief Method bool QImageWriter::write(const QImage &image)\n", false, &_init_f_write_1877, &_call_f_write_1877);
  methods += new qt_gsi::GenericStaticMethod ("supportedImageFormats", "@brief Static method QList<QByteArray> QImageWriter::supportedImageFormats()\nThis method is static and can be called without an instance.", &_init_f_supportedImageFormats_0, &_call_f_supportedImageFormats_0);
  methods += new qt_gsi::GenericStaticMethod ("supportedMimeTypes", "@brief Static method QList<QByteArray> QImageWriter::supportedMimeTypes()\nThis method is static and can be called without an instance.", &_init_f_supportedMimeTypes_0, &_call_f_supportedMimeTypes_0);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QImageWriter::tr(const char *sourceText, const char *disambiguation, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QImageWriter::trUtf8(const char *sourceText, const char *disambiguation, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QImageWriter> decl_QImageWriter ("QtGui", "QImageWriter",
  methods_QImageWriter (),
  "@qt\n@brief Binding of QImageWriter");


GSI_QTGUI_PUBLIC gsi::Class<QImageWriter> &qtdecl_QImageWriter () { return decl_QImageWriter; }

}


//  Implementation of the enum wrapper class for QImageWriter::ImageWriterError
namespace qt_gsi
{

static gsi::Enum<QImageWriter::ImageWriterError> decl_QImageWriter_ImageWriterError_Enum ("QtGui", "QImageWriter_ImageWriterError",
    gsi::enum_const ("UnknownError", QImageWriter::UnknownError, "@brief Enum constant QImageWriter::UnknownError") +
    gsi::enum_const ("DeviceError", QImageWriter::DeviceError, "@brief Enum constant QImageWriter::DeviceError") +
    gsi::enum_const ("UnsupportedFormatError", QImageWriter::UnsupportedFormatError, "@brief Enum constant QImageWriter::UnsupportedFormatError"),
  "@qt\n@brief This class represents the QImageWriter::ImageWriterError enum");

static gsi::QFlagsClass<QImageWriter::ImageWriterError > decl_QImageWriter_ImageWriterError_Enums ("QtGui", "QImageWriter_QFlags_ImageWriterError",
  "@qt\n@brief This class represents the QFlags<QImageWriter::ImageWriterError> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QImageWriter> inject_QImageWriter_ImageWriterError_Enum_in_parent (decl_QImageWriter_ImageWriterError_Enum.defs ());
static gsi::ClassExt<QImageWriter> decl_QImageWriter_ImageWriterError_Enum_as_child (decl_QImageWriter_ImageWriterError_Enum, "ImageWriterError");
static gsi::ClassExt<QImageWriter> decl_QImageWriter_ImageWriterError_Enums_as_child (decl_QImageWriter_ImageWriterError_Enums, "QFlags_ImageWriterError");

}

