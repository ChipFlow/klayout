
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
*  @file gsiDeclQTextOption.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextOption>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextOption

//  Constructor QTextOption::QTextOption()


static void _init_ctor_QTextOption_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextOption> ();
}

static void _call_ctor_QTextOption_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextOption *> (new QTextOption ());
}


//  Constructor QTextOption::QTextOption(QFlags<Qt::AlignmentFlag> alignment)


static void _init_ctor_QTextOption_2750 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("alignment");
  decl->add_arg<QFlags<Qt::AlignmentFlag> > (argspec_0);
  decl->set_return_new<QTextOption> ();
}

static void _call_ctor_QTextOption_2750 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::AlignmentFlag> arg1 = gsi::arg_reader<QFlags<Qt::AlignmentFlag> >() (args, heap);
  ret.write<QTextOption *> (new QTextOption (arg1));
}


//  Constructor QTextOption::QTextOption(const QTextOption &o)


static void _init_ctor_QTextOption_2448 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextOption & > (argspec_0);
  decl->set_return_new<QTextOption> ();
}

static void _call_ctor_QTextOption_2448 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextOption &arg1 = gsi::arg_reader<const QTextOption & >() (args, heap);
  ret.write<QTextOption *> (new QTextOption (arg1));
}


// QFlags<Qt::AlignmentFlag> QTextOption::alignment()


static void _init_f_alignment_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::AlignmentFlag> > ();
}

static void _call_f_alignment_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::AlignmentFlag> > ((QFlags<Qt::AlignmentFlag>)((QTextOption *)cls)->alignment ());
}


// QFlags<QTextOption::Flag> QTextOption::flags()


static void _init_f_flags_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QTextOption::Flag> > ();
}

static void _call_f_flags_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QTextOption::Flag> > ((QFlags<QTextOption::Flag>)((QTextOption *)cls)->flags ());
}


// QTextOption &QTextOption::operator=(const QTextOption &o)


static void _init_f_operator_eq__2448 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextOption & > (argspec_0);
  decl->set_return<QTextOption & > ();
}

static void _call_f_operator_eq__2448 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextOption &arg1 = gsi::arg_reader<const QTextOption & >() (args, heap);
  ret.write<QTextOption & > ((QTextOption &)((QTextOption *)cls)->operator= (arg1));
}


// void QTextOption::setAlignment(QFlags<Qt::AlignmentFlag> alignment)


static void _init_f_setAlignment_2750 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("alignment");
  decl->add_arg<QFlags<Qt::AlignmentFlag> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAlignment_2750 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::AlignmentFlag> arg1 = gsi::arg_reader<QFlags<Qt::AlignmentFlag> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextOption *)cls)->setAlignment (arg1);
}


// void QTextOption::setFlags(QFlags<QTextOption::Flag> flags)


static void _init_f_setFlags_2761 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("flags");
  decl->add_arg<QFlags<QTextOption::Flag> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFlags_2761 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QTextOption::Flag> arg1 = gsi::arg_reader<QFlags<QTextOption::Flag> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextOption *)cls)->setFlags (arg1);
}


// void QTextOption::setTabArray(const QList<qreal> &tabStops)


static void _init_f_setTabArray_2461 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("tabStops");
  decl->add_arg<const QList<qreal> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTabArray_2461 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<qreal> &arg1 = gsi::arg_reader<const QList<qreal> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextOption *)cls)->setTabArray (arg1);
}


// void QTextOption::setTabStopDistance(double tabStopDistance)


static void _init_f_setTabStopDistance_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("tabStopDistance");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTabStopDistance_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextOption *)cls)->setTabStopDistance (arg1);
}


// void QTextOption::setTabs(const QList<QTextOption::Tab> &tabStops)


static void _init_f_setTabs_3458 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("tabStops");
  decl->add_arg<const QList<QTextOption::Tab> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTabs_3458 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QTextOption::Tab> &arg1 = gsi::arg_reader<const QList<QTextOption::Tab> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextOption *)cls)->setTabs (arg1);
}


// void QTextOption::setTextDirection(Qt::LayoutDirection aDirection)


static void _init_f_setTextDirection_2316 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("aDirection");
  decl->add_arg<const qt_gsi::Converter<Qt::LayoutDirection>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTextDirection_2316 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::LayoutDirection>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::LayoutDirection>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextOption *)cls)->setTextDirection (qt_gsi::QtToCppAdaptor<Qt::LayoutDirection>(arg1).cref());
}


