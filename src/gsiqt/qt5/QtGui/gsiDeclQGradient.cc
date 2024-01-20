
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
*  @file gsiDeclQGradient.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGradient>
#include <QColor>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QGradient

//  Constructor QGradient::QGradient()


static void _init_ctor_QGradient_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QGradient> ();
}

static void _call_ctor_QGradient_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QGradient *> (new QGradient ());
}


//  Constructor QGradient::QGradient(QGradient::Preset)


static void _init_ctor_QGradient_2074 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QGradient::Preset>::target_type & > (argspec_0);
  decl->set_return_new<QGradient> ();
}

static void _call_ctor_QGradient_2074 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QGradient::Preset>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QGradient::Preset>::target_type & >() (args, heap);
  ret.write<QGradient *> (new QGradient (qt_gsi::QtToCppAdaptor<QGradient::Preset>(arg1).cref()));
}


// QGradient::CoordinateMode QGradient::coordinateMode()


static void _init_f_coordinateMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QGradient::CoordinateMode>::target_type > ();
}

static void _call_f_coordinateMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QGradient::CoordinateMode>::target_type > ((qt_gsi::Converter<QGradient::CoordinateMode>::target_type)qt_gsi::CppToQtAdaptor<QGradient::CoordinateMode>(((QGradient *)cls)->coordinateMode ()));
}


// QGradient::InterpolationMode QGradient::interpolationMode()


static void _init_f_interpolationMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QGradient::InterpolationMode>::target_type > ();
}

static void _call_f_interpolationMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QGradient::InterpolationMode>::target_type > ((qt_gsi::Converter<QGradient::InterpolationMode>::target_type)qt_gsi::CppToQtAdaptor<QGradient::InterpolationMode>(((QGradient *)cls)->interpolationMode ()));
}


// bool QGradient::operator!=(const QGradient &other)


static void _init_f_operator_excl__eq__c2208 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QGradient & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2208 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QGradient &arg1 = gsi::arg_reader<const QGradient & >() (args, heap);
  ret.write<bool > ((bool)((QGradient *)cls)->operator!= (arg1));
}


// bool QGradient::operator==(const QGradient &gradient)


static void _init_f_operator_eq__eq__c2208 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("gradient");
  decl->add_arg<const QGradient & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2208 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QGradient &arg1 = gsi::arg_reader<const QGradient & >() (args, heap);
  ret.write<bool > ((bool)((QGradient *)cls)->operator== (arg1));
}


// void QGradient::setColorAt(double pos, const QColor &color)


static void _init_f_setColorAt_2868 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("color");
  decl->add_arg<const QColor & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setColorAt_2868 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  const QColor &arg2 = gsi::arg_reader<const QColor & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGradient *)cls)->setColorAt (arg1, arg2);
}


// void QGradient::setCoordinateMode(QGradient::CoordinateMode mode)


static void _init_f_setCoordinateMode_2868 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode");
  decl->add_arg<const qt_gsi::Converter<QGradient::CoordinateMode>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCoordinateMode_2868 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QGradient::CoordinateMode>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QGradient::CoordinateMode>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGradient *)cls)->setCoordinateMode (qt_gsi::QtToCppAdaptor<QGradient::CoordinateMode>(arg1).cref());
}


// void QGradient::setInterpolationMode(QGradient::InterpolationMode mode)


static void _init_f_setInterpolationMode_3220 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode");
  decl->add_arg<const qt_gsi::Converter<QGradient::InterpolationMode>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setInterpolationMode_3220 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QGradient::InterpolationMode>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QGradient::InterpolationMode>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGradient *)cls)->setInterpolationMode (qt_gsi::QtToCppAdaptor<QGradient::InterpolationMode>(arg1).cref());
}


// void QGradient::setSpread(QGradient::Spread spread)


static void _init_f_setSpread_2054 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("spread");
  decl->add_arg<const qt_gsi::Converter<QGradient::Spread>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSpread_2054 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QGradient::Spread>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QGradient::Spread>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGradient *)cls)->setSpread (qt_gsi::QtToCppAdaptor<QGradient::Spread>(arg1).cref());
}


// void QGradient::setStops(const QVector<QGradientStop> &stops)


static void _init_f_setStops_3460 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("stops");
  decl->add_arg<const QVector<QGradientStop> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setStops_3460 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector<QGradientStop> &arg1 = gsi::arg_reader<const QVector<QGradientStop> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGradient *)cls)->setStops (arg1);
}


// QGradient::Spread QGradient::spread()


static void _init_f_spread_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QGradient::Spread>::target_type > ();
}

static void _call_f_spread_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QGradient::Spread>::target_type > ((qt_gsi::Converter<QGradient::Spread>::target_type)qt_gsi::CppToQtAdaptor<QGradient::Spread>(((QGradient *)cls)->spread ()));
}


