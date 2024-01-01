
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
*  @file gsiDeclQRegularExpression.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionMatchIterator>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QRegularExpression

//  Constructor QRegularExpression::QRegularExpression()


static void _init_ctor_QRegularExpression_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QRegularExpression> ();
}

static void _call_ctor_QRegularExpression_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRegularExpression *> (new QRegularExpression ());
}


//  Constructor QRegularExpression::QRegularExpression(const QString &pattern, QFlags<QRegularExpression::PatternOption> options)


static void _init_ctor_QRegularExpression_6407 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pattern");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("options", true, "QRegularExpression::NoPatternOption");
  decl->add_arg<QFlags<QRegularExpression::PatternOption> > (argspec_1);
  decl->set_return_new<QRegularExpression> ();
}

static void _call_ctor_QRegularExpression_6407 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QFlags<QRegularExpression::PatternOption> arg2 = args ? gsi::arg_reader<QFlags<QRegularExpression::PatternOption> >() (args, heap) : gsi::arg_maker<QFlags<QRegularExpression::PatternOption> >() (QRegularExpression::NoPatternOption, heap);
  ret.write<QRegularExpression *> (new QRegularExpression (arg1, arg2));
}


//  Constructor QRegularExpression::QRegularExpression(const QRegularExpression &re)


static void _init_ctor_QRegularExpression_3188 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("re");
  decl->add_arg<const QRegularExpression & > (argspec_0);
  decl->set_return_new<QRegularExpression> ();
}

static void _call_ctor_QRegularExpression_3188 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegularExpression &arg1 = gsi::arg_reader<const QRegularExpression & >() (args, heap);
  ret.write<QRegularExpression *> (new QRegularExpression (arg1));
}


// int QRegularExpression::captureCount()


static void _init_f_captureCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_captureCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QRegularExpression *)cls)->captureCount ());
}


// QString QRegularExpression::errorString()


static void _init_f_errorString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_errorString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QRegularExpression *)cls)->errorString ());
}


// QRegularExpressionMatchIterator QRegularExpression::globalMatch(const QString &subject, qsizetype offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions)


static void _init_f_globalMatch_c10730 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("subject");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("offset", true, "0");
  decl->add_arg<qsizetype > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("matchType", true, "QRegularExpression::NormalMatch");
  decl->add_arg<const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("matchOptions", true, "QRegularExpression::NoMatchOption");
  decl->add_arg<QFlags<QRegularExpression::MatchOption> > (argspec_3);
  decl->set_return<QRegularExpressionMatchIterator > ();
}

static void _call_f_globalMatch_c10730 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  qsizetype arg2 = args ? gsi::arg_reader<qsizetype >() (args, heap) : gsi::arg_maker<qsizetype >() (0, heap);
  const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QRegularExpression::MatchType>(heap, QRegularExpression::NormalMatch), heap);
  QFlags<QRegularExpression::MatchOption> arg4 = args ? gsi::arg_reader<QFlags<QRegularExpression::MatchOption> >() (args, heap) : gsi::arg_maker<QFlags<QRegularExpression::MatchOption> >() (QRegularExpression::NoMatchOption, heap);
  ret.write<QRegularExpressionMatchIterator > ((QRegularExpressionMatchIterator)((QRegularExpression *)cls)->globalMatch (arg1, arg2, qt_gsi::QtToCppAdaptor<QRegularExpression::MatchType>(arg3).cref(), arg4));
}


// bool QRegularExpression::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QRegularExpression *)cls)->isValid ());
}


// QRegularExpressionMatch QRegularExpression::match(const QString &subject, qsizetype offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions)


static void _init_f_match_c10730 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("subject");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("offset", true, "0");
  decl->add_arg<qsizetype > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("matchType", true, "QRegularExpression::NormalMatch");
  decl->add_arg<const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("matchOptions", true, "QRegularExpression::NoMatchOption");
  decl->add_arg<QFlags<QRegularExpression::MatchOption> > (argspec_3);
  decl->set_return<QRegularExpressionMatch > ();
}

static void _call_f_match_c10730 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  qsizetype arg2 = args ? gsi::arg_reader<qsizetype >() (args, heap) : gsi::arg_maker<qsizetype >() (0, heap);
  const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QRegularExpression::MatchType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QRegularExpression::MatchType>(heap, QRegularExpression::NormalMatch), heap);
  QFlags<QRegularExpression::MatchOption> arg4 = args ? gsi::arg_reader<QFlags<QRegularExpression::MatchOption> >() (args, heap) : gsi::arg_maker<QFlags<QRegularExpression::MatchOption> >() (QRegularExpression::NoMatchOption, heap);
  ret.write<QRegularExpressionMatch > ((QRegularExpressionMatch)((QRegularExpression *)cls)->match (arg1, arg2, qt_gsi::QtToCppAdaptor<QRegularExpression::MatchType>(arg3).cref(), arg4));
}


