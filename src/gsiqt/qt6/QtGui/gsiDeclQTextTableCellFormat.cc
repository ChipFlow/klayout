
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
*  @file gsiDeclQTextTableCellFormat.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextTableCellFormat>
#include <QBrush>
#include <QColor>
#include <QFont>
#include <QPen>
#include <QTextBlockFormat>
#include <QTextCharFormat>
#include <QTextFormat>
#include <QTextFrameFormat>
#include <QTextImageFormat>
#include <QTextLength>
#include <QTextListFormat>
#include <QTextTableFormat>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextTableCellFormat

//  Constructor QTextTableCellFormat::QTextTableCellFormat()


static void _init_ctor_QTextTableCellFormat_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextTableCellFormat> ();
}

static void _call_ctor_QTextTableCellFormat_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextTableCellFormat *> (new QTextTableCellFormat ());
}


// double QTextTableCellFormat::bottomBorder()


static void _init_f_bottomBorder_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_bottomBorder_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextTableCellFormat *)cls)->bottomBorder ());
}


// QBrush QTextTableCellFormat::bottomBorderBrush()


static void _init_f_bottomBorderBrush_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QBrush > ();
}

static void _call_f_bottomBorderBrush_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QBrush > ((QBrush)((QTextTableCellFormat *)cls)->bottomBorderBrush ());
}


// QTextFrameFormat::BorderStyle QTextTableCellFormat::bottomBorderStyle()


static void _init_f_bottomBorderStyle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type > ();
}

static void _call_f_bottomBorderStyle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type > ((qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type)qt_gsi::CppToQtAdaptor<QTextFrameFormat::BorderStyle>(((QTextTableCellFormat *)cls)->bottomBorderStyle ()));
}


// double QTextTableCellFormat::bottomPadding()


static void _init_f_bottomPadding_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_bottomPadding_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextTableCellFormat *)cls)->bottomPadding ());
}


// bool QTextTableCellFormat::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextTableCellFormat *)cls)->isValid ());
}


// double QTextTableCellFormat::leftBorder()


static void _init_f_leftBorder_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_leftBorder_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextTableCellFormat *)cls)->leftBorder ());
}


// QBrush QTextTableCellFormat::leftBorderBrush()


static void _init_f_leftBorderBrush_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QBrush > ();
}

static void _call_f_leftBorderBrush_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QBrush > ((QBrush)((QTextTableCellFormat *)cls)->leftBorderBrush ());
}


// QTextFrameFormat::BorderStyle QTextTableCellFormat::leftBorderStyle()


static void _init_f_leftBorderStyle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type > ();
}

static void _call_f_leftBorderStyle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type > ((qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type)qt_gsi::CppToQtAdaptor<QTextFrameFormat::BorderStyle>(((QTextTableCellFormat *)cls)->leftBorderStyle ()));
}


// double QTextTableCellFormat::leftPadding()


static void _init_f_leftPadding_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_leftPadding_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextTableCellFormat *)cls)->leftPadding ());
}


// double QTextTableCellFormat::rightBorder()


static void _init_f_rightBorder_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_rightBorder_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextTableCellFormat *)cls)->rightBorder ());
}


// QBrush QTextTableCellFormat::rightBorderBrush()


static void _init_f_rightBorderBrush_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QBrush > ();
}

static void _call_f_rightBorderBrush_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QBrush > ((QBrush)((QTextTableCellFormat *)cls)->rightBorderBrush ());
}


// QTextFrameFormat::BorderStyle QTextTableCellFormat::rightBorderStyle()


static void _init_f_rightBorderStyle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type > ();
}

static void _call_f_rightBorderStyle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type > ((qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type)qt_gsi::CppToQtAdaptor<QTextFrameFormat::BorderStyle>(((QTextTableCellFormat *)cls)->rightBorderStyle ()));
}


// double QTextTableCellFormat::rightPadding()


static void _init_f_rightPadding_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_rightPadding_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextTableCellFormat *)cls)->rightPadding ());
}


// void QTextTableCellFormat::setBorder(double width)


static void _init_f_setBorder_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("width");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBorder_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setBorder (arg1);
}