// QVector<QGradientStop> QGradient::stops()


static void _init_f_stops_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector<QGradientStop> > ();
}

static void _call_f_stops_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector<QGradientStop> > ((QVector<QGradientStop>)((QGradient *)cls)->stops ());
}


// QGradient::Type QGradient::type()


static void _init_f_type_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QGradient::Type>::target_type > ();
}

static void _call_f_type_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QGradient::Type>::target_type > ((qt_gsi::Converter<QGradient::Type>::target_type)qt_gsi::CppToQtAdaptor<QGradient::Type>(((QGradient *)cls)->type ()));
}



namespace gsi
{

static gsi::Methods methods_QGradient () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGradient::QGradient()\nThis method creates an object of class QGradient.", &_init_ctor_QGradient_0, &_call_ctor_QGradient_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGradient::QGradient(QGradient::Preset)\nThis method creates an object of class QGradient.", &_init_ctor_QGradient_2074, &_call_ctor_QGradient_2074);
  methods += new qt_gsi::GenericMethod (":coordinateMode", "@brief Method QGradient::CoordinateMode QGradient::coordinateMode()\n", true, &_init_f_coordinateMode_c0, &_call_f_coordinateMode_c0);
  methods += new qt_gsi::GenericMethod (":interpolationMode", "@brief Method QGradient::InterpolationMode QGradient::interpolationMode()\n", true, &_init_f_interpolationMode_c0, &_call_f_interpolationMode_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QGradient::operator!=(const QGradient &other)\n", true, &_init_f_operator_excl__eq__c2208, &_call_f_operator_excl__eq__c2208);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QGradient::operator==(const QGradient &gradient)\n", true, &_init_f_operator_eq__eq__c2208, &_call_f_operator_eq__eq__c2208);
  methods += new qt_gsi::GenericMethod ("setColorAt", "@brief Method void QGradient::setColorAt(double pos, const QColor &color)\n", false, &_init_f_setColorAt_2868, &_call_f_setColorAt_2868);
  methods += new qt_gsi::GenericMethod ("setCoordinateMode|coordinateMode=", "@brief Method void QGradient::setCoordinateMode(QGradient::CoordinateMode mode)\n", false, &_init_f_setCoordinateMode_2868, &_call_f_setCoordinateMode_2868);
  methods += new qt_gsi::GenericMethod ("setInterpolationMode|interpolationMode=", "@brief Method void QGradient::setInterpolationMode(QGradient::InterpolationMode mode)\n", false, &_init_f_setInterpolationMode_3220, &_call_f_setInterpolationMode_3220);
  methods += new qt_gsi::GenericMethod ("setSpread|spread=", "@brief Method void QGradient::setSpread(QGradient::Spread spread)\n", false, &_init_f_setSpread_2054, &_call_f_setSpread_2054);
  methods += new qt_gsi::GenericMethod ("setStops|stops=", "@brief Method void QGradient::setStops(const QVector<QGradientStop> &stops)\n", false, &_init_f_setStops_3460, &_call_f_setStops_3460);
  methods += new qt_gsi::GenericMethod (":spread", "@brief Method QGradient::Spread QGradient::spread()\n", true, &_init_f_spread_c0, &_call_f_spread_c0);
  methods += new qt_gsi::GenericMethod (":stops", "@brief Method QVector<QGradientStop> QGradient::stops()\n", true, &_init_f_stops_c0, &_call_f_stops_c0);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method QGradient::Type QGradient::type()\n", true, &_init_f_type_c0, &_call_f_type_c0);
  return methods;
}

gsi::Class<QGradient> decl_QGradient ("QtGui", "QGradient",
  methods_QGradient (),
  "@qt\n@brief Binding of QGradient");


GSI_QTGUI_PUBLIC gsi::Class<QGradient> &qtdecl_QGradient () { return decl_QGradient; }

}