// QStringList QRegularExpression::namedCaptureGroups()


static void _init_f_namedCaptureGroups_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_namedCaptureGroups_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QRegularExpression *)cls)->namedCaptureGroups ());
}


// bool QRegularExpression::operator!=(const QRegularExpression &re)


static void _init_f_operator_excl__eq__c3188 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("re");
  decl->add_arg<const QRegularExpression & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3188 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegularExpression &arg1 = gsi::arg_reader<const QRegularExpression & >() (args, heap);
  ret.write<bool > ((bool)((QRegularExpression *)cls)->operator!= (arg1));
}


// QRegularExpression &QRegularExpression::operator=(const QRegularExpression &re)


static void _init_f_operator_eq__3188 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("re");
  decl->add_arg<const QRegularExpression & > (argspec_0);
  decl->set_return<QRegularExpression & > ();
}

static void _call_f_operator_eq__3188 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegularExpression &arg1 = gsi::arg_reader<const QRegularExpression & >() (args, heap);
  ret.write<QRegularExpression & > ((QRegularExpression &)((QRegularExpression *)cls)->operator= (arg1));
}


// bool QRegularExpression::operator==(const QRegularExpression &re)


static void _init_f_operator_eq__eq__c3188 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("re");
  decl->add_arg<const QRegularExpression & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3188 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegularExpression &arg1 = gsi::arg_reader<const QRegularExpression & >() (args, heap);
  ret.write<bool > ((bool)((QRegularExpression *)cls)->operator== (arg1));
}


// void QRegularExpression::optimize()


static void _init_f_optimize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_optimize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRegularExpression *)cls)->optimize ();
}


// QString QRegularExpression::pattern()


static void _init_f_pattern_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_pattern_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QRegularExpression *)cls)->pattern ());
}


// qsizetype QRegularExpression::patternErrorOffset()


static void _init_f_patternErrorOffset_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qsizetype > ();
}

static void _call_f_patternErrorOffset_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qsizetype > ((qsizetype)((QRegularExpression *)cls)->patternErrorOffset ());
}


// QFlags<QRegularExpression::PatternOption> QRegularExpression::patternOptions()


static void _init_f_patternOptions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QRegularExpression::PatternOption> > ();
}

static void _call_f_patternOptions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QRegularExpression::PatternOption> > ((QFlags<QRegularExpression::PatternOption>)((QRegularExpression *)cls)->patternOptions ());
}


// void QRegularExpression::setPattern(const QString &pattern)


static void _init_f_setPattern_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pattern");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPattern_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRegularExpression *)cls)->setPattern (arg1);
}


// void QRegularExpression::setPatternOptions(QFlags<QRegularExpression::PatternOption> options)


static void _init_f_setPatternOptions_4490 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("options");
  decl->add_arg<QFlags<QRegularExpression::PatternOption> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPatternOptions_4490 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QRegularExpression::PatternOption> arg1 = gsi::arg_reader<QFlags<QRegularExpression::PatternOption> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRegularExpression *)cls)->setPatternOptions (arg1);
}


// void QRegularExpression::swap(QRegularExpression &other)


static void _init_f_swap_2493 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QRegularExpression & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2493 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QRegularExpression &arg1 = gsi::arg_reader<QRegularExpression & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRegularExpression *)cls)->swap (arg1);
}


// static QString QRegularExpression::anchoredPattern(const QString &expression)


static void _init_f_anchoredPattern_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("expression");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_anchoredPattern_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)QRegularExpression::anchoredPattern (arg1));
}


// static QString QRegularExpression::escape(const QString &str)


static void _init_f_escape_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("str");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_escape_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)QRegularExpression::escape (arg1));
}


// static QString QRegularExpression::wildcardToRegularExpression(const QString &str, QFlags<QRegularExpression::WildcardConversionOption> options)


static void _init_f_wildcardToRegularExpression_7545 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("str");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("options", true, "QRegularExpression::DefaultWildcardConversion");
  decl->add_arg<QFlags<QRegularExpression::WildcardConversionOption> > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_wildcardToRegularExpression_7545 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QFlags<QRegularExpression::WildcardConversionOption> arg2 = args ? gsi::arg_reader<QFlags<QRegularExpression::WildcardConversionOption> >() (args, heap) : gsi::arg_maker<QFlags<QRegularExpression::WildcardConversionOption> >() (QRegularExpression::DefaultWildcardConversion, heap);
  ret.write<QString > ((QString)QRegularExpression::wildcardToRegularExpression (arg1, arg2));
}



