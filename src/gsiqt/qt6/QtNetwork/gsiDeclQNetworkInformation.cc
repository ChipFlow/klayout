
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
*  @file gsiDeclQNetworkInformation.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QNetworkInformation>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QNetworkInformation

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QNetworkInformation::staticMetaObject);
}


// QString QNetworkInformation::backendName()


static void _init_f_backendName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_backendName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QNetworkInformation *)cls)->backendName ());
}


// bool QNetworkInformation::isBehindCaptivePortal()


static void _init_f_isBehindCaptivePortal_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isBehindCaptivePortal_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QNetworkInformation *)cls)->isBehindCaptivePortal ());
}


// void QNetworkInformation::isBehindCaptivePortalChanged(bool state)


static void _init_f_isBehindCaptivePortalChanged_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("state");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_isBehindCaptivePortalChanged_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkInformation *)cls)->isBehindCaptivePortalChanged (arg1);
}


// QNetworkInformation::Reachability QNetworkInformation::reachability()


static void _init_f_reachability_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QNetworkInformation::Reachability > ();
}

static void _call_f_reachability_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNetworkInformation::Reachability > ((QNetworkInformation::Reachability)((QNetworkInformation *)cls)->reachability ());
}


// void QNetworkInformation::reachabilityChanged(QNetworkInformation::Reachability newReachability)


static void _init_f_reachabilityChanged_3770 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newReachability");
  decl->add_arg<QNetworkInformation::Reachability > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_reachabilityChanged_3770 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QNetworkInformation::Reachability arg1 = gsi::arg_reader<QNetworkInformation::Reachability >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkInformation *)cls)->reachabilityChanged (arg1);
}


// bool QNetworkInformation::supports(QFlags<QNetworkInformation::Feature> features)


static void _init_f_supports_c3949 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("features");
  decl->add_arg<QFlags<QNetworkInformation::Feature> > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_supports_c3949 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QNetworkInformation::Feature> arg1 = gsi::arg_reader<QFlags<QNetworkInformation::Feature> >() (args, heap);
  ret.write<bool > ((bool)((QNetworkInformation *)cls)->supports (arg1));
}


// static QStringList QNetworkInformation::availableBackends()


static void _init_f_availableBackends_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_availableBackends_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)QNetworkInformation::availableBackends ());
}


// static QNetworkInformation *QNetworkInformation::instance()


static void _init_f_instance_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QNetworkInformation * > ();
}

static void _call_f_instance_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNetworkInformation * > ((QNetworkInformation *)QNetworkInformation::instance ());
}


// static bool QNetworkInformation::load(QStringView backend)


static void _init_f_load_1559 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("backend");
  decl->add_arg<QStringView > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_load_1559 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QStringView arg1 = gsi::arg_reader<QStringView >() (args, heap);
  ret.write<bool > ((bool)QNetworkInformation::load (arg1));
}


// static bool QNetworkInformation::load(QFlags<QNetworkInformation::Feature> features)


static void _init_f_load_3949 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("features");
  decl->add_arg<QFlags<QNetworkInformation::Feature> > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_load_3949 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QNetworkInformation::Feature> arg1 = gsi::arg_reader<QFlags<QNetworkInformation::Feature> >() (args, heap);
  ret.write<bool > ((bool)QNetworkInformation::load (arg1));
}


// static QString QNetworkInformation::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QNetworkInformation::tr (arg1, arg2, arg3));
}



namespace gsi
{

static gsi::Methods methods_QNetworkInformation () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("backendName", "@brief Method QString QNetworkInformation::backendName()\n", true, &_init_f_backendName_c0, &_call_f_backendName_c0);
  methods += new qt_gsi::GenericMethod ("isBehindCaptivePortal?", "@brief Method bool QNetworkInformation::isBehindCaptivePortal()\n", true, &_init_f_isBehindCaptivePortal_c0, &_call_f_isBehindCaptivePortal_c0);
  methods += new qt_gsi::GenericMethod ("isBehindCaptivePortalChanged?", "@brief Method void QNetworkInformation::isBehindCaptivePortalChanged(bool state)\n", false, &_init_f_isBehindCaptivePortalChanged_864, &_call_f_isBehindCaptivePortalChanged_864);
  methods += new qt_gsi::GenericMethod ("reachability", "@brief Method QNetworkInformation::Reachability QNetworkInformation::reachability()\n", true, &_init_f_reachability_c0, &_call_f_reachability_c0);
  methods += new qt_gsi::GenericMethod ("reachabilityChanged", "@brief Method void QNetworkInformation::reachabilityChanged(QNetworkInformation::Reachability newReachability)\n", false, &_init_f_reachabilityChanged_3770, &_call_f_reachabilityChanged_3770);
  methods += new qt_gsi::GenericMethod ("supports", "@brief Method bool QNetworkInformation::supports(QFlags<QNetworkInformation::Feature> features)\n", true, &_init_f_supports_c3949, &_call_f_supports_c3949);
  methods += new qt_gsi::GenericStaticMethod ("availableBackends", "@brief Static method QStringList QNetworkInformation::availableBackends()\nThis method is static and can be called without an instance.", &_init_f_availableBackends_0, &_call_f_availableBackends_0);
  methods += new qt_gsi::GenericStaticMethod ("instance", "@brief Static method QNetworkInformation *QNetworkInformation::instance()\nThis method is static and can be called without an instance.", &_init_f_instance_0, &_call_f_instance_0);
  methods += new qt_gsi::GenericStaticMethod ("load", "@brief Static method bool QNetworkInformation::load(QStringView backend)\nThis method is static and can be called without an instance.", &_init_f_load_1559, &_call_f_load_1559);
  methods += new qt_gsi::GenericStaticMethod ("load", "@brief Static method bool QNetworkInformation::load(QFlags<QNetworkInformation::Feature> features)\nThis method is static and can be called without an instance.", &_init_f_load_3949, &_call_f_load_3949);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QNetworkInformation::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QNetworkInformation> decl_QNetworkInformation (qtdecl_QObject (), "QtNetwork", "QNetworkInformation",
  methods_QNetworkInformation (),
  "@qt\n@brief Binding of QNetworkInformation");


GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkInformation> &qtdecl_QNetworkInformation () { return decl_QNetworkInformation; }

}


//  Implementation of the enum wrapper class for QNetworkInformation::Feature
namespace qt_gsi
{

static gsi::Enum<QNetworkInformation::Feature> decl_QNetworkInformation_Feature_Enum ("QtNetwork", "QNetworkInformation_Feature",
    gsi::enum_const ("Reachability", QNetworkInformation::Feature::Reachability, "@brief Enum constant QNetworkInformation::Feature::Reachability") +
    gsi::enum_const ("CaptivePortal", QNetworkInformation::Feature::CaptivePortal, "@brief Enum constant QNetworkInformation::Feature::CaptivePortal"),
  "@qt\n@brief This class represents the QNetworkInformation::Feature enum");

static gsi::QFlagsClass<QNetworkInformation::Feature > decl_QNetworkInformation_Feature_Enums ("QtNetwork", "QNetworkInformation_QFlags_Feature",
  "@qt\n@brief This class represents the QFlags<QNetworkInformation::Feature> flag set");

static gsi::ClassExt<QNetworkInformation> decl_QNetworkInformation_Feature_Enum_as_child (decl_QNetworkInformation_Feature_Enum, "Feature");
static gsi::ClassExt<QNetworkInformation> decl_QNetworkInformation_Feature_Enums_as_child (decl_QNetworkInformation_Feature_Enums, "QFlags_Feature");

}