// void QTextOption::setUseDesignMetrics(bool b)


static void _init_f_setUseDesignMetrics_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("b");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setUseDesignMetrics_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextOption *)cls)->setUseDesignMetrics (arg1);
}


// void QTextOption::setWrapMode(QTextOption::WrapMode wrap)


static void _init_f_setWrapMode_2486 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("wrap");
  decl->add_arg<const qt_gsi::Converter<QTextOption::WrapMode>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setWrapMode_2486 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QTextOption::WrapMode>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QTextOption::WrapMode>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextOption *)cls)->setWrapMode (qt_gsi::QtToCppAdaptor<QTextOption::WrapMode>(arg1).cref());
}


// QList<qreal> QTextOption::tabArray()


static void _init_f_tabArray_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<qreal> > ();
}

static void _call_f_tabArray_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<qreal> > ((QList<qreal>)((QTextOption *)cls)->tabArray ());
}


// double QTextOption::tabStopDistance()


static void _init_f_tabStopDistance_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_tabStopDistance_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextOption *)cls)->tabStopDistance ());
}


// QList<QTextOption::Tab> QTextOption::tabs()


static void _init_f_tabs_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QTextOption::Tab> > ();
}

static void _call_f_tabs_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QTextOption::Tab> > ((QList<QTextOption::Tab>)((QTextOption *)cls)->tabs ());
}


// Qt::LayoutDirection QTextOption::textDirection()


static void _init_f_textDirection_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::LayoutDirection>::target_type > ();
}

static void _call_f_textDirection_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::LayoutDirection>::target_type > ((qt_gsi::Converter<Qt::LayoutDirection>::target_type)qt_gsi::CppToQtAdaptor<Qt::LayoutDirection>(((QTextOption *)cls)->textDirection ()));
}


// bool QTextOption::useDesignMetrics()


static void _init_f_useDesignMetrics_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_useDesignMetrics_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextOption *)cls)->useDesignMetrics ());
}


// QTextOption::WrapMode QTextOption::wrapMode()


static void _init_f_wrapMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QTextOption::WrapMode>::target_type > ();
}

static void _call_f_wrapMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QTextOption::WrapMode>::target_type > ((qt_gsi::Converter<QTextOption::WrapMode>::target_type)qt_gsi::CppToQtAdaptor<QTextOption::WrapMode>(((QTextOption *)cls)->wrapMode ()));
}