// void QTextTableCellFormat::setBorderBrush(const QBrush &brush)


static void _init_f_setBorderBrush_1910 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("brush");
  decl->add_arg<const QBrush & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBorderBrush_1910 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QBrush &arg1 = gsi::arg_reader<const QBrush & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setBorderBrush (arg1);
}


// void QTextTableCellFormat::setBorderStyle(QTextFrameFormat::BorderStyle style)


static void _init_f_setBorderStyle_3297 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("style");
  decl->add_arg<const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBorderStyle_3297 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setBorderStyle (qt_gsi::QtToCppAdaptor<QTextFrameFormat::BorderStyle>(arg1).cref());
}


// void QTextTableCellFormat::setBottomBorder(double width)


static void _init_f_setBottomBorder_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("width");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBottomBorder_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setBottomBorder (arg1);
}


// void QTextTableCellFormat::setBottomBorderBrush(const QBrush &brush)


static void _init_f_setBottomBorderBrush_1910 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("brush");
  decl->add_arg<const QBrush & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBottomBorderBrush_1910 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QBrush &arg1 = gsi::arg_reader<const QBrush & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setBottomBorderBrush (arg1);
}


// void QTextTableCellFormat::setBottomBorderStyle(QTextFrameFormat::BorderStyle style)


static void _init_f_setBottomBorderStyle_3297 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("style");
  decl->add_arg<const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBottomBorderStyle_3297 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setBottomBorderStyle (qt_gsi::QtToCppAdaptor<QTextFrameFormat::BorderStyle>(arg1).cref());
}


// void QTextTableCellFormat::setBottomPadding(double padding)


static void _init_f_setBottomPadding_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("padding");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBottomPadding_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setBottomPadding (arg1);
}


// void QTextTableCellFormat::setLeftBorder(double width)


static void _init_f_setLeftBorder_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("width");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLeftBorder_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setLeftBorder (arg1);
}


// void QTextTableCellFormat::setLeftBorderBrush(const QBrush &brush)


static void _init_f_setLeftBorderBrush_1910 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("brush");
  decl->add_arg<const QBrush & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLeftBorderBrush_1910 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QBrush &arg1 = gsi::arg_reader<const QBrush & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setLeftBorderBrush (arg1);
}


// void QTextTableCellFormat::setLeftBorderStyle(QTextFrameFormat::BorderStyle style)


static void _init_f_setLeftBorderStyle_3297 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("style");
  decl->add_arg<const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLeftBorderStyle_3297 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setLeftBorderStyle (qt_gsi::QtToCppAdaptor<QTextFrameFormat::BorderStyle>(arg1).cref());
}


// void QTextTableCellFormat::setLeftPadding(double padding)


static void _init_f_setLeftPadding_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("padding");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLeftPadding_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setLeftPadding (arg1);
}


// void QTextTableCellFormat::setPadding(double padding)


static void _init_f_setPadding_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("padding");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPadding_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setPadding (arg1);
}


// void QTextTableCellFormat::setRightBorder(double width)


static void _init_f_setRightBorder_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("width");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRightBorder_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setRightBorder (arg1);
}


// void QTextTableCellFormat::setRightBorderBrush(const QBrush &brush)


static void _init_f_setRightBorderBrush_1910 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("brush");
  decl->add_arg<const QBrush & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRightBorderBrush_1910 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QBrush &arg1 = gsi::arg_reader<const QBrush & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setRightBorderBrush (arg1);
}


// void QTextTableCellFormat::setRightBorderStyle(QTextFrameFormat::BorderStyle style)


static void _init_f_setRightBorderStyle_3297 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("style");
  decl->add_arg<const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRightBorderStyle_3297 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setRightBorderStyle (qt_gsi::QtToCppAdaptor<QTextFrameFormat::BorderStyle>(arg1).cref());
}


// void QTextTableCellFormat::setRightPadding(double padding)


static void _init_f_setRightPadding_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("padding");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRightPadding_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setRightPadding (arg1);
}


// void QTextTableCellFormat::setTopBorder(double width)


