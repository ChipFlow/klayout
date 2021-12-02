
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
*  @file gsiDeclQByteArrayView.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QByteArrayView>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QByteArrayView

//  Constructor QByteArrayView::QByteArrayView()


static void _init_ctor_QByteArrayView_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QByteArrayView> ();
}

static void _call_ctor_QByteArrayView_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArrayView *> (new QByteArrayView ());
}


//  Constructor QByteArrayView::QByteArrayView(std::nullptr_t)


static void _init_ctor_QByteArrayView_1879 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<std::nullptr_t > (argspec_0);
  decl->set_return_new<QByteArrayView> ();
}

static void _call_ctor_QByteArrayView_1879 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  std::nullptr_t arg1 = gsi::arg_reader<std::nullptr_t >() (args, heap);
  ret.write<QByteArrayView *> (new QByteArrayView (arg1));
}


// char QByteArrayView::at(qsizetype n)


static void _init_f_at_c1442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<qsizetype > (argspec_0);
  decl->set_return<char > ();
}

static void _call_f_at_c1442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  ret.write<char > ((char)((QByteArrayView *)cls)->at (arg1));
}


// char QByteArrayView::back()


static void _init_f_back_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<char > ();
}

static void _call_f_back_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<char > ((char)((QByteArrayView *)cls)->back ());
}


// const char *QByteArrayView::begin()


static void _init_f_begin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_begin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QByteArrayView *)cls)->begin ());
}


// const char *QByteArrayView::cbegin()


static void _init_f_cbegin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_cbegin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QByteArrayView *)cls)->cbegin ());
}


// const char *QByteArrayView::cend()


static void _init_f_cend_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_cend_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QByteArrayView *)cls)->cend ());
}


// void QByteArrayView::chop(qsizetype n)


static void _init_f_chop_1442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<qsizetype > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_chop_1442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QByteArrayView *)cls)->chop (arg1);
}


// QByteArrayView QByteArrayView::chopped(qsizetype len)


static void _init_f_chopped_c1442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("len");
  decl->add_arg<qsizetype > (argspec_0);
  decl->set_return<QByteArrayView > ();
}

static void _call_f_chopped_c1442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  ret.write<QByteArrayView > ((QByteArrayView)((QByteArrayView *)cls)->chopped (arg1));
}


// int QByteArrayView::compare(QByteArrayView a, Qt::CaseSensitivity cs)


static void _init_f_compare_c4059 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("a");
  decl->add_arg<QByteArrayView > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("cs", true, "Qt::CaseSensitive");
  decl->add_arg<const qt_gsi::Converter<Qt::CaseSensitivity>::target_type & > (argspec_1);
  decl->set_return<int > ();
}

static void _call_f_compare_c4059 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QByteArrayView arg1 = gsi::arg_reader<QByteArrayView >() (args, heap);
  const qt_gsi::Converter<Qt::CaseSensitivity>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::CaseSensitivity>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::CaseSensitivity>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::CaseSensitivity>(heap, Qt::CaseSensitive), heap);
  ret.write<int > ((int)((QByteArrayView *)cls)->compare (arg1, qt_gsi::QtToCppAdaptor<Qt::CaseSensitivity>(arg2).cref()));
}


// const char *QByteArrayView::constData()


static void _init_f_constData_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_constData_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QByteArrayView *)cls)->constData ());
}


// bool QByteArrayView::contains(QByteArrayView a)


static void _init_f_contains_c1843 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("a");
  decl->add_arg<QByteArrayView > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_contains_c1843 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QByteArrayView arg1 = gsi::arg_reader<QByteArrayView >() (args, heap);
  ret.write<bool > ((bool)((QByteArrayView *)cls)->contains (arg1));
}


// bool QByteArrayView::contains(char c)


static void _init_f_contains_c850 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<char > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_contains_c850 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  char arg1 = gsi::arg_reader<char >() (args, heap);
  ret.write<bool > ((bool)((QByteArrayView *)cls)->contains (arg1));
}


