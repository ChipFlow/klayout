
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
*  @file gsiDeclQDateTime.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDateTime>
#include <QDate>
#include <QTime>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDateTime

//  Constructor QDateTime::QDateTime()


static void _init_ctor_QDateTime_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDateTime> ();
}

static void _call_ctor_QDateTime_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDateTime *> (new QDateTime ());
}


//  Constructor QDateTime::QDateTime(const QDate &)


static void _init_ctor_QDateTime_1776 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDate & > (argspec_0);
  decl->set_return_new<QDateTime> ();
}

static void _call_ctor_QDateTime_1776 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDate &arg1 = args.read<const QDate & > (heap);
  ret.write<QDateTime *> (new QDateTime (arg1));
}


//  Constructor QDateTime::QDateTime(const QDate &, const QTime &, Qt::TimeSpec spec)


static void _init_ctor_QDateTime_4896 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDate & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<const QTime & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("spec", true, "Qt::LocalTime");
  decl->add_arg<const qt_gsi::Converter<Qt::TimeSpec>::target_type & > (argspec_2);
  decl->set_return_new<QDateTime> ();
}

static void _call_ctor_QDateTime_4896 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDate &arg1 = args.read<const QDate & > (heap);
  const QTime &arg2 = args.read<const QTime & > (heap);
  const qt_gsi::Converter<Qt::TimeSpec>::target_type & arg3 = args ? args.read<const qt_gsi::Converter<Qt::TimeSpec>::target_type & > (heap) : (const qt_gsi::Converter<Qt::TimeSpec>::target_type &)(qt_gsi::CppToQtReadAdaptor<Qt::TimeSpec>(heap, Qt::LocalTime));
  ret.write<QDateTime *> (new QDateTime (arg1, arg2, qt_gsi::QtToCppAdaptor<Qt::TimeSpec>(arg3).cref()));
}


//  Constructor QDateTime::QDateTime(const QDateTime &other)


static void _init_ctor_QDateTime_2175 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return_new<QDateTime> ();
}

static void _call_ctor_QDateTime_2175 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = args.read<const QDateTime & > (heap);
  ret.write<QDateTime *> (new QDateTime (arg1));
}


// QDateTime QDateTime::addDays(int days)


static void _init_f_addDays_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("days");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QDateTime > ();
}

static void _call_f_addDays_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QDateTime > ((QDateTime)((QDateTime *)cls)->addDays (arg1));
}


// QDateTime QDateTime::addMSecs(qint64 msecs)


static void _init_f_addMSecs_c986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msecs");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<QDateTime > ();
}

static void _call_f_addMSecs_c986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = args.read<qint64 > (heap);
  ret.write<QDateTime > ((QDateTime)((QDateTime *)cls)->addMSecs (arg1));
}


// QDateTime QDateTime::addMonths(int months)


static void _init_f_addMonths_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("months");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QDateTime > ();
}

static void _call_f_addMonths_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QDateTime > ((QDateTime)((QDateTime *)cls)->addMonths (arg1));
}


// QDateTime QDateTime::addSecs(int secs)


static void _init_f_addSecs_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("secs");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QDateTime > ();
}

static void _call_f_addSecs_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QDateTime > ((QDateTime)((QDateTime *)cls)->addSecs (arg1));
}


// QDateTime QDateTime::addYears(int years)


static void _init_f_addYears_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("years");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QDateTime > ();
}

static void _call_f_addYears_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QDateTime > ((QDateTime)((QDateTime *)cls)->addYears (arg1));
}


// QDate QDateTime::date()


static void _init_f_date_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDate > ();
}

static void _call_f_date_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDate > ((QDate)((QDateTime *)cls)->date ());
}


// int QDateTime::daysTo(const QDateTime &)


static void _init_f_daysTo_c2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_daysTo_c2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = args.read<const QDateTime & > (heap);
  ret.write<int > ((int)((QDateTime *)cls)->daysTo (arg1));
}


// bool QDateTime::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QDateTime *)cls)->isNull ());
}


// bool QDateTime::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QDateTime *)cls)->isValid ());
}


// bool QDateTime::operator!=(const QDateTime &other)


static void _init_f_operator_excl__eq__c2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = args.read<const QDateTime & > (heap);
  ret.write<bool > ((bool)((QDateTime *)cls)->operator!= (arg1));
}