static void _init_f_setTopBorder_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("width");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTopBorder_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setTopBorder (arg1);
}


// void QTextTableCellFormat::setTopBorderBrush(const QBrush &brush)


static void _init_f_setTopBorderBrush_1910 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("brush");
  decl->add_arg<const QBrush & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTopBorderBrush_1910 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QBrush &arg1 = gsi::arg_reader<const QBrush & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setTopBorderBrush (arg1);
}


// void QTextTableCellFormat::setTopBorderStyle(QTextFrameFormat::BorderStyle style)


static void _init_f_setTopBorderStyle_3297 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("style");
  decl->add_arg<const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTopBorderStyle_3297 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setTopBorderStyle (qt_gsi::QtToCppAdaptor<QTextFrameFormat::BorderStyle>(arg1).cref());
}


// void QTextTableCellFormat::setTopPadding(double padding)


static void _init_f_setTopPadding_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("padding");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTopPadding_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setTopPadding (arg1);
}


// double QTextTableCellFormat::topBorder()


static void _init_f_topBorder_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_topBorder_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextTableCellFormat *)cls)->topBorder ());
}


// QBrush QTextTableCellFormat::topBorderBrush()


static void _init_f_topBorderBrush_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QBrush > ();
}

static void _call_f_topBorderBrush_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QBrush > ((QBrush)((QTextTableCellFormat *)cls)->topBorderBrush ());
}


// QTextFrameFormat::BorderStyle QTextTableCellFormat::topBorderStyle()


static void _init_f_topBorderStyle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type > ();
}

static void _call_f_topBorderStyle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type > ((qt_gsi::Converter<QTextFrameFormat::BorderStyle>::target_type)qt_gsi::CppToQtAdaptor<QTextFrameFormat::BorderStyle>(((QTextTableCellFormat *)cls)->topBorderStyle ()));
}


// double QTextTableCellFormat::topPadding()


static void _init_f_topPadding_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_topPadding_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextTableCellFormat *)cls)->topPadding ());
}