// qsizetype QByteArrayView::count(QByteArrayView a)


static void _init_f_count_c1843 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("a");
  decl->add_arg<QByteArrayView > (argspec_0);
  decl->set_return<qsizetype > ();
}

static void _call_f_count_c1843 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QByteArrayView arg1 = gsi::arg_reader<QByteArrayView >() (args, heap);
  ret.write<qsizetype > ((qsizetype)((QByteArrayView *)cls)->count (arg1));
}


// qsizetype QByteArrayView::count(char ch)


static void _init_f_count_c850 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ch");
  decl->add_arg<char > (argspec_0);
  decl->set_return<qsizetype > ();
}

static void _call_f_count_c850 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  char arg1 = gsi::arg_reader<char >() (args, heap);
  ret.write<qsizetype > ((qsizetype)((QByteArrayView *)cls)->count (arg1));
}


// std::reverse_iterator<QByteArrayView::const_iterator> QByteArrayView::crbegin()


static void _init_f_crbegin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<std::reverse_iterator<QByteArrayView::const_iterator> > ();
}

static void _call_f_crbegin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<std::reverse_iterator<QByteArrayView::const_iterator> > ((std::reverse_iterator<QByteArrayView::const_iterator>)((QByteArrayView *)cls)->crbegin ());
}


// std::reverse_iterator<QByteArrayView::const_iterator> QByteArrayView::crend()


static void _init_f_crend_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<std::reverse_iterator<QByteArrayView::const_iterator> > ();
}

static void _call_f_crend_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<std::reverse_iterator<QByteArrayView::const_iterator> > ((std::reverse_iterator<QByteArrayView::const_iterator>)((QByteArrayView *)cls)->crend ());
}


// const char *QByteArrayView::data()


static void _init_f_data_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_data_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QByteArrayView *)cls)->data ());
}


// bool QByteArrayView::empty()


static void _init_f_empty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_empty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QByteArrayView *)cls)->empty ());
}


// const char *QByteArrayView::end()


static void _init_f_end_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_end_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QByteArrayView *)cls)->end ());
}


// bool QByteArrayView::endsWith(QByteArrayView other)


static void _init_f_endsWith_c1843 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QByteArrayView > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_endsWith_c1843 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QByteArrayView arg1 = gsi::arg_reader<QByteArrayView >() (args, heap);
  ret.write<bool > ((bool)((QByteArrayView *)cls)->endsWith (arg1));
}


// bool QByteArrayView::endsWith(char c)


static void _init_f_endsWith_c850 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<char > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_endsWith_c850 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  char arg1 = gsi::arg_reader<char >() (args, heap);
  ret.write<bool > ((bool)((QByteArrayView *)cls)->endsWith (arg1));
}


// QByteArrayView QByteArrayView::first(qsizetype n)


static void _init_f_first_c1442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<qsizetype > (argspec_0);
  decl->set_return<QByteArrayView > ();
}

static void _call_f_first_c1442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  ret.write<QByteArrayView > ((QByteArrayView)((QByteArrayView *)cls)->first (arg1));
}


// char QByteArrayView::first()


static void _init_f_first_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<char > ();
}

static void _call_f_first_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<char > ((char)((QByteArrayView *)cls)->first ());
}


// char QByteArrayView::front()


static void _init_f_front_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<char > ();
}

static void _call_f_front_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<char > ((char)((QByteArrayView *)cls)->front ());
}


// qsizetype QByteArrayView::indexOf(QByteArrayView a, qsizetype from)


static void _init_f_indexOf_c3177 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("a");
  decl->add_arg<QByteArrayView > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("from", true, "0");
  decl->add_arg<qsizetype > (argspec_1);
  decl->set_return<qsizetype > ();
}

static void _call_f_indexOf_c3177 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QByteArrayView arg1 = gsi::arg_reader<QByteArrayView >() (args, heap);
  qsizetype arg2 = args ? gsi::arg_reader<qsizetype >() (args, heap) : gsi::arg_maker<qsizetype >() (0, heap);
  ret.write<qsizetype > ((qsizetype)((QByteArrayView *)cls)->indexOf (arg1, arg2));
}