namespace gsi
{

static gsi::Methods methods_QRegularExpression () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRegularExpression::QRegularExpression()\nThis method creates an object of class QRegularExpression.", &_init_ctor_QRegularExpression_0, &_call_ctor_QRegularExpression_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRegularExpression::QRegularExpression(const QString &pattern, QFlags<QRegularExpression::PatternOption> options)\nThis method creates an object of class QRegularExpression.", &_init_ctor_QRegularExpression_6407, &_call_ctor_QRegularExpression_6407);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRegularExpression::QRegularExpression(const QRegularExpression &re)\nThis method creates an object of class QRegularExpression.", &_init_ctor_QRegularExpression_3188, &_call_ctor_QRegularExpression_3188);
  methods += new qt_gsi::GenericMethod ("captureCount", "@brief Method int QRegularExpression::captureCount()\n", true, &_init_f_captureCount_c0, &_call_f_captureCount_c0);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Method QString QRegularExpression::errorString()\n", true, &_init_f_errorString_c0, &_call_f_errorString_c0);
  methods += new qt_gsi::GenericMethod ("globalMatch", "@brief Method QRegularExpressionMatchIterator QRegularExpression::globalMatch(const QString &subject, qsizetype offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions)\n", true, &_init_f_globalMatch_c10730, &_call_f_globalMatch_c10730);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QRegularExpression::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("match", "@brief Method QRegularExpressionMatch QRegularExpression::match(const QString &subject, qsizetype offset, QRegularExpression::MatchType matchType, QFlags<QRegularExpression::MatchOption> matchOptions)\n", true, &_init_f_match_c10730, &_call_f_match_c10730);
  methods += new qt_gsi::GenericMethod ("namedCaptureGroups", "@brief Method QStringList QRegularExpression::namedCaptureGroups()\n", true, &_init_f_namedCaptureGroups_c0, &_call_f_namedCaptureGroups_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QRegularExpression::operator!=(const QRegularExpression &re)\n", true, &_init_f_operator_excl__eq__c3188, &_call_f_operator_excl__eq__c3188);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QRegularExpression &QRegularExpression::operator=(const QRegularExpression &re)\n", false, &_init_f_operator_eq__3188, &_call_f_operator_eq__3188);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QRegularExpression::operator==(const QRegularExpression &re)\n", true, &_init_f_operator_eq__eq__c3188, &_call_f_operator_eq__eq__c3188);
  methods += new qt_gsi::GenericMethod ("optimize", "@brief Method void QRegularExpression::optimize()\n", true, &_init_f_optimize_c0, &_call_f_optimize_c0);
  methods += new qt_gsi::GenericMethod (":pattern", "@brief Method QString QRegularExpression::pattern()\n", true, &_init_f_pattern_c0, &_call_f_pattern_c0);
  methods += new qt_gsi::GenericMethod ("patternErrorOffset", "@brief Method qsizetype QRegularExpression::patternErrorOffset()\n", true, &_init_f_patternErrorOffset_c0, &_call_f_patternErrorOffset_c0);
  methods += new qt_gsi::GenericMethod (":patternOptions", "@brief Method QFlags<QRegularExpression::PatternOption> QRegularExpression::patternOptions()\n", true, &_init_f_patternOptions_c0, &_call_f_patternOptions_c0);
  methods += new qt_gsi::GenericMethod ("setPattern|pattern=", "@brief Method void QRegularExpression::setPattern(const QString &pattern)\n", false, &_init_f_setPattern_2025, &_call_f_setPattern_2025);
  methods += new qt_gsi::GenericMethod ("setPatternOptions|patternOptions=", "@brief Method void QRegularExpression::setPatternOptions(QFlags<QRegularExpression::PatternOption> options)\n", false, &_init_f_setPatternOptions_4490, &_call_f_setPatternOptions_4490);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QRegularExpression::swap(QRegularExpression &other)\n", false, &_init_f_swap_2493, &_call_f_swap_2493);
  methods += new qt_gsi::GenericStaticMethod ("anchoredPattern", "@brief Static method QString QRegularExpression::anchoredPattern(const QString &expression)\nThis method is static and can be called without an instance.", &_init_f_anchoredPattern_2025, &_call_f_anchoredPattern_2025);
  methods += new qt_gsi::GenericStaticMethod ("escape", "@brief Static method QString QRegularExpression::escape(const QString &str)\nThis method is static and can be called without an instance.", &_init_f_escape_2025, &_call_f_escape_2025);
  methods += new qt_gsi::GenericStaticMethod ("wildcardToRegularExpression", "@brief Static method QString QRegularExpression::wildcardToRegularExpression(const QString &str, QFlags<QRegularExpression::WildcardConversionOption> options)\nThis method is static and can be called without an instance.", &_init_f_wildcardToRegularExpression_7545, &_call_f_wildcardToRegularExpression_7545);
  return methods;
}