namespace gsi
{

static gsi::Methods methods_QTextTableCellFormat () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextTableCellFormat::QTextTableCellFormat()\nThis method creates an object of class QTextTableCellFormat.", &_init_ctor_QTextTableCellFormat_0, &_call_ctor_QTextTableCellFormat_0);
  methods += new qt_gsi::GenericMethod (":bottomBorder", "@brief Method double QTextTableCellFormat::bottomBorder()\n", true, &_init_f_bottomBorder_c0, &_call_f_bottomBorder_c0);
  methods += new qt_gsi::GenericMethod (":bottomBorderBrush", "@brief Method QBrush QTextTableCellFormat::bottomBorderBrush()\n", true, &_init_f_bottomBorderBrush_c0, &_call_f_bottomBorderBrush_c0);
  methods += new qt_gsi::GenericMethod (":bottomBorderStyle", "@brief Method QTextFrameFormat::BorderStyle QTextTableCellFormat::bottomBorderStyle()\n", true, &_init_f_bottomBorderStyle_c0, &_call_f_bottomBorderStyle_c0);
  methods += new qt_gsi::GenericMethod (":bottomPadding", "@brief Method double QTextTableCellFormat::bottomPadding()\n", true, &_init_f_bottomPadding_c0, &_call_f_bottomPadding_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QTextTableCellFormat::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod (":leftBorder", "@brief Method double QTextTableCellFormat::leftBorder()\n", true, &_init_f_leftBorder_c0, &_call_f_leftBorder_c0);
  methods += new qt_gsi::GenericMethod (":leftBorderBrush", "@brief Method QBrush QTextTableCellFormat::leftBorderBrush()\n", true, &_init_f_leftBorderBrush_c0, &_call_f_leftBorderBrush_c0);
  methods += new qt_gsi::GenericMethod (":leftBorderStyle", "@brief Method QTextFrameFormat::BorderStyle QTextTableCellFormat::leftBorderStyle()\n", true, &_init_f_leftBorderStyle_c0, &_call_f_leftBorderStyle_c0);
  methods += new qt_gsi::GenericMethod (":leftPadding", "@brief Method double QTextTableCellFormat::leftPadding()\n", true, &_init_f_leftPadding_c0, &_call_f_leftPadding_c0);
  methods += new qt_gsi::GenericMethod (":rightBorder", "@brief Method double QTextTableCellFormat::rightBorder()\n", true, &_init_f_rightBorder_c0, &_call_f_rightBorder_c0);
  methods += new qt_gsi::GenericMethod (":rightBorderBrush", "@brief Method QBrush QTextTableCellFormat::rightBorderBrush()\n", true, &_init_f_rightBorderBrush_c0, &_call_f_rightBorderBrush_c0);
  methods += new qt_gsi::GenericMethod (":rightBorderStyle", "@brief Method QTextFrameFormat::BorderStyle QTextTableCellFormat::rightBorderStyle()\n", true, &_init_f_rightBorderStyle_c0, &_call_f_rightBorderStyle_c0);
  methods += new qt_gsi::GenericMethod (":rightPadding", "@brief Method double QTextTableCellFormat::rightPadding()\n", true, &_init_f_rightPadding_c0, &_call_f_rightPadding_c0);
  methods += new qt_gsi::GenericMethod ("setBorder", "@brief Method void QTextTableCellFormat::setBorder(double width)\n", false, &_init_f_setBorder_1071, &_call_f_setBorder_1071);
  methods += new qt_gsi::GenericMethod ("setBorderBrush", "@brief Method void QTextTableCellFormat::setBorderBrush(const QBrush &brush)\n", false, &_init_f_setBorderBrush_1910, &_call_f_setBorderBrush_1910);
  methods += new qt_gsi::GenericMethod ("setBorderStyle", "@brief Method void QTextTableCellFormat::setBorderStyle(QTextFrameFormat::BorderStyle style)\n", false, &_init_f_setBorderStyle_3297, &_call_f_setBorderStyle_3297);
  methods += new qt_gsi::GenericMethod ("setBottomBorder|bottomBorder=", "@brief Method void QTextTableCellFormat::setBottomBorder(double width)\n", false, &_init_f_setBottomBorder_1071, &_call_f_setBottomBorder_1071);
  methods += new qt_gsi::GenericMethod ("setBottomBorderBrush|bottomBorderBrush=", "@brief Method void QTextTableCellFormat::setBottomBorderBrush(const QBrush &brush)\n", false, &_init_f_setBottomBorderBrush_1910, &_call_f_setBottomBorderBrush_1910);
  methods += new qt_gsi::GenericMethod ("setBottomBorderStyle|bottomBorderStyle=", "@brief Method void QTextTableCellFormat::setBottomBorderStyle(QTextFrameFormat::BorderStyle style)\n", false, &_init_f_setBottomBorderStyle_3297, &_call_f_setBottomBorderStyle_3297);
  methods += new qt_gsi::GenericMethod ("setBottomPadding|bottomPadding=", "@brief Method void QTextTableCellFormat::setBottomPadding(double padding)\n", false, &_init_f_setBottomPadding_1071, &_call_f_setBottomPadding_1071);
  methods += new qt_gsi::GenericMethod ("setLeftBorder|leftBorder=", "@brief Method void QTextTableCellFormat::setLeftBorder(double width)\n", false, &_init_f_setLeftBorder_1071, &_call_f_setLeftBorder_1071);
  methods += new qt_gsi::GenericMethod ("setLeftBorderBrush|leftBorderBrush=", "@brief Method void QTextTableCellFormat::setLeftBorderBrush(const QBrush &brush)\n", false, &_init_f_setLeftBorderBrush_1910, &_call_f_setLeftBorderBrush_1910);
  methods += new qt_gsi::GenericMethod ("setLeftBorderStyle|leftBorderStyle=", "@brief Method void QTextTableCellFormat::setLeftBorderStyle(QTextFrameFormat::BorderStyle style)\n", false, &_init_f_setLeftBorderStyle_3297, &_call_f_setLeftBorderStyle_3297);
  methods += new qt_gsi::GenericMethod ("setLeftPadding|leftPadding=", "@brief Method void QTextTableCellFormat::setLeftPadding(double padding)\n", false, &_init_f_setLeftPadding_1071, &_call_f_setLeftPadding_1071);
  methods += new qt_gsi::GenericMethod ("setPadding", "@brief Method void QTextTableCellFormat::setPadding(double padding)\n", false, &_init_f_setPadding_1071, &_call_f_setPadding_1071);
  methods += new qt_gsi::GenericMethod ("setRightBorder|rightBorder=", "@brief Method void QTextTableCellFormat::setRightBorder(double width)\n", false, &_init_f_setRightBorder_1071, &_call_f_setRightBorder_1071);
  methods += new qt_gsi::GenericMethod ("setRightBorderBrush|rightBorderBrush=", "@brief Method void QTextTableCellFormat::setRightBorderBrush(const QBrush &brush)\n", false, &_init_f_setRightBorderBrush_1910, &_call_f_setRightBorderBrush_1910);
  methods += new qt_gsi::GenericMethod ("setRightBorderStyle|rightBorderStyle=", "@brief Method void QTextTableCellFormat::setRightBorderStyle(QTextFrameFormat::BorderStyle style)\n", false, &_init_f_setRightBorderStyle_3297, &_call_f_setRightBorderStyle_3297);
  methods += new qt_gsi::GenericMethod ("setRightPadding|rightPadding=", "@brief Method void QTextTableCellFormat::setRightPadding(double padding)\n", false, &_init_f_setRightPadding_1071, &_call_f_setRightPadding_1071);
  methods += new qt_gsi::GenericMethod ("setTopBorder|topBorder=", "@brief Method void QTextTableCellFormat::setTopBorder(double width)\n", false, &_init_f_setTopBorder_1071, &_call_f_setTopBorder_1071);
  methods += new qt_gsi::GenericMethod ("setTopBorderBrush|topBorderBrush=", "@brief Method void QTextTableCellFormat::setTopBorderBrush(const QBrush &brush)\n", false, &_init_f_setTopBorderBrush_1910, &_call_f_setTopBorderBrush_1910);
  methods += new qt_gsi::GenericMethod ("setTopBorderStyle|topBorderStyle=", "@brief Method void QTextTableCellFormat::setTopBorderStyle(QTextFrameFormat::BorderStyle style)\n", false, &_init_f_setTopBorderStyle_3297, &_call_f_setTopBorderStyle_3297);
  methods += new qt_gsi::GenericMethod ("setTopPadding|topPadding=", "@brief Method void QTextTableCellFormat::setTopPadding(double padding)\n", false, &_init_f_setTopPadding_1071, &_call_f_setTopPadding_1071);
  methods += new qt_gsi::GenericMethod (":topBorder", "@brief Method double QTextTableCellFormat::topBorder()\n", true, &_init_f_topBorder_c0, &_call_f_topBorder_c0);
  methods += new qt_gsi::GenericMethod (":topBorderBrush", "@brief Method QBrush QTextTableCellFormat::topBorderBrush()\n", true, &_init_f_topBorderBrush_c0, &_call_f_topBorderBrush_c0);
  methods += new qt_gsi::GenericMethod (":topBorderStyle", "@brief Method QTextFrameFormat::BorderStyle QTextTableCellFormat::topBorderStyle()\n", true, &_init_f_topBorderStyle_c0, &_call_f_topBorderStyle_c0);
  methods += new qt_gsi::GenericMethod (":topPadding", "@brief Method double QTextTableCellFormat::topPadding()\n", true, &_init_f_topPadding_c0, &_call_f_topPadding_c0);
  return methods;
}

gsi::Class<QTextCharFormat> &qtdecl_QTextCharFormat ();

gsi::Class<QTextTableCellFormat> decl_QTextTableCellFormat (qtdecl_QTextCharFormat (), "QtGui", "QTextTableCellFormat",
  methods_QTextTableCellFormat (),
  "@qt\n@brief Binding of QTextTableCellFormat");


GSI_QTGUI_PUBLIC gsi::Class<QTextTableCellFormat> &qtdecl_QTextTableCellFormat () { return decl_QTextTableCellFormat; }

}