//  Implementation of the enum wrapper class for QGradient::CoordinateMode
namespace qt_gsi
{

static gsi::Enum<QGradient::CoordinateMode> decl_QGradient_CoordinateMode_Enum ("QtGui", "QGradient_CoordinateMode",
    gsi::enum_const ("LogicalMode", QGradient::LogicalMode, "@brief Enum constant QGradient::LogicalMode") +
    gsi::enum_const ("StretchToDeviceMode", QGradient::StretchToDeviceMode, "@brief Enum constant QGradient::StretchToDeviceMode") +
    gsi::enum_const ("ObjectBoundingMode", QGradient::ObjectBoundingMode, "@brief Enum constant QGradient::ObjectBoundingMode") +
    gsi::enum_const ("ObjectMode", QGradient::ObjectMode, "@brief Enum constant QGradient::ObjectMode"),
  "@qt\n@brief This class represents the QGradient::CoordinateMode enum");

static gsi::QFlagsClass<QGradient::CoordinateMode > decl_QGradient_CoordinateMode_Enums ("QtGui", "QGradient_QFlags_CoordinateMode",
  "@qt\n@brief This class represents the QFlags<QGradient::CoordinateMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QGradient> inject_QGradient_CoordinateMode_Enum_in_parent (decl_QGradient_CoordinateMode_Enum.defs ());
static gsi::ClassExt<QGradient> decl_QGradient_CoordinateMode_Enum_as_child (decl_QGradient_CoordinateMode_Enum, "CoordinateMode");
static gsi::ClassExt<QGradient> decl_QGradient_CoordinateMode_Enums_as_child (decl_QGradient_CoordinateMode_Enums, "QFlags_CoordinateMode");

}


//  Implementation of the enum wrapper class for QGradient::InterpolationMode
namespace qt_gsi
{

static gsi::Enum<QGradient::InterpolationMode> decl_QGradient_InterpolationMode_Enum ("QtGui", "QGradient_InterpolationMode",
    gsi::enum_const ("ColorInterpolation", QGradient::ColorInterpolation, "@brief Enum constant QGradient::ColorInterpolation") +
    gsi::enum_const ("ComponentInterpolation", QGradient::ComponentInterpolation, "@brief Enum constant QGradient::ComponentInterpolation"),
  "@qt\n@brief This class represents the QGradient::InterpolationMode enum");

static gsi::QFlagsClass<QGradient::InterpolationMode > decl_QGradient_InterpolationMode_Enums ("QtGui", "QGradient_QFlags_InterpolationMode",
  "@qt\n@brief This class represents the QFlags<QGradient::InterpolationMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QGradient> inject_QGradient_InterpolationMode_Enum_in_parent (decl_QGradient_InterpolationMode_Enum.defs ());
static gsi::ClassExt<QGradient> decl_QGradient_InterpolationMode_Enum_as_child (decl_QGradient_InterpolationMode_Enum, "InterpolationMode");
static gsi::ClassExt<QGradient> decl_QGradient_InterpolationMode_Enums_as_child (decl_QGradient_InterpolationMode_Enums, "QFlags_InterpolationMode");

}


//  Implementation of the enum wrapper class for QGradient::Preset
namespace qt_gsi
{

static gsi::Enum<QGradient::Preset> decl_QGradient_Preset_Enum ("QtGui", "QGradient_Preset",
    gsi::enum_const ("WarmFlame", QGradient::WarmFlame, "@brief Enum constant QGradient::WarmFlame") +
    gsi::enum_const ("NightFade", QGradient::NightFade, "@brief Enum constant QGradient::NightFade") +
    gsi::enum_const ("SpringWarmth", QGradient::SpringWarmth, "@brief Enum constant QGradient::SpringWarmth") +
    gsi::enum_const ("JuicyPeach", QGradient::JuicyPeach, "@brief Enum constant QGradient::JuicyPeach") +
    gsi::enum_const ("YoungPassion", QGradient::YoungPassion, "@brief Enum constant QGradient::YoungPassion") +
    gsi::enum_const ("LadyLips", QGradient::LadyLips, "@brief Enum constant QGradient::LadyLips") +
    gsi::enum_const ("SunnyMorning", QGradient::SunnyMorning, "@brief Enum constant QGradient::SunnyMorning") +
    gsi::enum_const ("RainyAshville", QGradient::RainyAshville, "@brief Enum constant QGradient::RainyAshville") +
    gsi::enum_const ("FrozenDreams", QGradient::FrozenDreams, "@brief Enum constant QGradient::FrozenDreams") +
    gsi::enum_const ("WinterNeva", QGradient::WinterNeva, "@brief Enum constant QGradient::WinterNeva") +
    gsi::enum_const ("DustyGrass", QGradient::DustyGrass, "@brief Enum constant QGradient::DustyGrass") +
    gsi::enum_const ("TemptingAzure", QGradient::TemptingAzure, "@brief Enum constant QGradient::TemptingAzure") +
    gsi::enum_const ("HeavyRain", QGradient::HeavyRain, "@brief Enum constant QGradient::HeavyRain") +
    gsi::enum_const ("AmyCrisp", QGradient::AmyCrisp, "@brief Enum constant QGradient::AmyCrisp") +
    gsi::enum_const ("MeanFruit", QGradient::MeanFruit, "@brief Enum constant QGradient::MeanFruit") +
    gsi::enum_const ("DeepBlue", QGradient::DeepBlue, "@brief Enum constant QGradient::DeepBlue") +
    gsi::enum_const ("RipeMalinka", QGradient::RipeMalinka, "@brief Enum constant QGradient::RipeMalinka") +
    gsi::enum_const ("CloudyKnoxville", QGradient::CloudyKnoxville, "@brief Enum constant QGradient::CloudyKnoxville") +
    gsi::enum_const ("MalibuBeach", QGradient::MalibuBeach, "@brief Enum constant QGradient::MalibuBeach") +
    gsi::enum_const ("NewLife", QGradient::NewLife, "@brief Enum constant QGradient::NewLife") +
    gsi::enum_const ("TrueSunset", QGradient::TrueSunset, "@brief Enum constant QGradient::TrueSunset") +
    gsi::enum_const ("MorpheusDen", QGradient::MorpheusDen, "@brief Enum constant QGradient::MorpheusDen") +
    gsi::enum_const ("RareWind", QGradient::RareWind, "@brief Enum constant QGradient::RareWind") +
    gsi::enum_const ("NearMoon", QGradient::NearMoon, "@brief Enum constant QGradient::NearMoon") +
    gsi::enum_const ("WildApple", QGradient::WildApple, "@brief Enum constant QGradient::WildApple") +
    gsi::enum_const ("SaintPetersburg", QGradient::SaintPetersburg, "@brief Enum constant QGradient::SaintPetersburg") +
    gsi::enum_const ("PlumPlate", QGradient::PlumPlate, "@brief Enum constant QGradient::PlumPlate") +
    gsi::enum_const ("EverlastingSky", QGradient::EverlastingSky, "@brief Enum constant QGradient::EverlastingSky") +
    gsi::enum_const ("HappyFisher", QGradient::HappyFisher, "@brief Enum constant QGradient::HappyFisher") +
    gsi::enum_const ("Blessing", QGradient::Blessing, "@brief Enum constant QGradient::Blessing") +
    gsi::enum_const ("SharpeyeEagle", QGradient::SharpeyeEagle, "@brief Enum constant QGradient::SharpeyeEagle") +
    gsi::enum_const ("LadogaBottom", QGradient::LadogaBottom, "@brief Enum constant QGradient::LadogaBottom") +
    gsi::enum_const ("LemonGate", QGradient::LemonGate, "@brief Enum constant QGradient::LemonGate") +
    gsi::enum_const ("ItmeoBranding", QGradient::ItmeoBranding, "@brief Enum constant QGradient::ItmeoBranding") +
    gsi::enum_const ("ZeusMiracle", QGradient::ZeusMiracle, "@brief Enum constant QGradient::ZeusMiracle") +
    gsi::enum_const ("OldHat", QGradient::OldHat, "@brief Enum constant QGradient::OldHat") +
    gsi::enum_const ("StarWine", QGradient::StarWine, "@brief Enum constant QGradient::StarWine") +
    gsi::enum_const ("HappyAcid", QGradient::HappyAcid, "@brief Enum constant QGradient::HappyAcid") +
    gsi::enum_const ("AwesomePine", QGradient::AwesomePine, "@brief Enum constant QGradient::AwesomePine") +
    gsi::enum_const ("NewYork", QGradient::NewYork, "@brief Enum constant QGradient::NewYork") +
    gsi::enum_const ("ShyRainbow", QGradient::ShyRainbow, "@brief Enum constant QGradient::ShyRainbow") +
    gsi::enum_const ("MixedHopes", QGradient::MixedHopes, "@brief Enum constant QGradient::MixedHopes") +
    gsi::enum_const ("FlyHigh", QGradient::FlyHigh, "@brief Enum constant QGradient::FlyHigh") +
    gsi::enum_const ("StrongBliss", QGradient::StrongBliss, "@brief Enum constant QGradient::StrongBliss") +
    gsi::enum_const ("FreshMilk", QGradient::FreshMilk, "@brief Enum constant QGradient::FreshMilk") +
    gsi::enum_const ("SnowAgain", QGradient::SnowAgain, "@brief Enum constant QGradient::SnowAgain") +
    gsi::enum_const ("FebruaryInk", QGradient::FebruaryInk, "@brief Enum constant QGradient::FebruaryInk") +
    gsi::enum_const ("KindSteel", QGradient::KindSteel, "@brief Enum constant QGradient::KindSteel") +
    gsi::enum_const ("SoftGrass", QGradient::SoftGrass, "@brief Enum constant QGradient::SoftGrass") +
    gsi::enum_const ("GrownEarly", QGradient::GrownEarly, "@brief Enum constant QGradient::GrownEarly") +
    gsi::enum_const ("SharpBlues", QGradient::SharpBlues, "@brief Enum constant QGradient::SharpBlues") +
    gsi::enum_const ("ShadyWater", QGradient::ShadyWater, "@brief Enum constant QGradient::ShadyWater") +
    gsi::enum_const ("DirtyBeauty", QGradient::DirtyBeauty, "@brief Enum constant QGradient::DirtyBeauty") +
    gsi::enum_const ("GreatWhale", QGradient::GreatWhale, "@brief Enum constant QGradient::GreatWhale") +
    gsi::enum_const ("TeenNotebook", QGradient::TeenNotebook, "@brief Enum constant QGradient::TeenNotebook") +
    gsi::enum_const ("PoliteRumors", QGradient::PoliteRumors, "@brief Enum constant QGradient::PoliteRumors") +
    gsi::enum_const ("SweetPeriod", QGradient::SweetPeriod, "@brief Enum constant QGradient::SweetPeriod") +
    gsi::enum_const ("WideMatrix", QGradient::WideMatrix, "@brief Enum constant QGradient::WideMatrix") +
    gsi::enum_const ("SoftCherish", QGradient::SoftCherish, "@brief Enum constant QGradient::SoftCherish") +
    gsi::enum_const ("RedSalvation", QGradient::RedSalvation, "@brief Enum constant QGradient::RedSalvation") +
    gsi::enum_const ("BurningSpring", QGradient::BurningSpring, "@brief Enum constant QGradient::BurningSpring") +
    gsi::enum_const ("NightParty", QGradient::NightParty, "@brief Enum constant QGradient::NightParty") +
    gsi::enum_const ("SkyGlider", QGradient::SkyGlider, "@brief Enum constant QGradient::SkyGlider") +
    gsi::enum_const ("HeavenPeach", QGradient::HeavenPeach, "@brief Enum constant QGradient::HeavenPeach") +
    gsi::enum_const ("PurpleDivision", QGradient::PurpleDivision, "@brief Enum constant QGradient::PurpleDivision") +
    gsi::enum_const ("AquaSplash", QGradient::AquaSplash, "@brief Enum constant QGradient::AquaSplash") +
    gsi::enum_const ("SpikyNaga", QGradient::SpikyNaga, "@brief Enum constant QGradient::SpikyNaga") +
    gsi::enum_const ("LoveKiss", QGradient::LoveKiss, "@brief Enum constant QGradient::LoveKiss") +
    gsi::enum_const ("CleanMirror", QGradient::CleanMirror, "@brief Enum constant QGradient::CleanMirror") +
    gsi::enum_const ("PremiumDark", QGradient::PremiumDark, "@brief Enum constant QGradient::PremiumDark") +
    gsi::enum_const ("ColdEvening", QGradient::ColdEvening, "@brief Enum constant QGradient::ColdEvening") +
    gsi::enum_const ("CochitiLake", QGradient::CochitiLake, "@brief Enum constant QGradient::CochitiLake") +
    gsi::enum_const ("SummerGames", QGradient::SummerGames, "@brief Enum constant QGradient::SummerGames") +
    gsi::enum_const ("PassionateBed", QGradient::PassionateBed, "@brief Enum constant QGradient::PassionateBed") +
    gsi::enum_const ("MountainRock", QGradient::MountainRock, "@brief Enum constant QGradient::MountainRock") +
    gsi::enum_const ("DesertHump", QGradient::DesertHump, "@brief Enum constant QGradient::DesertHump") +
    gsi::enum_const ("JungleDay", QGradient::JungleDay, "@brief Enum constant QGradient::JungleDay") +
    gsi::enum_const ("PhoenixStart", QGradient::PhoenixStart, "@brief Enum constant QGradient::PhoenixStart") +
    gsi::enum_const ("OctoberSilence", QGradient::OctoberSilence, "@brief Enum constant QGradient::OctoberSilence") +
    gsi::enum_const ("FarawayRiver", QGradient::FarawayRiver, "@brief Enum constant QGradient::FarawayRiver") +
    gsi::enum_const ("AlchemistLab", QGradient::AlchemistLab, "@brief Enum constant QGradient::AlchemistLab") +
    gsi::enum_const ("OverSun", QGradient::OverSun, "@brief Enum constant QGradient::OverSun") +
    gsi::enum_const ("PremiumWhite", QGradient::PremiumWhite, "@brief Enum constant QGradient::PremiumWhite") +
    gsi::enum_const ("MarsParty", QGradient::MarsParty, "@brief Enum constant QGradient::MarsParty") +
    gsi::enum_const ("EternalConstance", QGradient::EternalConstance, "@brief Enum constant QGradient::EternalConstance") +
    gsi::enum_const ("JapanBlush", QGradient::JapanBlush, "@brief Enum constant QGradient::JapanBlush") +
    gsi::enum_const ("SmilingRain", QGradient::SmilingRain, "@brief Enum constant QGradient::SmilingRain") +
    gsi::enum_const ("CloudyApple", QGradient::CloudyApple, "@brief Enum constant QGradient::CloudyApple") +
    gsi::enum_const ("BigMango", QGradient::BigMango, "@brief Enum constant QGradient::BigMango") +
    gsi::enum_const ("HealthyWater", QGradient::HealthyWater, "@brief Enum constant QGradient::HealthyWater") +
    gsi::enum_const ("AmourAmour", QGradient::AmourAmour, "@brief Enum constant QGradient::AmourAmour") +
    gsi::enum_const ("RiskyConcrete", QGradient::RiskyConcrete, "@brief Enum constant QGradient::RiskyConcrete") +
    gsi::enum_const ("StrongStick", QGradient::StrongStick, "@brief Enum constant QGradient::StrongStick") +
    gsi::enum_const ("ViciousStance", QGradient::ViciousStance, "@brief Enum constant QGradient::ViciousStance") +
    gsi::enum_const ("PaloAlto", QGradient::PaloAlto, "@brief Enum constant QGradient::PaloAlto") +
    gsi::enum_const ("HappyMemories", QGradient::HappyMemories, "@brief Enum constant QGradient::HappyMemories") +
    gsi::enum_const ("MidnightBloom", QGradient::MidnightBloom, "@brief Enum constant QGradient::MidnightBloom") +
    gsi::enum_const ("Crystalline", QGradient::Crystalline, "@brief Enum constant QGradient::Crystalline") +
    gsi::enum_const ("PartyBliss", QGradient::PartyBliss, "@brief Enum constant QGradient::PartyBliss") +
    gsi::enum_const ("ConfidentCloud", QGradient::ConfidentCloud, "@brief Enum constant QGradient::ConfidentCloud") +
    gsi::enum_const ("LeCocktail", QGradient::LeCocktail, "@brief Enum constant QGradient::LeCocktail") +
    gsi::enum_const ("RiverCity", QGradient::RiverCity, "@brief Enum constant QGradient::RiverCity") +
    gsi::enum_const ("FrozenBerry", QGradient::FrozenBerry, "@brief Enum constant QGradient::FrozenBerry") +
    gsi::enum_const ("ChildCare", QGradient::ChildCare, "@brief Enum constant QGradient::ChildCare") +
    gsi::enum_const ("FlyingLemon", QGradient::FlyingLemon, "@brief Enum constant QGradient::FlyingLemon") +
    gsi::enum_const ("NewRetrowave", QGradient::NewRetrowave, "@brief Enum constant QGradient::NewRetrowave") +
    gsi::enum_const ("HiddenJaguar", QGradient::HiddenJaguar, "@brief Enum constant QGradient::HiddenJaguar") +
    gsi::enum_const ("AboveTheSky", QGradient::AboveTheSky, "@brief Enum constant QGradient::AboveTheSky") +
    gsi::enum_const ("Nega", QGradient::Nega, "@brief Enum constant QGradient::Nega") +
    gsi::enum_const ("DenseWater", QGradient::DenseWater, "@brief Enum constant QGradient::DenseWater") +
    gsi::enum_const ("Seashore", QGradient::Seashore, "@brief Enum constant QGradient::Seashore") +
    gsi::enum_const ("MarbleWall", QGradient::MarbleWall, "@brief Enum constant QGradient::MarbleWall") +
    gsi::enum_const ("CheerfulCaramel", QGradient::CheerfulCaramel, "@brief Enum constant QGradient::CheerfulCaramel") +
    gsi::enum_const ("NightSky", QGradient::NightSky, "@brief Enum constant QGradient::NightSky") +
    gsi::enum_const ("MagicLake", QGradient::MagicLake, "@brief Enum constant QGradient::MagicLake") +
    gsi::enum_const ("YoungGrass", QGradient::YoungGrass, "@brief Enum constant QGradient::YoungGrass") +
    gsi::enum_const ("ColorfulPeach", QGradient::ColorfulPeach, "@brief Enum constant QGradient::ColorfulPeach") +
    gsi::enum_const ("GentleCare", QGradient::GentleCare, "@brief Enum constant QGradient::GentleCare") +
    gsi::enum_const ("PlumBath", QGradient::PlumBath, "@brief Enum constant QGradient::PlumBath") +
    gsi::enum_const ("HappyUnicorn", QGradient::HappyUnicorn, "@brief Enum constant QGradient::HappyUnicorn") +
    gsi::enum_const ("AfricanField", QGradient::AfricanField, "@brief Enum constant QGradient::AfricanField") +
    gsi::enum_const ("SolidStone", QGradient::SolidStone, "@brief Enum constant QGradient::SolidStone") +
    gsi::enum_const ("OrangeJuice", QGradient::OrangeJuice, "@brief Enum constant QGradient::OrangeJuice") +
    gsi::enum_const ("GlassWater", QGradient::GlassWater, "@brief Enum constant QGradient::GlassWater") +
    gsi::enum_const ("NorthMiracle", QGradient::NorthMiracle, "@brief Enum constant QGradient::NorthMiracle") +
    gsi::enum_const ("FruitBlend", QGradient::FruitBlend, "@brief Enum constant QGradient::FruitBlend") +
    gsi::enum_const ("MillenniumPine", QGradient::MillenniumPine, "@brief Enum constant QGradient::MillenniumPine") +
    gsi::enum_const ("HighFlight", QGradient::HighFlight, "@brief Enum constant QGradient::HighFlight") +
    gsi::enum_const ("MoleHall", QGradient::MoleHall, "@brief Enum constant QGradient::MoleHall") +
    gsi::enum_const ("SpaceShift", QGradient::SpaceShift, "@brief Enum constant QGradient::SpaceShift") +
    gsi::enum_const ("ForestInei", QGradient::ForestInei, "@brief Enum constant QGradient::ForestInei") +
    gsi::enum_const ("RoyalGarden", QGradient::RoyalGarden, "@brief Enum constant QGradient::RoyalGarden") +
    gsi::enum_const ("RichMetal", QGradient::RichMetal, "@brief Enum constant QGradient::RichMetal") +
    gsi::enum_const ("JuicyCake", QGradient::JuicyCake, "@brief Enum constant QGradient::JuicyCake") +
    gsi::enum_const ("SmartIndigo", QGradient::SmartIndigo, "@brief Enum constant QGradient::SmartIndigo") +
    gsi::enum_const ("SandStrike", QGradient::SandStrike, "@brief Enum constant QGradient::SandStrike") +
    gsi::enum_const ("NorseBeauty", QGradient::NorseBeauty, "@brief Enum constant QGradient::NorseBeauty") +
    gsi::enum_const ("AquaGuidance", QGradient::AquaGuidance, "@brief Enum constant QGradient::AquaGuidance") +
    gsi::enum_const ("SunVeggie", QGradient::SunVeggie, "@brief Enum constant QGradient::SunVeggie") +
    gsi::enum_const ("SeaLord", QGradient::SeaLord, "@brief Enum constant QGradient::SeaLord") +
    gsi::enum_const ("BlackSea", QGradient::BlackSea, "@brief Enum constant QGradient::BlackSea") +
    gsi::enum_const ("GrassShampoo", QGradient::GrassShampoo, "@brief Enum constant QGradient::GrassShampoo") +
    gsi::enum_const ("LandingAircraft", QGradient::LandingAircraft, "@brief Enum constant QGradient::LandingAircraft") +
    gsi::enum_const ("WitchDance", QGradient::WitchDance, "@brief Enum constant QGradient::WitchDance") +
    gsi::enum_const ("SleeplessNight", QGradient::SleeplessNight, "@brief Enum constant QGradient::SleeplessNight") +
    gsi::enum_const ("AngelCare", QGradient::AngelCare, "@brief Enum constant QGradient::AngelCare") +
    gsi::enum_const ("CrystalRiver", QGradient::CrystalRiver, "@brief Enum constant QGradient::CrystalRiver") +
    gsi::enum_const ("SoftLipstick", QGradient::SoftLipstick, "@brief Enum constant QGradient::SoftLipstick") +
    gsi::enum_const ("SaltMountain", QGradient::SaltMountain, "@brief Enum constant QGradient::SaltMountain") +
    gsi::enum_const ("PerfectWhite", QGradient::PerfectWhite, "@brief Enum constant QGradient::PerfectWhite") +
    gsi::enum_const ("FreshOasis", QGradient::FreshOasis, "@brief Enum constant QGradient::FreshOasis") +
    gsi::enum_const ("StrictNovember", QGradient::StrictNovember, "@brief Enum constant QGradient::StrictNovember") +
    gsi::enum_const ("MorningSalad", QGradient::MorningSalad, "@brief Enum constant QGradient::MorningSalad") +
    gsi::enum_const ("DeepRelief", QGradient::DeepRelief, "@brief Enum constant QGradient::DeepRelief") +
    gsi::enum_const ("SeaStrike", QGradient::SeaStrike, "@brief Enum constant QGradient::SeaStrike") +
    gsi::enum_const ("NightCall", QGradient::NightCall, "@brief Enum constant QGradient::NightCall") +
    gsi::enum_const ("SupremeSky", QGradient::SupremeSky, "@brief Enum constant QGradient::SupremeSky") +
    gsi::enum_const ("LightBlue", QGradient::LightBlue, "@brief Enum constant QGradient::LightBlue") +
    gsi::enum_const ("MindCrawl", QGradient::MindCrawl, "@brief Enum constant QGradient::MindCrawl") +
    gsi::enum_const ("LilyMeadow", QGradient::LilyMeadow, "@brief Enum constant QGradient::LilyMeadow") +
    gsi::enum_const ("SugarLollipop", QGradient::SugarLollipop, "@brief Enum constant QGradient::SugarLollipop") +
    gsi::enum_const ("SweetDessert", QGradient::SweetDessert, "@brief Enum constant QGradient::SweetDessert") +
    gsi::enum_const ("MagicRay", QGradient::MagicRay, "@brief Enum constant QGradient::MagicRay") +
    gsi::enum_const ("TeenParty", QGradient::TeenParty, "@brief Enum constant QGradient::TeenParty") +
    gsi::enum_const ("FrozenHeat", QGradient::FrozenHeat, "@brief Enum constant QGradient::FrozenHeat") +
    gsi::enum_const ("GagarinView", QGradient::GagarinView, "@brief Enum constant QGradient::GagarinView") +
    gsi::enum_const ("FabledSunset", QGradient::FabledSunset, "@brief Enum constant QGradient::FabledSunset") +
    gsi::enum_const ("PerfectBlue", QGradient::PerfectBlue, "@brief Enum constant QGradient::PerfectBlue"),
  "@qt\n@brief This class represents the QGradient::Preset enum");

static gsi::QFlagsClass<QGradient::Preset > decl_QGradient_Preset_Enums ("QtGui", "QGradient_QFlags_Preset",
  "@qt\n@brief This class represents the QFlags<QGradient::Preset> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QGradient> inject_QGradient_Preset_Enum_in_parent (decl_QGradient_Preset_Enum.defs ());
static gsi::ClassExt<QGradient> decl_QGradient_Preset_Enum_as_child (decl_QGradient_Preset_Enum, "Preset");
static gsi::ClassExt<QGradient> decl_QGradient_Preset_Enums_as_child (decl_QGradient_Preset_Enums, "QFlags_Preset");

}


//  Implementation of the enum wrapper class for QGradient::Spread
namespace qt_gsi
{

static gsi::Enum<QGradient::Spread> decl_QGradient_Spread_Enum ("QtGui", "QGradient_Spread",
    gsi::enum_const ("PadSpread", QGradient::PadSpread, "@brief Enum constant QGradient::PadSpread") +
    gsi::enum_const ("ReflectSpread", QGradient::ReflectSpread, "@brief Enum constant QGradient::ReflectSpread") +
    gsi::enum_const ("RepeatSpread", QGradient::RepeatSpread, "@brief Enum constant QGradient::RepeatSpread"),
  "@qt\n@brief This class represents the QGradient::Spread enum");

static gsi::QFlagsClass<QGradient::Spread > decl_QGradient_Spread_Enums ("QtGui", "QGradient_QFlags_Spread",
  "@qt\n@brief This class represents the QFlags<QGradient::Spread> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QGradient> inject_QGradient_Spread_Enum_in_parent (decl_QGradient_Spread_Enum.defs ());
static gsi::ClassExt<QGradient> decl_QGradient_Spread_Enum_as_child (decl_QGradient_Spread_Enum, "Spread");
static gsi::ClassExt<QGradient> decl_QGradient_Spread_Enums_as_child (decl_QGradient_Spread_Enums, "QFlags_Spread");

}


//  Implementation of the enum wrapper class for QGradient::Type
namespace qt_gsi
{

static gsi::Enum<QGradient::Type> decl_QGradient_Type_Enum ("QtGui", "QGradient_Type",
    gsi::enum_const ("LinearGradient", QGradient::LinearGradient, "@brief Enum constant QGradient::LinearGradient") +
    gsi::enum_const ("RadialGradient", QGradient::RadialGradient, "@brief Enum constant QGradient::RadialGradient") +
    gsi::enum_const ("ConicalGradient", QGradient::ConicalGradient, "@brief Enum constant QGradient::ConicalGradient") +
    gsi::enum_const ("NoGradient", QGradient::NoGradient, "@brief Enum constant QGradient::NoGradient"),
  "@qt\n@brief This class represents the QGradient::Type enum");

static gsi::QFlagsClass<QGradient::Type > decl_QGradient_Type_Enums ("QtGui", "QGradient_QFlags_Type",
  "@qt\n@brief This class represents the QFlags<QGradient::Type> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QGradient> inject_QGradient_Type_Enum_in_parent (decl_QGradient_Type_Enum.defs ());
static gsi::ClassExt<QGradient> decl_QGradient_Type_Enum_as_child (decl_QGradient_Type_Enum, "Type");
static gsi::ClassExt<QGradient> decl_QGradient_Type_Enums_as_child (decl_QGradient_Type_Enums, "QFlags_Type");

}

