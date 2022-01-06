
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

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
*  @file gsiDeclQt_2.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <Qt>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// namespace Qt

class Qt_Namespace { };


//  Implementation of the enum wrapper class for Qt::MaskMode
namespace qt_gsi
{

static gsi::Enum<Qt::MaskMode> decl_Qt_MaskMode_Enum ("QtCore", "Qt_MaskMode",
    gsi::enum_const ("MaskInColor", Qt::MaskInColor, "@brief Enum constant Qt::MaskInColor") +
    gsi::enum_const ("MaskOutColor", Qt::MaskOutColor, "@brief Enum constant Qt::MaskOutColor"),
  "@qt\n@brief This class represents the Qt::MaskMode enum");

static gsi::QFlagsClass<Qt::MaskMode > decl_Qt_MaskMode_Enums ("QtCore", "Qt_QFlags_MaskMode",
  "@qt\n@brief This class represents the QFlags<Qt::MaskMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_MaskMode_Enum_in_parent (decl_Qt_MaskMode_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_MaskMode_Enum_as_child (decl_Qt_MaskMode_Enum, "MaskMode");
static gsi::ClassExt<Qt_Namespace> decl_Qt_MaskMode_Enums_as_child (decl_Qt_MaskMode_Enums, "QFlags_MaskMode");

}


//  Implementation of the enum wrapper class for Qt::MatchFlag
namespace qt_gsi
{

static gsi::Enum<Qt::MatchFlag> decl_Qt_MatchFlag_Enum ("QtCore", "Qt_MatchFlag",
    gsi::enum_const ("MatchExactly", Qt::MatchExactly, "@brief Enum constant Qt::MatchExactly") +
    gsi::enum_const ("MatchContains", Qt::MatchContains, "@brief Enum constant Qt::MatchContains") +
    gsi::enum_const ("MatchStartsWith", Qt::MatchStartsWith, "@brief Enum constant Qt::MatchStartsWith") +
    gsi::enum_const ("MatchEndsWith", Qt::MatchEndsWith, "@brief Enum constant Qt::MatchEndsWith") +
    gsi::enum_const ("MatchRegExp", Qt::MatchRegExp, "@brief Enum constant Qt::MatchRegExp") +
    gsi::enum_const ("MatchWildcard", Qt::MatchWildcard, "@brief Enum constant Qt::MatchWildcard") +
    gsi::enum_const ("MatchFixedString", Qt::MatchFixedString, "@brief Enum constant Qt::MatchFixedString") +
    gsi::enum_const ("MatchCaseSensitive", Qt::MatchCaseSensitive, "@brief Enum constant Qt::MatchCaseSensitive") +
    gsi::enum_const ("MatchWrap", Qt::MatchWrap, "@brief Enum constant Qt::MatchWrap") +
    gsi::enum_const ("MatchRecursive", Qt::MatchRecursive, "@brief Enum constant Qt::MatchRecursive"),
  "@qt\n@brief This class represents the Qt::MatchFlag enum");

static gsi::QFlagsClass<Qt::MatchFlag > decl_Qt_MatchFlag_Enums ("QtCore", "Qt_QFlags_MatchFlag",
  "@qt\n@brief This class represents the QFlags<Qt::MatchFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_MatchFlag_Enum_in_parent (decl_Qt_MatchFlag_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_MatchFlag_Enum_as_child (decl_Qt_MatchFlag_Enum, "MatchFlag");
static gsi::ClassExt<Qt_Namespace> decl_Qt_MatchFlag_Enums_as_child (decl_Qt_MatchFlag_Enums, "QFlags_MatchFlag");

}


//  Implementation of the enum wrapper class for Qt::Modifier
namespace qt_gsi
{

static gsi::Enum<Qt::Modifier> decl_Qt_Modifier_Enum ("QtCore", "Qt_Modifier",
    gsi::enum_const ("META", Qt::META, "@brief Enum constant Qt::META") +
    gsi::enum_const ("SHIFT", Qt::SHIFT, "@brief Enum constant Qt::SHIFT") +
    gsi::enum_const ("CTRL", Qt::CTRL, "@brief Enum constant Qt::CTRL") +
    gsi::enum_const ("ALT", Qt::ALT, "@brief Enum constant Qt::ALT") +
    gsi::enum_const ("MODIFIER_MASK", Qt::MODIFIER_MASK, "@brief Enum constant Qt::MODIFIER_MASK") +
    gsi::enum_const ("UNICODE_ACCEL", Qt::UNICODE_ACCEL, "@brief Enum constant Qt::UNICODE_ACCEL"),
  "@qt\n@brief This class represents the Qt::Modifier enum");

static gsi::QFlagsClass<Qt::Modifier > decl_Qt_Modifier_Enums ("QtCore", "Qt_QFlags_Modifier",
  "@qt\n@brief This class represents the QFlags<Qt::Modifier> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_Modifier_Enum_in_parent (decl_Qt_Modifier_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_Modifier_Enum_as_child (decl_Qt_Modifier_Enum, "Modifier");
static gsi::ClassExt<Qt_Namespace> decl_Qt_Modifier_Enums_as_child (decl_Qt_Modifier_Enums, "QFlags_Modifier");

}


//  Implementation of the enum wrapper class for Qt::MouseButton
namespace qt_gsi
{

static gsi::Enum<Qt::MouseButton> decl_Qt_MouseButton_Enum ("QtCore", "Qt_MouseButton",
    gsi::enum_const ("NoButton", Qt::NoButton, "@brief Enum constant Qt::NoButton") +
    gsi::enum_const ("LeftButton", Qt::LeftButton, "@brief Enum constant Qt::LeftButton") +
    gsi::enum_const ("RightButton", Qt::RightButton, "@brief Enum constant Qt::RightButton") +
    gsi::enum_const ("MidButton", Qt::MidButton, "@brief Enum constant Qt::MidButton") +
    gsi::enum_const ("XButton1", Qt::XButton1, "@brief Enum constant Qt::XButton1") +
    gsi::enum_const ("XButton2", Qt::XButton2, "@brief Enum constant Qt::XButton2") +
    gsi::enum_const ("MouseButtonMask", Qt::MouseButtonMask, "@brief Enum constant Qt::MouseButtonMask"),
  "@qt\n@brief This class represents the Qt::MouseButton enum");

static gsi::QFlagsClass<Qt::MouseButton > decl_Qt_MouseButton_Enums ("QtCore", "Qt_QFlags_MouseButton",
  "@qt\n@brief This class represents the QFlags<Qt::MouseButton> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_MouseButton_Enum_in_parent (decl_Qt_MouseButton_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_MouseButton_Enum_as_child (decl_Qt_MouseButton_Enum, "MouseButton");
static gsi::ClassExt<Qt_Namespace> decl_Qt_MouseButton_Enums_as_child (decl_Qt_MouseButton_Enums, "QFlags_MouseButton");

}


//  Implementation of the enum wrapper class for Qt::NavigationMode
namespace qt_gsi
{

static gsi::Enum<Qt::NavigationMode> decl_Qt_NavigationMode_Enum ("QtCore", "Qt_NavigationMode",
    gsi::enum_const ("NavigationModeNone", Qt::NavigationModeNone, "@brief Enum constant Qt::NavigationModeNone") +
    gsi::enum_const ("NavigationModeKeypadTabOrder", Qt::NavigationModeKeypadTabOrder, "@brief Enum constant Qt::NavigationModeKeypadTabOrder") +
    gsi::enum_const ("NavigationModeKeypadDirectional", Qt::NavigationModeKeypadDirectional, "@brief Enum constant Qt::NavigationModeKeypadDirectional") +
    gsi::enum_const ("NavigationModeCursorAuto", Qt::NavigationModeCursorAuto, "@brief Enum constant Qt::NavigationModeCursorAuto") +
    gsi::enum_const ("NavigationModeCursorForceVisible", Qt::NavigationModeCursorForceVisible, "@brief Enum constant Qt::NavigationModeCursorForceVisible"),
  "@qt\n@brief This class represents the Qt::NavigationMode enum");

static gsi::QFlagsClass<Qt::NavigationMode > decl_Qt_NavigationMode_Enums ("QtCore", "Qt_QFlags_NavigationMode",
  "@qt\n@brief This class represents the QFlags<Qt::NavigationMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_NavigationMode_Enum_in_parent (decl_Qt_NavigationMode_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_NavigationMode_Enum_as_child (decl_Qt_NavigationMode_Enum, "NavigationMode");
static gsi::ClassExt<Qt_Namespace> decl_Qt_NavigationMode_Enums_as_child (decl_Qt_NavigationMode_Enums, "QFlags_NavigationMode");

}


//  Implementation of the enum wrapper class for Qt::Orientation
namespace qt_gsi
{

static gsi::Enum<Qt::Orientation> decl_Qt_Orientation_Enum ("QtCore", "Qt_Orientation",
    gsi::enum_const ("Horizontal", Qt::Horizontal, "@brief Enum constant Qt::Horizontal") +
    gsi::enum_const ("Vertical", Qt::Vertical, "@brief Enum constant Qt::Vertical"),
  "@qt\n@brief This class represents the Qt::Orientation enum");

static gsi::QFlagsClass<Qt::Orientation > decl_Qt_Orientation_Enums ("QtCore", "Qt_QFlags_Orientation",
  "@qt\n@brief This class represents the QFlags<Qt::Orientation> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_Orientation_Enum_in_parent (decl_Qt_Orientation_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_Orientation_Enum_as_child (decl_Qt_Orientation_Enum, "Orientation");
static gsi::ClassExt<Qt_Namespace> decl_Qt_Orientation_Enums_as_child (decl_Qt_Orientation_Enums, "QFlags_Orientation");

}


//  Implementation of the enum wrapper class for Qt::PenCapStyle
namespace qt_gsi
{

static gsi::Enum<Qt::PenCapStyle> decl_Qt_PenCapStyle_Enum ("QtCore", "Qt_PenCapStyle",
    gsi::enum_const ("FlatCap", Qt::FlatCap, "@brief Enum constant Qt::FlatCap") +
    gsi::enum_const ("SquareCap", Qt::SquareCap, "@brief Enum constant Qt::SquareCap") +
    gsi::enum_const ("RoundCap", Qt::RoundCap, "@brief Enum constant Qt::RoundCap") +
    gsi::enum_const ("MPenCapStyle", Qt::MPenCapStyle, "@brief Enum constant Qt::MPenCapStyle"),
  "@qt\n@brief This class represents the Qt::PenCapStyle enum");

static gsi::QFlagsClass<Qt::PenCapStyle > decl_Qt_PenCapStyle_Enums ("QtCore", "Qt_QFlags_PenCapStyle",
  "@qt\n@brief This class represents the QFlags<Qt::PenCapStyle> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_PenCapStyle_Enum_in_parent (decl_Qt_PenCapStyle_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_PenCapStyle_Enum_as_child (decl_Qt_PenCapStyle_Enum, "PenCapStyle");
static gsi::ClassExt<Qt_Namespace> decl_Qt_PenCapStyle_Enums_as_child (decl_Qt_PenCapStyle_Enums, "QFlags_PenCapStyle");

}


//  Implementation of the enum wrapper class for Qt::PenJoinStyle
namespace qt_gsi
{

static gsi::Enum<Qt::PenJoinStyle> decl_Qt_PenJoinStyle_Enum ("QtCore", "Qt_PenJoinStyle",
    gsi::enum_const ("MiterJoin", Qt::MiterJoin, "@brief Enum constant Qt::MiterJoin") +
    gsi::enum_const ("BevelJoin", Qt::BevelJoin, "@brief Enum constant Qt::BevelJoin") +
    gsi::enum_const ("RoundJoin", Qt::RoundJoin, "@brief Enum constant Qt::RoundJoin") +
    gsi::enum_const ("SvgMiterJoin", Qt::SvgMiterJoin, "@brief Enum constant Qt::SvgMiterJoin") +
    gsi::enum_const ("MPenJoinStyle", Qt::MPenJoinStyle, "@brief Enum constant Qt::MPenJoinStyle"),
  "@qt\n@brief This class represents the Qt::PenJoinStyle enum");

static gsi::QFlagsClass<Qt::PenJoinStyle > decl_Qt_PenJoinStyle_Enums ("QtCore", "Qt_QFlags_PenJoinStyle",
  "@qt\n@brief This class represents the QFlags<Qt::PenJoinStyle> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_PenJoinStyle_Enum_in_parent (decl_Qt_PenJoinStyle_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_PenJoinStyle_Enum_as_child (decl_Qt_PenJoinStyle_Enum, "PenJoinStyle");
static gsi::ClassExt<Qt_Namespace> decl_Qt_PenJoinStyle_Enums_as_child (decl_Qt_PenJoinStyle_Enums, "QFlags_PenJoinStyle");

}


//  Implementation of the enum wrapper class for Qt::PenStyle
namespace qt_gsi
{

static gsi::Enum<Qt::PenStyle> decl_Qt_PenStyle_Enum ("QtCore", "Qt_PenStyle",
    gsi::enum_const ("NoPen", Qt::NoPen, "@brief Enum constant Qt::NoPen") +
    gsi::enum_const ("SolidLine", Qt::SolidLine, "@brief Enum constant Qt::SolidLine") +
    gsi::enum_const ("DashLine", Qt::DashLine, "@brief Enum constant Qt::DashLine") +
    gsi::enum_const ("DotLine", Qt::DotLine, "@brief Enum constant Qt::DotLine") +
    gsi::enum_const ("DashDotLine", Qt::DashDotLine, "@brief Enum constant Qt::DashDotLine") +
    gsi::enum_const ("DashDotDotLine", Qt::DashDotDotLine, "@brief Enum constant Qt::DashDotDotLine") +
    gsi::enum_const ("CustomDashLine", Qt::CustomDashLine, "@brief Enum constant Qt::CustomDashLine") +
    gsi::enum_const ("MPenStyle", Qt::MPenStyle, "@brief Enum constant Qt::MPenStyle"),
  "@qt\n@brief This class represents the Qt::PenStyle enum");

static gsi::QFlagsClass<Qt::PenStyle > decl_Qt_PenStyle_Enums ("QtCore", "Qt_QFlags_PenStyle",
  "@qt\n@brief This class represents the QFlags<Qt::PenStyle> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_PenStyle_Enum_in_parent (decl_Qt_PenStyle_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_PenStyle_Enum_as_child (decl_Qt_PenStyle_Enum, "PenStyle");
static gsi::ClassExt<Qt_Namespace> decl_Qt_PenStyle_Enums_as_child (decl_Qt_PenStyle_Enums, "QFlags_PenStyle");

}


//  Implementation of the enum wrapper class for Qt::ScrollBarPolicy
namespace qt_gsi
{

static gsi::Enum<Qt::ScrollBarPolicy> decl_Qt_ScrollBarPolicy_Enum ("QtCore", "Qt_ScrollBarPolicy",
    gsi::enum_const ("ScrollBarAsNeeded", Qt::ScrollBarAsNeeded, "@brief Enum constant Qt::ScrollBarAsNeeded") +
    gsi::enum_const ("ScrollBarAlwaysOff", Qt::ScrollBarAlwaysOff, "@brief Enum constant Qt::ScrollBarAlwaysOff") +
    gsi::enum_const ("ScrollBarAlwaysOn", Qt::ScrollBarAlwaysOn, "@brief Enum constant Qt::ScrollBarAlwaysOn"),
  "@qt\n@brief This class represents the Qt::ScrollBarPolicy enum");

static gsi::QFlagsClass<Qt::ScrollBarPolicy > decl_Qt_ScrollBarPolicy_Enums ("QtCore", "Qt_QFlags_ScrollBarPolicy",
  "@qt\n@brief This class represents the QFlags<Qt::ScrollBarPolicy> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_ScrollBarPolicy_Enum_in_parent (decl_Qt_ScrollBarPolicy_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_ScrollBarPolicy_Enum_as_child (decl_Qt_ScrollBarPolicy_Enum, "ScrollBarPolicy");
static gsi::ClassExt<Qt_Namespace> decl_Qt_ScrollBarPolicy_Enums_as_child (decl_Qt_ScrollBarPolicy_Enums, "QFlags_ScrollBarPolicy");

}


//  Implementation of the enum wrapper class for Qt::ShortcutContext
namespace qt_gsi
{

static gsi::Enum<Qt::ShortcutContext> decl_Qt_ShortcutContext_Enum ("QtCore", "Qt_ShortcutContext",
    gsi::enum_const ("WidgetShortcut", Qt::WidgetShortcut, "@brief Enum constant Qt::WidgetShortcut") +
    gsi::enum_const ("WindowShortcut", Qt::WindowShortcut, "@brief Enum constant Qt::WindowShortcut") +
    gsi::enum_const ("ApplicationShortcut", Qt::ApplicationShortcut, "@brief Enum constant Qt::ApplicationShortcut") +
    gsi::enum_const ("WidgetWithChildrenShortcut", Qt::WidgetWithChildrenShortcut, "@brief Enum constant Qt::WidgetWithChildrenShortcut"),
  "@qt\n@brief This class represents the Qt::ShortcutContext enum");

static gsi::QFlagsClass<Qt::ShortcutContext > decl_Qt_ShortcutContext_Enums ("QtCore", "Qt_QFlags_ShortcutContext",
  "@qt\n@brief This class represents the QFlags<Qt::ShortcutContext> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_ShortcutContext_Enum_in_parent (decl_Qt_ShortcutContext_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_ShortcutContext_Enum_as_child (decl_Qt_ShortcutContext_Enum, "ShortcutContext");
static gsi::ClassExt<Qt_Namespace> decl_Qt_ShortcutContext_Enums_as_child (decl_Qt_ShortcutContext_Enums, "QFlags_ShortcutContext");

}


//  Implementation of the enum wrapper class for Qt::SizeHint
namespace qt_gsi
{

static gsi::Enum<Qt::SizeHint> decl_Qt_SizeHint_Enum ("QtCore", "Qt_SizeHint",
    gsi::enum_const ("MinimumSize", Qt::MinimumSize, "@brief Enum constant Qt::MinimumSize") +
    gsi::enum_const ("PreferredSize", Qt::PreferredSize, "@brief Enum constant Qt::PreferredSize") +
    gsi::enum_const ("MaximumSize", Qt::MaximumSize, "@brief Enum constant Qt::MaximumSize") +
    gsi::enum_const ("MinimumDescent", Qt::MinimumDescent, "@brief Enum constant Qt::MinimumDescent") +
    gsi::enum_const ("NSizeHints", Qt::NSizeHints, "@brief Enum constant Qt::NSizeHints"),
  "@qt\n@brief This class represents the Qt::SizeHint enum");

static gsi::QFlagsClass<Qt::SizeHint > decl_Qt_SizeHint_Enums ("QtCore", "Qt_QFlags_SizeHint",
  "@qt\n@brief This class represents the QFlags<Qt::SizeHint> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_SizeHint_Enum_in_parent (decl_Qt_SizeHint_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_SizeHint_Enum_as_child (decl_Qt_SizeHint_Enum, "SizeHint");
static gsi::ClassExt<Qt_Namespace> decl_Qt_SizeHint_Enums_as_child (decl_Qt_SizeHint_Enums, "QFlags_SizeHint");

}


//  Implementation of the enum wrapper class for Qt::SizeMode
namespace qt_gsi
{

static gsi::Enum<Qt::SizeMode> decl_Qt_SizeMode_Enum ("QtCore", "Qt_SizeMode",
    gsi::enum_const ("AbsoluteSize", Qt::AbsoluteSize, "@brief Enum constant Qt::AbsoluteSize") +
    gsi::enum_const ("RelativeSize", Qt::RelativeSize, "@brief Enum constant Qt::RelativeSize"),
  "@qt\n@brief This class represents the Qt::SizeMode enum");

static gsi::QFlagsClass<Qt::SizeMode > decl_Qt_SizeMode_Enums ("QtCore", "Qt_QFlags_SizeMode",
  "@qt\n@brief This class represents the QFlags<Qt::SizeMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_SizeMode_Enum_in_parent (decl_Qt_SizeMode_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_SizeMode_Enum_as_child (decl_Qt_SizeMode_Enum, "SizeMode");
static gsi::ClassExt<Qt_Namespace> decl_Qt_SizeMode_Enums_as_child (decl_Qt_SizeMode_Enums, "QFlags_SizeMode");

}


//  Implementation of the enum wrapper class for Qt::SortOrder
namespace qt_gsi
{

static gsi::Enum<Qt::SortOrder> decl_Qt_SortOrder_Enum ("QtCore", "Qt_SortOrder",
    gsi::enum_const ("AscendingOrder", Qt::AscendingOrder, "@brief Enum constant Qt::AscendingOrder") +
    gsi::enum_const ("DescendingOrder", Qt::DescendingOrder, "@brief Enum constant Qt::DescendingOrder"),
  "@qt\n@brief This class represents the Qt::SortOrder enum");

static gsi::QFlagsClass<Qt::SortOrder > decl_Qt_SortOrder_Enums ("QtCore", "Qt_QFlags_SortOrder",
  "@qt\n@brief This class represents the QFlags<Qt::SortOrder> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_SortOrder_Enum_in_parent (decl_Qt_SortOrder_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_SortOrder_Enum_as_child (decl_Qt_SortOrder_Enum, "SortOrder");
static gsi::ClassExt<Qt_Namespace> decl_Qt_SortOrder_Enums_as_child (decl_Qt_SortOrder_Enums, "QFlags_SortOrder");

}


//  Implementation of the enum wrapper class for Qt::TextElideMode
namespace qt_gsi
{

static gsi::Enum<Qt::TextElideMode> decl_Qt_TextElideMode_Enum ("QtCore", "Qt_TextElideMode",
    gsi::enum_const ("ElideLeft", Qt::ElideLeft, "@brief Enum constant Qt::ElideLeft") +
    gsi::enum_const ("ElideRight", Qt::ElideRight, "@brief Enum constant Qt::ElideRight") +
    gsi::enum_const ("ElideMiddle", Qt::ElideMiddle, "@brief Enum constant Qt::ElideMiddle") +
    gsi::enum_const ("ElideNone", Qt::ElideNone, "@brief Enum constant Qt::ElideNone"),
  "@qt\n@brief This class represents the Qt::TextElideMode enum");

static gsi::QFlagsClass<Qt::TextElideMode > decl_Qt_TextElideMode_Enums ("QtCore", "Qt_QFlags_TextElideMode",
  "@qt\n@brief This class represents the QFlags<Qt::TextElideMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_TextElideMode_Enum_in_parent (decl_Qt_TextElideMode_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_TextElideMode_Enum_as_child (decl_Qt_TextElideMode_Enum, "TextElideMode");
static gsi::ClassExt<Qt_Namespace> decl_Qt_TextElideMode_Enums_as_child (decl_Qt_TextElideMode_Enums, "QFlags_TextElideMode");

}


//  Implementation of the enum wrapper class for Qt::TextFlag
namespace qt_gsi
{

static gsi::Enum<Qt::TextFlag> decl_Qt_TextFlag_Enum ("QtCore", "Qt_TextFlag",
    gsi::enum_const ("TextSingleLine", Qt::TextSingleLine, "@brief Enum constant Qt::TextSingleLine") +
    gsi::enum_const ("TextDontClip", Qt::TextDontClip, "@brief Enum constant Qt::TextDontClip") +
    gsi::enum_const ("TextExpandTabs", Qt::TextExpandTabs, "@brief Enum constant Qt::TextExpandTabs") +
    gsi::enum_const ("TextShowMnemonic", Qt::TextShowMnemonic, "@brief Enum constant Qt::TextShowMnemonic") +
    gsi::enum_const ("TextWordWrap", Qt::TextWordWrap, "@brief Enum constant Qt::TextWordWrap") +
    gsi::enum_const ("TextWrapAnywhere", Qt::TextWrapAnywhere, "@brief Enum constant Qt::TextWrapAnywhere") +
    gsi::enum_const ("TextDontPrint", Qt::TextDontPrint, "@brief Enum constant Qt::TextDontPrint") +
    gsi::enum_const ("TextIncludeTrailingSpaces", Qt::TextIncludeTrailingSpaces, "@brief Enum constant Qt::TextIncludeTrailingSpaces") +
    gsi::enum_const ("TextHideMnemonic", Qt::TextHideMnemonic, "@brief Enum constant Qt::TextHideMnemonic") +
    gsi::enum_const ("TextJustificationForced", Qt::TextJustificationForced, "@brief Enum constant Qt::TextJustificationForced") +
    gsi::enum_const ("TextForceLeftToRight", Qt::TextForceLeftToRight, "@brief Enum constant Qt::TextForceLeftToRight") +
    gsi::enum_const ("TextForceRightToLeft", Qt::TextForceRightToLeft, "@brief Enum constant Qt::TextForceRightToLeft") +
    gsi::enum_const ("TextLongestVariant", Qt::TextLongestVariant, "@brief Enum constant Qt::TextLongestVariant"),
  "@qt\n@brief This class represents the Qt::TextFlag enum");

static gsi::QFlagsClass<Qt::TextFlag > decl_Qt_TextFlag_Enums ("QtCore", "Qt_QFlags_TextFlag",
  "@qt\n@brief This class represents the QFlags<Qt::TextFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_TextFlag_Enum_in_parent (decl_Qt_TextFlag_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_TextFlag_Enum_as_child (decl_Qt_TextFlag_Enum, "TextFlag");
static gsi::ClassExt<Qt_Namespace> decl_Qt_TextFlag_Enums_as_child (decl_Qt_TextFlag_Enums, "QFlags_TextFlag");

}


//  Implementation of the enum wrapper class for Qt::TextFormat
namespace qt_gsi
{

static gsi::Enum<Qt::TextFormat> decl_Qt_TextFormat_Enum ("QtCore", "Qt_TextFormat",
    gsi::enum_const ("PlainText", Qt::PlainText, "@brief Enum constant Qt::PlainText") +
    gsi::enum_const ("RichText", Qt::RichText, "@brief Enum constant Qt::RichText") +
    gsi::enum_const ("AutoText", Qt::AutoText, "@brief Enum constant Qt::AutoText") +
    gsi::enum_const ("LogText", Qt::LogText, "@brief Enum constant Qt::LogText"),
  "@qt\n@brief This class represents the Qt::TextFormat enum");

static gsi::QFlagsClass<Qt::TextFormat > decl_Qt_TextFormat_Enums ("QtCore", "Qt_QFlags_TextFormat",
  "@qt\n@brief This class represents the QFlags<Qt::TextFormat> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_TextFormat_Enum_in_parent (decl_Qt_TextFormat_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_TextFormat_Enum_as_child (decl_Qt_TextFormat_Enum, "TextFormat");
static gsi::ClassExt<Qt_Namespace> decl_Qt_TextFormat_Enums_as_child (decl_Qt_TextFormat_Enums, "QFlags_TextFormat");

}


//  Implementation of the enum wrapper class for Qt::TextInteractionFlag
namespace qt_gsi
{

static gsi::Enum<Qt::TextInteractionFlag> decl_Qt_TextInteractionFlag_Enum ("QtCore", "Qt_TextInteractionFlag",
    gsi::enum_const ("NoTextInteraction", Qt::NoTextInteraction, "@brief Enum constant Qt::NoTextInteraction") +
    gsi::enum_const ("TextSelectableByMouse", Qt::TextSelectableByMouse, "@brief Enum constant Qt::TextSelectableByMouse") +
    gsi::enum_const ("TextSelectableByKeyboard", Qt::TextSelectableByKeyboard, "@brief Enum constant Qt::TextSelectableByKeyboard") +
    gsi::enum_const ("LinksAccessibleByMouse", Qt::LinksAccessibleByMouse, "@brief Enum constant Qt::LinksAccessibleByMouse") +
    gsi::enum_const ("LinksAccessibleByKeyboard", Qt::LinksAccessibleByKeyboard, "@brief Enum constant Qt::LinksAccessibleByKeyboard") +
    gsi::enum_const ("TextEditable", Qt::TextEditable, "@brief Enum constant Qt::TextEditable") +
    gsi::enum_const ("TextEditorInteraction", Qt::TextEditorInteraction, "@brief Enum constant Qt::TextEditorInteraction") +
    gsi::enum_const ("TextBrowserInteraction", Qt::TextBrowserInteraction, "@brief Enum constant Qt::TextBrowserInteraction"),
  "@qt\n@brief This class represents the Qt::TextInteractionFlag enum");

static gsi::QFlagsClass<Qt::TextInteractionFlag > decl_Qt_TextInteractionFlag_Enums ("QtCore", "Qt_QFlags_TextInteractionFlag",
  "@qt\n@brief This class represents the QFlags<Qt::TextInteractionFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_TextInteractionFlag_Enum_in_parent (decl_Qt_TextInteractionFlag_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_TextInteractionFlag_Enum_as_child (decl_Qt_TextInteractionFlag_Enum, "TextInteractionFlag");
static gsi::ClassExt<Qt_Namespace> decl_Qt_TextInteractionFlag_Enums_as_child (decl_Qt_TextInteractionFlag_Enums, "QFlags_TextInteractionFlag");

}


//  Implementation of the enum wrapper class for Qt::TileRule
namespace qt_gsi
{

static gsi::Enum<Qt::TileRule> decl_Qt_TileRule_Enum ("QtCore", "Qt_TileRule",
    gsi::enum_const ("StretchTile", Qt::StretchTile, "@brief Enum constant Qt::StretchTile") +
    gsi::enum_const ("RepeatTile", Qt::RepeatTile, "@brief Enum constant Qt::RepeatTile") +
    gsi::enum_const ("RoundTile", Qt::RoundTile, "@brief Enum constant Qt::RoundTile"),
  "@qt\n@brief This class represents the Qt::TileRule enum");

static gsi::QFlagsClass<Qt::TileRule > decl_Qt_TileRule_Enums ("QtCore", "Qt_QFlags_TileRule",
  "@qt\n@brief This class represents the QFlags<Qt::TileRule> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_TileRule_Enum_in_parent (decl_Qt_TileRule_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_TileRule_Enum_as_child (decl_Qt_TileRule_Enum, "TileRule");
static gsi::ClassExt<Qt_Namespace> decl_Qt_TileRule_Enums_as_child (decl_Qt_TileRule_Enums, "QFlags_TileRule");

}


//  Implementation of the enum wrapper class for Qt::TimeSpec
namespace qt_gsi
{

static gsi::Enum<Qt::TimeSpec> decl_Qt_TimeSpec_Enum ("QtCore", "Qt_TimeSpec",
    gsi::enum_const ("LocalTime", Qt::LocalTime, "@brief Enum constant Qt::LocalTime") +
    gsi::enum_const ("UTC", Qt::UTC, "@brief Enum constant Qt::UTC") +
    gsi::enum_const ("OffsetFromUTC", Qt::OffsetFromUTC, "@brief Enum constant Qt::OffsetFromUTC"),
  "@qt\n@brief This class represents the Qt::TimeSpec enum");

static gsi::QFlagsClass<Qt::TimeSpec > decl_Qt_TimeSpec_Enums ("QtCore", "Qt_QFlags_TimeSpec",
  "@qt\n@brief This class represents the QFlags<Qt::TimeSpec> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_TimeSpec_Enum_in_parent (decl_Qt_TimeSpec_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_TimeSpec_Enum_as_child (decl_Qt_TimeSpec_Enum, "TimeSpec");
static gsi::ClassExt<Qt_Namespace> decl_Qt_TimeSpec_Enums_as_child (decl_Qt_TimeSpec_Enums, "QFlags_TimeSpec");

}