// qsizetype QByteArrayView::indexOf(char ch, qsizetype from)


static void _init_f_indexOf_c2184 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ch");
  decl->add_arg<char > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("from", true, "0");
  decl->add_arg<qsizetype > (argspec_1);
  decl->set_return<qsizetype > ();
}

static void _call_f_indexOf_c2184 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  char arg1 = gsi::arg_reader<char >() (args, heap);
  qsizetype arg2 = args ? gsi::arg_reader<qsizetype >() (args, heap) : gsi::arg_maker<qsizetype >() (0, heap);
  ret.write<qsizetype > ((qsizetype)((QByteArrayView *)cls)->indexOf (arg1, arg2));
}


// bool QByteArrayView::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QByteArrayView *)cls)->isEmpty ());
}


// bool QByteArrayView::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QByteArrayView *)cls)->isNull ());
}


// QByteArrayView QByteArrayView::last(qsizetype n)


static void _init_f_last_c1442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<qsizetype > (argspec_0);
  decl->set_return<QByteArrayView > ();
}

static void _call_f_last_c1442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  ret.write<QByteArrayView > ((QByteArrayView)((QByteArrayView *)cls)->last (arg1));
}


// char QByteArrayView::last()


static void _init_f_last_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<char > ();
}

static void _call_f_last_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<char > ((char)((QByteArrayView *)cls)->last ());
}


// qsizetype QByteArrayView::lastIndexOf(QByteArrayView a)


static void _init_f_lastIndexOf_c1843 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("a");
  decl->add_arg<QByteArrayView > (argspec_0);
  decl->set_return<qsizetype > ();
}

static void _call_f_lastIndexOf_c1843 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QByteArrayView arg1 = gsi::arg_reader<QByteArrayView >() (args, heap);
  ret.write<qsizetype > ((qsizetype)((QByteArrayView *)cls)->lastIndexOf (arg1));
}


// qsizetype QByteArrayView::lastIndexOf(QByteArrayView a, qsizetype from)


static void _init_f_lastIndexOf_c3177 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("a");
  decl->add_arg<QByteArrayView > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("from");
  decl->add_arg<qsizetype > (argspec_1);
  decl->set_return<qsizetype > ();
}

static void _call_f_lastIndexOf_c3177 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QByteArrayView arg1 = gsi::arg_reader<QByteArrayView >() (args, heap);
  qsizetype arg2 = gsi::arg_reader<qsizetype >() (args, heap);
  ret.write<qsizetype > ((qsizetype)((QByteArrayView *)cls)->lastIndexOf (arg1, arg2));
}


// qsizetype QByteArrayView::lastIndexOf(char ch, qsizetype from)


static void _init_f_lastIndexOf_c2184 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ch");
  decl->add_arg<char > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("from", true, "-1");
  decl->add_arg<qsizetype > (argspec_1);
  decl->set_return<qsizetype > ();
}

static void _call_f_lastIndexOf_c2184 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  char arg1 = gsi::arg_reader<char >() (args, heap);
  qsizetype arg2 = args ? gsi::arg_reader<qsizetype >() (args, heap) : gsi::arg_maker<qsizetype >() (-1, heap);
  ret.write<qsizetype > ((qsizetype)((QByteArrayView *)cls)->lastIndexOf (arg1, arg2));
}


// qsizetype QByteArrayView::length()


static void _init_f_length_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qsizetype > ();
}

static void _call_f_length_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qsizetype > ((qsizetype)((QByteArrayView *)cls)->length ());
}


// char QByteArrayView::operator[](qsizetype n)


static void _init_f_operator_index__c1442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<qsizetype > (argspec_0);
  decl->set_return<char > ();
}

static void _call_f_operator_index__c1442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  ret.write<char > ((char)((QByteArrayView *)cls)->operator[] (arg1));
}


// std::reverse_iterator<QByteArrayView::const_iterator> QByteArrayView::rbegin()