namespace gsi
{

static gsi::Methods methods_QTextOption () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextOption::QTextOption()\nThis method creates an object of class QTextOption.", &_init_ctor_QTextOption_0, &_call_ctor_QTextOption_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextOption::QTextOption(QFlags<Qt::AlignmentFlag> alignment)\nThis method creates an object of class QTextOption.", &_init_ctor_QTextOption_2750, &_call_ctor_QTextOption_2750);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextOption::QTextOption(const QTextOption &o)\nThis method creates an object of class QTextOption.", &_init_ctor_QTextOption_2448, &_call_ctor_QTextOption_2448);
  methods += new qt_gsi::GenericMethod (":alignment", "@brief Method QFlags<Qt::AlignmentFlag> QTextOption::alignment()\n", true, &_init_f_alignment_c0, &_call_f_alignment_c0);
  methods += new qt_gsi::GenericMethod (":flags", "@brief Method QFlags<QTextOption::Flag> QTextOption::flags()\n", true, &_init_f_flags_c0, &_call_f_flags_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QTextOption &QTextOption::operator=(const QTextOption &o)\n", false, &_init_f_operator_eq__2448, &_call_f_operator_eq__2448);
  methods += new qt_gsi::GenericMethod ("setAlignment|alignment=", "@brief Method void QTextOption::setAlignment(QFlags<Qt::AlignmentFlag> alignment)\n", false, &_init_f_setAlignment_2750, &_call_f_setAlignment_2750);
  methods += new qt_gsi::GenericMethod ("setFlags|flags=", "@brief Method void QTextOption::setFlags(QFlags<QTextOption::Flag> flags)\n", false, &_init_f_setFlags_2761, &_call_f_setFlags_2761);
  methods += new qt_gsi::GenericMethod ("setTabArray|tabArray=", "@brief Method void QTextOption::setTabArray(const QList<qreal> &tabStops)\n", false, &_init_f_setTabArray_2461, &_call_f_setTabArray_2461);
  methods += new qt_gsi::GenericMethod ("setTabStopDistance|tabStopDistance=", "@brief Method void QTextOption::setTabStopDistance(double tabStopDistance)\n", false, &_init_f_setTabStopDistance_1071, &_call_f_setTabStopDistance_1071);
  methods += new qt_gsi::GenericMethod ("setTabs|tabs=", "@brief Method void QTextOption::setTabs(const QList<QTextOption::Tab> &tabStops)\n", false, &_init_f_setTabs_3458, &_call_f_setTabs_3458);
  methods += new qt_gsi::GenericMethod ("setTextDirection|textDirection=", "@brief Method void QTextOption::setTextDirection(Qt::LayoutDirection aDirection)\n", false, &_init_f_setTextDirection_2316, &_call_f_setTextDirection_2316);
  methods += new qt_gsi::GenericMethod ("setUseDesignMetrics|useDesignMetrics=", "@brief Method void QTextOption::setUseDesignMetrics(bool b)\n", false, &_init_f_setUseDesignMetrics_864, &_call_f_setUseDesignMetrics_864);
  methods += new qt_gsi::GenericMethod ("setWrapMode|wrapMode=", "@brief Method void QTextOption::setWrapMode(QTextOption::WrapMode wrap)\n", false, &_init_f_setWrapMode_2486, &_call_f_setWrapMode_2486);
  methods += new qt_gsi::GenericMethod (":tabArray", "@brief Method QList<qreal> QTextOption::tabArray()\n", true, &_init_f_tabArray_c0, &_call_f_tabArray_c0);
  methods += new qt_gsi::GenericMethod (":tabStopDistance", "@brief Method double QTextOption::tabStopDistance()\n", true, &_init_f_tabStopDistance_c0, &_call_f_tabStopDistance_c0);
  methods += new qt_gsi::GenericMethod (":tabs", "@brief Method QList<QTextOption::Tab> QTextOption::tabs()\n", true, &_init_f_tabs_c0, &_call_f_tabs_c0);
  methods += new qt_gsi::GenericMethod (":textDirection", "@brief Method Qt::LayoutDirection QTextOption::textDirection()\n", true, &_init_f_textDirection_c0, &_call_f_textDirection_c0);
  methods += new qt_gsi::GenericMethod (":useDesignMetrics", "@brief Method bool QTextOption::useDesignMetrics()\n", true, &_init_f_useDesignMetrics_c0, &_call_f_useDesignMetrics_c0);
  methods += new qt_gsi::GenericMethod (":wrapMode", "@brief Method QTextOption::WrapMode QTextOption::wrapMode()\n", true, &_init_f_wrapMode_c0, &_call_f_wrapMode_c0);
  return methods;
}

gsi::Class<QTextOption> decl_QTextOption ("QtGui", "QTextOption",
  methods_QTextOption (),
  "@qt\n@brief Binding of QTextOption");


GSI_QTGUI_PUBLIC gsi::Class<QTextOption> &qtdecl_QTextOption () { return decl_QTextOption; }

}