// bool QDateTime::operator<(const QDateTime &other)


static void _init_f_operator_lt__c2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__c2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = args.read<const QDateTime & > (heap);
  ret.write<bool > ((bool)((QDateTime *)cls)->operator< (arg1));
}


// bool QDateTime::operator<=(const QDateTime &other)


static void _init_f_operator_lt__eq__c2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__eq__c2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = args.read<const QDateTime & > (heap);
  ret.write<bool > ((bool)((QDateTime *)cls)->operator<= (arg1));
}


// QDateTime &QDateTime::operator=(const QDateTime &other)


static void _init_f_operator_eq__2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<QDateTime & > ();
}

static void _call_f_operator_eq__2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = args.read<const QDateTime & > (heap);
  ret.write<QDateTime & > ((QDateTime &)((QDateTime *)cls)->operator= (arg1));
}


// bool QDateTime::operator==(const QDateTime &other)


static void _init_f_operator_eq__eq__c2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = args.read<const QDateTime & > (heap);
  ret.write<bool > ((bool)((QDateTime *)cls)->operator== (arg1));
}


// bool QDateTime::operator>(const QDateTime &other)


static void _init_f_operator_gt__c2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_gt__c2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = args.read<const QDateTime & > (heap);
  ret.write<bool > ((bool)((QDateTime *)cls)->operator> (arg1));
}


// bool QDateTime::operator>=(const QDateTime &other)


static void _init_f_operator_gt__eq__c2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_gt__eq__c2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = args.read<const QDateTime & > (heap);
  ret.write<bool > ((bool)((QDateTime *)cls)->operator>= (arg1));
}


// int QDateTime::secsTo(const QDateTime &)


static void _init_f_secsTo_c2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_secsTo_c2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = args.read<const QDateTime & > (heap);
  ret.write<int > ((int)((QDateTime *)cls)->secsTo (arg1));
}


// void QDateTime::setDate(const QDate &date)


static void _init_f_setDate_1776 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("date");
  decl->add_arg<const QDate & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDate_1776 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDate &arg1 = args.read<const QDate & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDateTime *)cls)->setDate (arg1);
}


// void QDateTime::setTime(const QTime &time)


static void _init_f_setTime_1793 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("time");
  decl->add_arg<const QTime & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTime_1793 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTime &arg1 = args.read<const QTime & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDateTime *)cls)->setTime (arg1);
}


// void QDateTime::setTimeSpec(Qt::TimeSpec spec)


static void _init_f_setTimeSpec_1543 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("spec");
  decl->add_arg<const qt_gsi::Converter<Qt::TimeSpec>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTimeSpec_1543 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::TimeSpec>::target_type & arg1 = args.read<const qt_gsi::Converter<Qt::TimeSpec>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDateTime *)cls)->setTimeSpec (qt_gsi::QtToCppAdaptor<Qt::TimeSpec>(arg1).cref());
}


// void QDateTime::setTime_t(unsigned int secsSince1Jan1970UTC)


static void _init_f_setTime_t_1772 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("secsSince1Jan1970UTC");
  decl->add_arg<unsigned int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTime_t_1772 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  unsigned int arg1 = args.read<unsigned int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDateTime *)cls)->setTime_t (arg1);
}


// void QDateTime::setUtcOffset(int seconds)


static void _init_f_setUtcOffset_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("seconds");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setUtcOffset_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDateTime *)cls)->setUtcOffset (arg1);
}


// QTime QDateTime::time()


static void _init_f_time_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTime > ();
}

static void _call_f_time_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTime > ((QTime)((QDateTime *)cls)->time ());
}


// Qt::TimeSpec QDateTime::timeSpec()


static void _init_f_timeSpec_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::TimeSpec>::target_type > ();
}

static void _call_f_timeSpec_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::TimeSpec>::target_type > ((qt_gsi::Converter<Qt::TimeSpec>::target_type)qt_gsi::CppToQtAdaptor<Qt::TimeSpec>(((QDateTime *)cls)->timeSpec ()));
}


// QDateTime QDateTime::toLocalTime()


static void _init_f_toLocalTime_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDateTime > ();
}