static void _init_f_rbegin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<std::reverse_iterator<QByteArrayView::const_iterator> > ();
}

static void _call_f_rbegin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<std::reverse_iterator<QByteArrayView::const_iterator> > ((std::reverse_iterator<QByteArrayView::const_iterator>)((QByteArrayView *)cls)->rbegin ());
}


// std::reverse_iterator<QByteArrayView::const_iterator> QByteArrayView::rend()


static void _init_f_rend_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<std::reverse_iterator<QByteArrayView::const_iterator> > ();
}

static void _call_f_rend_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<std::reverse_iterator<QByteArrayView::const_iterator> > ((std::reverse_iterator<QByteArrayView::const_iterator>)((QByteArrayView *)cls)->rend ());
}


// qsizetype QByteArrayView::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qsizetype > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qsizetype > ((qsizetype)((QByteArrayView *)cls)->size ());
}


// QByteArrayView QByteArrayView::sliced(qsizetype pos)


static void _init_f_sliced_c1442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<qsizetype > (argspec_0);
  decl->set_return<QByteArrayView > ();
}

static void _call_f_sliced_c1442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  ret.write<QByteArrayView > ((QByteArrayView)((QByteArrayView *)cls)->sliced (arg1));
}


// QByteArrayView QByteArrayView::sliced(qsizetype pos, qsizetype n)


static void _init_f_sliced_c2776 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<qsizetype > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("n");
  decl->add_arg<qsizetype > (argspec_1);
  decl->set_return<QByteArrayView > ();
}

static void _call_f_sliced_c2776 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  qsizetype arg2 = gsi::arg_reader<qsizetype >() (args, heap);
  ret.write<QByteArrayView > ((QByteArrayView)((QByteArrayView *)cls)->sliced (arg1, arg2));
}


// bool QByteArrayView::startsWith(QByteArrayView other)


static void _init_f_startsWith_c1843 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QByteArrayView > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_startsWith_c1843 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QByteArrayView arg1 = gsi::arg_reader<QByteArrayView >() (args, heap);
  ret.write<bool > ((bool)((QByteArrayView *)cls)->startsWith (arg1));
}


// bool QByteArrayView::startsWith(char c)


static void _init_f_startsWith_c850 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<char > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_startsWith_c850 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  char arg1 = gsi::arg_reader<char >() (args, heap);
  ret.write<bool > ((bool)((QByteArrayView *)cls)->startsWith (arg1));
}


// QByteArray QByteArrayView::toByteArray()


static void _init_f_toByteArray_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_toByteArray_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QByteArrayView *)cls)->toByteArray ());
}


// void QByteArrayView::truncate(qsizetype n)


static void _init_f_truncate_1442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<qsizetype > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_truncate_1442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QByteArrayView *)cls)->truncate (arg1);
}