gsi::Class<QRegularExpression> decl_QRegularExpression ("QtCore", "QRegularExpression",
  methods_QRegularExpression (),
  "@qt\n@brief Binding of QRegularExpression");


GSI_QTCORE_PUBLIC gsi::Class<QRegularExpression> &qtdecl_QRegularExpression () { return decl_QRegularExpression; }

}


//  Implementation of the enum wrapper class for QRegularExpression::MatchOption
namespace qt_gsi
{

static gsi::Enum<QRegularExpression::MatchOption> decl_QRegularExpression_MatchOption_Enum ("QtCore", "QRegularExpression_MatchOption",
    gsi::enum_const ("NoMatchOption", QRegularExpression::NoMatchOption, "@brief Enum constant QRegularExpression::NoMatchOption") +
    gsi::enum_const ("AnchorAtOffsetMatchOption", QRegularExpression::AnchorAtOffsetMatchOption, "@brief Enum constant QRegularExpression::AnchorAtOffsetMatchOption") +
    gsi::enum_const ("AnchoredMatchOption", QRegularExpression::AnchoredMatchOption, "@brief Enum constant QRegularExpression::AnchoredMatchOption") +
    gsi::enum_const ("DontCheckSubjectStringMatchOption", QRegularExpression::DontCheckSubjectStringMatchOption, "@brief Enum constant QRegularExpression::DontCheckSubjectStringMatchOption"),
  "@qt\n@brief This class represents the QRegularExpression::MatchOption enum");

static gsi::QFlagsClass<QRegularExpression::MatchOption > decl_QRegularExpression_MatchOption_Enums ("QtCore", "QRegularExpression_QFlags_MatchOption",
  "@qt\n@brief This class represents the QFlags<QRegularExpression::MatchOption> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QRegularExpression> inject_QRegularExpression_MatchOption_Enum_in_parent (decl_QRegularExpression_MatchOption_Enum.defs ());
static gsi::ClassExt<QRegularExpression> decl_QRegularExpression_MatchOption_Enum_as_child (decl_QRegularExpression_MatchOption_Enum, "MatchOption");
static gsi::ClassExt<QRegularExpression> decl_QRegularExpression_MatchOption_Enums_as_child (decl_QRegularExpression_MatchOption_Enums, "QFlags_MatchOption");

}


//  Implementation of the enum wrapper class for QRegularExpression::MatchType
namespace qt_gsi
{

static gsi::Enum<QRegularExpression::MatchType> decl_QRegularExpression_MatchType_Enum ("QtCore", "QRegularExpression_MatchType",
    gsi::enum_const ("NormalMatch", QRegularExpression::NormalMatch, "@brief Enum constant QRegularExpression::NormalMatch") +
    gsi::enum_const ("PartialPreferCompleteMatch", QRegularExpression::PartialPreferCompleteMatch, "@brief Enum constant QRegularExpression::PartialPreferCompleteMatch") +
    gsi::enum_const ("PartialPreferFirstMatch", QRegularExpression::PartialPreferFirstMatch, "@brief Enum constant QRegularExpression::PartialPreferFirstMatch") +
    gsi::enum_const ("NoMatch", QRegularExpression::NoMatch, "@brief Enum constant QRegularExpression::NoMatch"),
  "@qt\n@brief This class represents the QRegularExpression::MatchType enum");

static gsi::QFlagsClass<QRegularExpression::MatchType > decl_QRegularExpression_MatchType_Enums ("QtCore", "QRegularExpression_QFlags_MatchType",
  "@qt\n@brief This class represents the QFlags<QRegularExpression::MatchType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QRegularExpression> inject_QRegularExpression_MatchType_Enum_in_parent (decl_QRegularExpression_MatchType_Enum.defs ());
static gsi::ClassExt<QRegularExpression> decl_QRegularExpression_MatchType_Enum_as_child (decl_QRegularExpression_MatchType_Enum, "MatchType");
static gsi::ClassExt<QRegularExpression> decl_QRegularExpression_MatchType_Enums_as_child (decl_QRegularExpression_MatchType_Enums, "QFlags_MatchType");

}


//  Implementation of the enum wrapper class for QRegularExpression::PatternOption
namespace qt_gsi
{

static gsi::Enum<QRegularExpression::PatternOption> decl_QRegularExpression_PatternOption_Enum ("QtCore", "QRegularExpression_PatternOption",
    gsi::enum_const ("NoPatternOption", QRegularExpression::NoPatternOption, "@brief Enum constant QRegularExpression::NoPatternOption") +
    gsi::enum_const ("CaseInsensitiveOption", QRegularExpression::CaseInsensitiveOption, "@brief Enum constant QRegularExpression::CaseInsensitiveOption") +
    gsi::enum_const ("DotMatchesEverythingOption", QRegularExpression::DotMatchesEverythingOption, "@brief Enum constant QRegularExpression::DotMatchesEverythingOption") +
    gsi::enum_const ("MultilineOption", QRegularExpression::MultilineOption, "@brief Enum constant QRegularExpression::MultilineOption") +
    gsi::enum_const ("ExtendedPatternSyntaxOption", QRegularExpression::ExtendedPatternSyntaxOption, "@brief Enum constant QRegularExpression::ExtendedPatternSyntaxOption") +
    gsi::enum_const ("InvertedGreedinessOption", QRegularExpression::InvertedGreedinessOption, "@brief Enum constant QRegularExpression::InvertedGreedinessOption") +
    gsi::enum_const ("DontCaptureOption", QRegularExpression::DontCaptureOption, "@brief Enum constant QRegularExpression::DontCaptureOption") +
    gsi::enum_const ("UseUnicodePropertiesOption", QRegularExpression::UseUnicodePropertiesOption, "@brief Enum constant QRegularExpression::UseUnicodePropertiesOption"),
  "@qt\n@brief This class represents the QRegularExpression::PatternOption enum");

static gsi::QFlagsClass<QRegularExpression::PatternOption > decl_QRegularExpression_PatternOption_Enums ("QtCore", "QRegularExpression_QFlags_PatternOption",
  "@qt\n@brief This class represents the QFlags<QRegularExpression::PatternOption> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QRegularExpression> inject_QRegularExpression_PatternOption_Enum_in_parent (decl_QRegularExpression_PatternOption_Enum.defs ());
static gsi::ClassExt<QRegularExpression> decl_QRegularExpression_PatternOption_Enum_as_child (decl_QRegularExpression_PatternOption_Enum, "PatternOption");
static gsi::ClassExt<QRegularExpression> decl_QRegularExpression_PatternOption_Enums_as_child (decl_QRegularExpression_PatternOption_Enums, "QFlags_PatternOption");

}


//  Implementation of the enum wrapper class for QRegularExpression::WildcardConversionOption
namespace qt_gsi
{

static gsi::Enum<QRegularExpression::WildcardConversionOption> decl_QRegularExpression_WildcardConversionOption_Enum ("QtCore", "QRegularExpression_WildcardConversionOption",
    gsi::enum_const ("DefaultWildcardConversion", QRegularExpression::DefaultWildcardConversion, "@brief Enum constant QRegularExpression::DefaultWildcardConversion") +
    gsi::enum_const ("UnanchoredWildcardConversion", QRegularExpression::UnanchoredWildcardConversion, "@brief Enum constant QRegularExpression::UnanchoredWildcardConversion"),
  "@qt\n@brief This class represents the QRegularExpression::WildcardConversionOption enum");

static gsi::QFlagsClass<QRegularExpression::WildcardConversionOption > decl_QRegularExpression_WildcardConversionOption_Enums ("QtCore", "QRegularExpression_QFlags_WildcardConversionOption",
  "@qt\n@brief This class represents the QFlags<QRegularExpression::WildcardConversionOption> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QRegularExpression> inject_QRegularExpression_WildcardConversionOption_Enum_in_parent (decl_QRegularExpression_WildcardConversionOption_Enum.defs ());
static gsi::ClassExt<QRegularExpression> decl_QRegularExpression_WildcardConversionOption_Enum_as_child (decl_QRegularExpression_WildcardConversionOption_Enum, "WildcardConversionOption");
static gsi::ClassExt<QRegularExpression> decl_QRegularExpression_WildcardConversionOption_Enums_as_child (decl_QRegularExpression_WildcardConversionOption_Enums, "QFlags_WildcardConversionOption");

}