static void _call_f_toLocalTime_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDateTime > ((QDateTime)((QDateTime *)cls)->toLocalTime ());
}


// QString QDateTime::toString(Qt::DateFormat f)


static void _init_f_toString_c1748 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("f", true, "Qt::TextDate");
  decl->add_arg<const qt_gsi::Converter<Qt::DateFormat>::target_type & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_toString_c1748 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::DateFormat>::target_type & arg1 = args ? args.read<const qt_gsi::Converter<Qt::DateFormat>::target_type & > (heap) : (const qt_gsi::Converter<Qt::DateFormat>::target_type &)(qt_gsi::CppToQtReadAdaptor<Qt::DateFormat>(heap, Qt::TextDate));
  ret.write<QString > ((QString)((QDateTime *)cls)->toString (qt_gsi::QtToCppAdaptor<Qt::DateFormat>(arg1).cref()));
}


// QString QDateTime::toString(const QString &format)


static void _init_f_toString_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_toString_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QDateTime *)cls)->toString (arg1));
}


// QDateTime QDateTime::toTimeSpec(Qt::TimeSpec spec)


static void _init_f_toTimeSpec_c1543 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("spec");
  decl->add_arg<const qt_gsi::Converter<Qt::TimeSpec>::target_type & > (argspec_0);
  decl->set_return<QDateTime > ();
}

static void _call_f_toTimeSpec_c1543 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::TimeSpec>::target_type & arg1 = args.read<const qt_gsi::Converter<Qt::TimeSpec>::target_type & > (heap);
  ret.write<QDateTime > ((QDateTime)((QDateTime *)cls)->toTimeSpec (qt_gsi::QtToCppAdaptor<Qt::TimeSpec>(arg1).cref()));
}


// unsigned int QDateTime::toTime_t()


static void _init_f_toTime_t_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<unsigned int > ();
}

static void _call_f_toTime_t_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<unsigned int > ((unsigned int)((QDateTime *)cls)->toTime_t ());
}


// QDateTime QDateTime::toUTC()


static void _init_f_toUTC_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDateTime > ();
}

static void _call_f_toUTC_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDateTime > ((QDateTime)((QDateTime *)cls)->toUTC ());
}


// int QDateTime::utcOffset()


static void _init_f_utcOffset_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_utcOffset_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDateTime *)cls)->utcOffset ());
}


// static QDateTime QDateTime::currentDateTime()


static void _init_f_currentDateTime_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QDateTime > ();
}

static void _call_f_currentDateTime_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDateTime > ((QDateTime)QDateTime::currentDateTime ());
}


// static QDateTime QDateTime::fromString(const QString &s, Qt::DateFormat f)


static void _init_f_fromString_3665 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("f", true, "Qt::TextDate");
  decl->add_arg<const qt_gsi::Converter<Qt::DateFormat>::target_type & > (argspec_1);
  decl->set_return<QDateTime > ();
}

static void _call_f_fromString_3665 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const qt_gsi::Converter<Qt::DateFormat>::target_type & arg2 = args ? args.read<const qt_gsi::Converter<Qt::DateFormat>::target_type & > (heap) : (const qt_gsi::Converter<Qt::DateFormat>::target_type &)(qt_gsi::CppToQtReadAdaptor<Qt::DateFormat>(heap, Qt::TextDate));
  ret.write<QDateTime > ((QDateTime)QDateTime::fromString (arg1, qt_gsi::QtToCppAdaptor<Qt::DateFormat>(arg2).cref()));
}


// static QDateTime QDateTime::fromString(const QString &s, const QString &format)


static void _init_f_fromString_3942 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QDateTime > ();
}

static void _call_f_fromString_3942 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<QDateTime > ((QDateTime)QDateTime::fromString (arg1, arg2));
}


// static QDateTime QDateTime::fromTime_t(unsigned int secsSince1Jan1970UTC)


static void _init_f_fromTime_t_1772 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("secsSince1Jan1970UTC");
  decl->add_arg<unsigned int > (argspec_0);
  decl->set_return<QDateTime > ();
}

static void _call_f_fromTime_t_1772 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  unsigned int arg1 = args.read<unsigned int > (heap);
  ret.write<QDateTime > ((QDateTime)QDateTime::fromTime_t (arg1));
}