namespace gsi
{

static gsi::Methods methods_QByteArrayView () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QByteArrayView::QByteArrayView()\nThis method creates an object of class QByteArrayView.", &_init_ctor_QByteArrayView_0, &_call_ctor_QByteArrayView_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QByteArrayView::QByteArrayView(std::nullptr_t)\nThis method creates an object of class QByteArrayView.", &_init_ctor_QByteArrayView_1879, &_call_ctor_QByteArrayView_1879);
  methods += new qt_gsi::GenericMethod ("at", "@brief Method char QByteArrayView::at(qsizetype n)\n", true, &_init_f_at_c1442, &_call_f_at_c1442);
  methods += new qt_gsi::GenericMethod ("back", "@brief Method char QByteArrayView::back()\n", true, &_init_f_back_c0, &_call_f_back_c0);
  methods += new qt_gsi::GenericMethod ("begin", "@brief Method const char *QByteArrayView::begin()\n", true, &_init_f_begin_c0, &_call_f_begin_c0);
  methods += new qt_gsi::GenericMethod ("cbegin", "@brief Method const char *QByteArrayView::cbegin()\n", true, &_init_f_cbegin_c0, &_call_f_cbegin_c0);
  methods += new qt_gsi::GenericMethod ("cend", "@brief Method const char *QByteArrayView::cend()\n", true, &_init_f_cend_c0, &_call_f_cend_c0);
  methods += new qt_gsi::GenericMethod ("chop", "@brief Method void QByteArrayView::chop(qsizetype n)\n", false, &_init_f_chop_1442, &_call_f_chop_1442);
  methods += new qt_gsi::GenericMethod ("chopped", "@brief Method QByteArrayView QByteArrayView::chopped(qsizetype len)\n", true, &_init_f_chopped_c1442, &_call_f_chopped_c1442);
  methods += new qt_gsi::GenericMethod ("compare", "@brief Method int QByteArrayView::compare(QByteArrayView a, Qt::CaseSensitivity cs)\n", true, &_init_f_compare_c4059, &_call_f_compare_c4059);
  methods += new qt_gsi::GenericMethod ("constData", "@brief Method const char *QByteArrayView::constData()\n", true, &_init_f_constData_c0, &_call_f_constData_c0);
  methods += new qt_gsi::GenericMethod ("contains", "@brief Method bool QByteArrayView::contains(QByteArrayView a)\n", true, &_init_f_contains_c1843, &_call_f_contains_c1843);
  methods += new qt_gsi::GenericMethod ("contains", "@brief Method bool QByteArrayView::contains(char c)\n", true, &_init_f_contains_c850, &_call_f_contains_c850);
  methods += new qt_gsi::GenericMethod ("count", "@brief Method qsizetype QByteArrayView::count(QByteArrayView a)\n", true, &_init_f_count_c1843, &_call_f_count_c1843);
  methods += new qt_gsi::GenericMethod ("count", "@brief Method qsizetype QByteArrayView::count(char ch)\n", true, &_init_f_count_c850, &_call_f_count_c850);
  methods += new qt_gsi::GenericMethod ("crbegin", "@brief Method std::reverse_iterator<QByteArrayView::const_iterator> QByteArrayView::crbegin()\n", true, &_init_f_crbegin_c0, &_call_f_crbegin_c0);
  methods += new qt_gsi::GenericMethod ("crend", "@brief Method std::reverse_iterator<QByteArrayView::const_iterator> QByteArrayView::crend()\n", true, &_init_f_crend_c0, &_call_f_crend_c0);
  methods += new qt_gsi::GenericMethod ("data", "@brief Method const char *QByteArrayView::data()\n", true, &_init_f_data_c0, &_call_f_data_c0);
  methods += new qt_gsi::GenericMethod ("empty", "@brief Method bool QByteArrayView::empty()\n", true, &_init_f_empty_c0, &_call_f_empty_c0);
  methods += new qt_gsi::GenericMethod ("end", "@brief Method const char *QByteArrayView::end()\n", true, &_init_f_end_c0, &_call_f_end_c0);
  methods += new qt_gsi::GenericMethod ("endsWith", "@brief Method bool QByteArrayView::endsWith(QByteArrayView other)\n", true, &_init_f_endsWith_c1843, &_call_f_endsWith_c1843);
  methods += new qt_gsi::GenericMethod ("endsWith", "@brief Method bool QByteArrayView::endsWith(char c)\n", true, &_init_f_endsWith_c850, &_call_f_endsWith_c850);
  methods += new qt_gsi::GenericMethod ("first", "@brief Method QByteArrayView QByteArrayView::first(qsizetype n)\n", true, &_init_f_first_c1442, &_call_f_first_c1442);
  methods += new qt_gsi::GenericMethod ("first", "@brief Method char QByteArrayView::first()\n", true, &_init_f_first_c0, &_call_f_first_c0);
  methods += new qt_gsi::GenericMethod ("front", "@brief Method char QByteArrayView::front()\n", true, &_init_f_front_c0, &_call_f_front_c0);
  methods += new qt_gsi::GenericMethod ("indexOf", "@brief Method qsizetype QByteArrayView::indexOf(QByteArrayView a, qsizetype from)\n", true, &_init_f_indexOf_c3177, &_call_f_indexOf_c3177);
  methods += new qt_gsi::GenericMethod ("indexOf", "@brief Method qsizetype QByteArrayView::indexOf(char ch, qsizetype from)\n", true, &_init_f_indexOf_c2184, &_call_f_indexOf_c2184);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QByteArrayView::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QByteArrayView::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("last", "@brief Method QByteArrayView QByteArrayView::last(qsizetype n)\n", true, &_init_f_last_c1442, &_call_f_last_c1442);
  methods += new qt_gsi::GenericMethod ("last", "@brief Method char QByteArrayView::last()\n", true, &_init_f_last_c0, &_call_f_last_c0);
  methods += new qt_gsi::GenericMethod ("lastIndexOf", "@brief Method qsizetype QByteArrayView::lastIndexOf(QByteArrayView a)\n", true, &_init_f_lastIndexOf_c1843, &_call_f_lastIndexOf_c1843);
  methods += new qt_gsi::GenericMethod ("lastIndexOf", "@brief Method qsizetype QByteArrayView::lastIndexOf(QByteArrayView a, qsizetype from)\n", true, &_init_f_lastIndexOf_c3177, &_call_f_lastIndexOf_c3177);
  methods += new qt_gsi::GenericMethod ("lastIndexOf", "@brief Method qsizetype QByteArrayView::lastIndexOf(char ch, qsizetype from)\n", true, &_init_f_lastIndexOf_c2184, &_call_f_lastIndexOf_c2184);
  methods += new qt_gsi::GenericMethod ("length", "@brief Method qsizetype QByteArrayView::length()\n", true, &_init_f_length_c0, &_call_f_length_c0);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method char QByteArrayView::operator[](qsizetype n)\n", true, &_init_f_operator_index__c1442, &_call_f_operator_index__c1442);
  methods += new qt_gsi::GenericMethod ("rbegin", "@brief Method std::reverse_iterator<QByteArrayView::const_iterator> QByteArrayView::rbegin()\n", true, &_init_f_rbegin_c0, &_call_f_rbegin_c0);
  methods += new qt_gsi::GenericMethod ("rend", "@brief Method std::reverse_iterator<QByteArrayView::const_iterator> QByteArrayView::rend()\n", true, &_init_f_rend_c0, &_call_f_rend_c0);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method qsizetype QByteArrayView::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericMethod ("sliced", "@brief Method QByteArrayView QByteArrayView::sliced(qsizetype pos)\n", true, &_init_f_sliced_c1442, &_call_f_sliced_c1442);
  methods += new qt_gsi::GenericMethod ("sliced", "@brief Method QByteArrayView QByteArrayView::sliced(qsizetype pos, qsizetype n)\n", true, &_init_f_sliced_c2776, &_call_f_sliced_c2776);
  methods += new qt_gsi::GenericMethod ("startsWith", "@brief Method bool QByteArrayView::startsWith(QByteArrayView other)\n", true, &_init_f_startsWith_c1843, &_call_f_startsWith_c1843);
  methods += new qt_gsi::GenericMethod ("startsWith", "@brief Method bool QByteArrayView::startsWith(char c)\n", true, &_init_f_startsWith_c850, &_call_f_startsWith_c850);
  methods += new qt_gsi::GenericMethod ("toByteArray", "@brief Method QByteArray QByteArrayView::toByteArray()\n", true, &_init_f_toByteArray_c0, &_call_f_toByteArray_c0);
  methods += new qt_gsi::GenericMethod ("truncate", "@brief Method void QByteArrayView::truncate(qsizetype n)\n", false, &_init_f_truncate_1442, &_call_f_truncate_1442);
  return methods;
}

gsi::Class<QByteArrayView> decl_QByteArrayView ("Qt", "QByteArrayView",
  methods_QByteArrayView (),
  "@qt\n@brief Binding of QByteArrayView");


GSI_QT_PUBLIC gsi::Class<QByteArrayView> &qtdecl_QByteArrayView () { return decl_QByteArrayView; }

}