//  Implementation of the enum wrapper class for QTextOption::Flag
namespace qt_gsi
{

static gsi::Enum<QTextOption::Flag> decl_QTextOption_Flag_Enum ("QtGui", "QTextOption_Flag",
    gsi::enum_const ("ShowTabsAndSpaces", QTextOption::ShowTabsAndSpaces, "@brief Enum constant QTextOption::ShowTabsAndSpaces") +
    gsi::enum_const ("ShowLineAndParagraphSeparators", QTextOption::ShowLineAndParagraphSeparators, "@brief Enum constant QTextOption::ShowLineAndParagraphSeparators") +
    gsi::enum_const ("AddSpaceForLineAndParagraphSeparators", QTextOption::AddSpaceForLineAndParagraphSeparators, "@brief Enum constant QTextOption::AddSpaceForLineAndParagraphSeparators") +
    gsi::enum_const ("SuppressColors", QTextOption::SuppressColors, "@brief Enum constant QTextOption::SuppressColors") +
    gsi::enum_const ("ShowDocumentTerminator", QTextOption::ShowDocumentTerminator, "@brief Enum constant QTextOption::ShowDocumentTerminator") +
    gsi::enum_const ("IncludeTrailingSpaces", QTextOption::IncludeTrailingSpaces, "@brief Enum constant QTextOption::IncludeTrailingSpaces"),
  "@qt\n@brief This class represents the QTextOption::Flag enum");

static gsi::QFlagsClass<QTextOption::Flag > decl_QTextOption_Flag_Enums ("QtGui", "QTextOption_QFlags_Flag",
  "@qt\n@brief This class represents the QFlags<QTextOption::Flag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTextOption> inject_QTextOption_Flag_Enum_in_parent (decl_QTextOption_Flag_Enum.defs ());
static gsi::ClassExt<QTextOption> decl_QTextOption_Flag_Enum_as_child (decl_QTextOption_Flag_Enum, "Flag");
static gsi::ClassExt<QTextOption> decl_QTextOption_Flag_Enums_as_child (decl_QTextOption_Flag_Enums, "QFlags_Flag");

}


//  Implementation of the enum wrapper class for QTextOption::TabType
namespace qt_gsi
{

static gsi::Enum<QTextOption::TabType> decl_QTextOption_TabType_Enum ("QtGui", "QTextOption_TabType",
    gsi::enum_const ("LeftTab", QTextOption::LeftTab, "@brief Enum constant QTextOption::LeftTab") +
    gsi::enum_const ("RightTab", QTextOption::RightTab, "@brief Enum constant QTextOption::RightTab") +
    gsi::enum_const ("CenterTab", QTextOption::CenterTab, "@brief Enum constant QTextOption::CenterTab") +
    gsi::enum_const ("DelimiterTab", QTextOption::DelimiterTab, "@brief Enum constant QTextOption::DelimiterTab"),
  "@qt\n@brief This class represents the QTextOption::TabType enum");

static gsi::QFlagsClass<QTextOption::TabType > decl_QTextOption_TabType_Enums ("QtGui", "QTextOption_QFlags_TabType",
  "@qt\n@brief This class represents the QFlags<QTextOption::TabType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTextOption> inject_QTextOption_TabType_Enum_in_parent (decl_QTextOption_TabType_Enum.defs ());
static gsi::ClassExt<QTextOption> decl_QTextOption_TabType_Enum_as_child (decl_QTextOption_TabType_Enum, "TabType");
static gsi::ClassExt<QTextOption> decl_QTextOption_TabType_Enums_as_child (decl_QTextOption_TabType_Enums, "QFlags_TabType");

}


//  Implementation of the enum wrapper class for QTextOption::WrapMode
namespace qt_gsi
{

static gsi::Enum<QTextOption::WrapMode> decl_QTextOption_WrapMode_Enum ("QtGui", "QTextOption_WrapMode",
    gsi::enum_const ("NoWrap", QTextOption::NoWrap, "@brief Enum constant QTextOption::NoWrap") +
    gsi::enum_const ("WordWrap", QTextOption::WordWrap, "@brief Enum constant QTextOption::WordWrap") +
    gsi::enum_const ("ManualWrap", QTextOption::ManualWrap, "@brief Enum constant QTextOption::ManualWrap") +
    gsi::enum_const ("WrapAnywhere", QTextOption::WrapAnywhere, "@brief Enum constant QTextOption::WrapAnywhere") +
    gsi::enum_const ("WrapAtWordBoundaryOrAnywhere", QTextOption::WrapAtWordBoundaryOrAnywhere, "@brief Enum constant QTextOption::WrapAtWordBoundaryOrAnywhere"),
  "@qt\n@brief This class represents the QTextOption::WrapMode enum");

static gsi::QFlagsClass<QTextOption::WrapMode > decl_QTextOption_WrapMode_Enums ("QtGui", "QTextOption_QFlags_WrapMode",
  "@qt\n@brief This class represents the QFlags<QTextOption::WrapMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTextOption> inject_QTextOption_WrapMode_Enum_in_parent (decl_QTextOption_WrapMode_Enum.defs ());
static gsi::ClassExt<QTextOption> decl_QTextOption_WrapMode_Enum_as_child (decl_QTextOption_WrapMode_Enum, "WrapMode");
static gsi::ClassExt<QTextOption> decl_QTextOption_WrapMode_Enums_as_child (decl_QTextOption_WrapMode_Enums, "QFlags_WrapMode");

}