namespace gsi
{

static gsi::Methods methods_QDateTime () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDateTime::QDateTime()\nThis method creates an object of class QDateTime.", &_init_ctor_QDateTime_0, &_call_ctor_QDateTime_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDateTime::QDateTime(const QDate &)\nThis method creates an object of class QDateTime.", &_init_ctor_QDateTime_1776, &_call_ctor_QDateTime_1776);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDateTime::QDateTime(const QDate &, const QTime &, Qt::TimeSpec spec)\nThis method creates an object of class QDateTime.", &_init_ctor_QDateTime_4896, &_call_ctor_QDateTime_4896);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDateTime::QDateTime(const QDateTime &other)\nThis method creates an object of class QDateTime.", &_init_ctor_QDateTime_2175, &_call_ctor_QDateTime_2175);
  methods += new qt_gsi::GenericMethod ("addDays", "@brief Method QDateTime QDateTime::addDays(int days)\n", true, &_init_f_addDays_c767, &_call_f_addDays_c767);
  methods += new qt_gsi::GenericMethod ("addMSecs", "@brief Method QDateTime QDateTime::addMSecs(qint64 msecs)\n", true, &_init_f_addMSecs_c986, &_call_f_addMSecs_c986);
  methods += new qt_gsi::GenericMethod ("addMonths", "@brief Method QDateTime QDateTime::addMonths(int months)\n", true, &_init_f_addMonths_c767, &_call_f_addMonths_c767);
  methods += new qt_gsi::GenericMethod ("addSecs", "@brief Method QDateTime QDateTime::addSecs(int secs)\n", true, &_init_f_addSecs_c767, &_call_f_addSecs_c767);
  methods += new qt_gsi::GenericMethod ("addYears", "@brief Method QDateTime QDateTime::addYears(int years)\n", true, &_init_f_addYears_c767, &_call_f_addYears_c767);
  methods += new qt_gsi::GenericMethod (":date", "@brief Method QDate QDateTime::date()\n", true, &_init_f_date_c0, &_call_f_date_c0);
  methods += new qt_gsi::GenericMethod ("daysTo", "@brief Method int QDateTime::daysTo(const QDateTime &)\n", true, &_init_f_daysTo_c2175, &_call_f_daysTo_c2175);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QDateTime::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QDateTime::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QDateTime::operator!=(const QDateTime &other)\n", true, &_init_f_operator_excl__eq__c2175, &_call_f_operator_excl__eq__c2175);
  methods += new qt_gsi::GenericMethod ("<", "@brief Method bool QDateTime::operator<(const QDateTime &other)\n", true, &_init_f_operator_lt__c2175, &_call_f_operator_lt__c2175);
  methods += new qt_gsi::GenericMethod ("<=", "@brief Method bool QDateTime::operator<=(const QDateTime &other)\n", true, &_init_f_operator_lt__eq__c2175, &_call_f_operator_lt__eq__c2175);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDateTime &QDateTime::operator=(const QDateTime &other)\n", false, &_init_f_operator_eq__2175, &_call_f_operator_eq__2175);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QDateTime::operator==(const QDateTime &other)\n", true, &_init_f_operator_eq__eq__c2175, &_call_f_operator_eq__eq__c2175);
  methods += new qt_gsi::GenericMethod (">", "@brief Method bool QDateTime::operator>(const QDateTime &other)\n", true, &_init_f_operator_gt__c2175, &_call_f_operator_gt__c2175);
  methods += new qt_gsi::GenericMethod (">=", "@brief Method bool QDateTime::operator>=(const QDateTime &other)\n", true, &_init_f_operator_gt__eq__c2175, &_call_f_operator_gt__eq__c2175);
  methods += new qt_gsi::GenericMethod ("secsTo", "@brief Method int QDateTime::secsTo(const QDateTime &)\n", true, &_init_f_secsTo_c2175, &_call_f_secsTo_c2175);
  methods += new qt_gsi::GenericMethod ("setDate|date=", "@brief Method void QDateTime::setDate(const QDate &date)\n", false, &_init_f_setDate_1776, &_call_f_setDate_1776);
  methods += new qt_gsi::GenericMethod ("setTime|time=", "@brief Method void QDateTime::setTime(const QTime &time)\n", false, &_init_f_setTime_1793, &_call_f_setTime_1793);
  methods += new qt_gsi::GenericMethod ("setTimeSpec|timeSpec=", "@brief Method void QDateTime::setTimeSpec(Qt::TimeSpec spec)\n", false, &_init_f_setTimeSpec_1543, &_call_f_setTimeSpec_1543);
  methods += new qt_gsi::GenericMethod ("setTime_t", "@brief Method void QDateTime::setTime_t(unsigned int secsSince1Jan1970UTC)\n", false, &_init_f_setTime_t_1772, &_call_f_setTime_t_1772);
  methods += new qt_gsi::GenericMethod ("setUtcOffset|utcOffset=", "@brief Method void QDateTime::setUtcOffset(int seconds)\n", false, &_init_f_setUtcOffset_767, &_call_f_setUtcOffset_767);
  methods += new qt_gsi::GenericMethod (":time", "@brief Method QTime QDateTime::time()\n", true, &_init_f_time_c0, &_call_f_time_c0);
  methods += new qt_gsi::GenericMethod (":timeSpec", "@brief Method Qt::TimeSpec QDateTime::timeSpec()\n", true, &_init_f_timeSpec_c0, &_call_f_timeSpec_c0);
  methods += new qt_gsi::GenericMethod ("toLocalTime", "@brief Method QDateTime QDateTime::toLocalTime()\n", true, &_init_f_toLocalTime_c0, &_call_f_toLocalTime_c0);
  methods += new qt_gsi::GenericMethod ("toString", "@brief Method QString QDateTime::toString(Qt::DateFormat f)\n", true, &_init_f_toString_c1748, &_call_f_toString_c1748);
  methods += new qt_gsi::GenericMethod ("toString", "@brief Method QString QDateTime::toString(const QString &format)\n", true, &_init_f_toString_c2025, &_call_f_toString_c2025);
  methods += new qt_gsi::GenericMethod ("toTimeSpec", "@brief Method QDateTime QDateTime::toTimeSpec(Qt::TimeSpec spec)\n", true, &_init_f_toTimeSpec_c1543, &_call_f_toTimeSpec_c1543);
  methods += new qt_gsi::GenericMethod ("toTime_t", "@brief Method unsigned int QDateTime::toTime_t()\n", true, &_init_f_toTime_t_c0, &_call_f_toTime_t_c0);
  methods += new qt_gsi::GenericMethod ("toUTC", "@brief Method QDateTime QDateTime::toUTC()\n", true, &_init_f_toUTC_c0, &_call_f_toUTC_c0);
  methods += new qt_gsi::GenericMethod (":utcOffset", "@brief Method int QDateTime::utcOffset()\n", true, &_init_f_utcOffset_c0, &_call_f_utcOffset_c0);
  methods += new qt_gsi::GenericStaticMethod ("currentDateTime", "@brief Static method QDateTime QDateTime::currentDateTime()\nThis method is static and can be called without an instance.", &_init_f_currentDateTime_0, &_call_f_currentDateTime_0);
  methods += new qt_gsi::GenericStaticMethod ("fromString", "@brief Static method QDateTime QDateTime::fromString(const QString &s, Qt::DateFormat f)\nThis method is static and can be called without an instance.", &_init_f_fromString_3665, &_call_f_fromString_3665);
  methods += new qt_gsi::GenericStaticMethod ("fromString", "@brief Static method QDateTime QDateTime::fromString(const QString &s, const QString &format)\nThis method is static and can be called without an instance.", &_init_f_fromString_3942, &_call_f_fromString_3942);
  methods += new qt_gsi::GenericStaticMethod ("fromTime_t", "@brief Static method QDateTime QDateTime::fromTime_t(unsigned int secsSince1Jan1970UTC)\nThis method is static and can be called without an instance.", &_init_f_fromTime_t_1772, &_call_f_fromTime_t_1772);
  return methods;
}

gsi::Class<QDateTime> decl_QDateTime ("QtCore", "QDateTime",
  methods_QDateTime (),
  "@qt\n@brief Binding of QDateTime");


GSI_QTCORE_PUBLIC gsi::Class<QDateTime> &qtdecl_QDateTime () { return decl_QDateTime; }

}

