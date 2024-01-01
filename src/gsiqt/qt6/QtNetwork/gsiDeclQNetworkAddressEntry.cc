
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
*  @file gsiDeclQNetworkAddressEntry.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QNetworkAddressEntry>
#include <QDeadlineTimer>
#include <QHostAddress>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QNetworkAddressEntry

//  Constructor QNetworkAddressEntry::QNetworkAddressEntry()


static void _init_ctor_QNetworkAddressEntry_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QNetworkAddressEntry> ();
}

static void _call_ctor_QNetworkAddressEntry_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNetworkAddressEntry *> (new QNetworkAddressEntry ());
}


//  Constructor QNetworkAddressEntry::QNetworkAddressEntry(const QNetworkAddressEntry &other)


static void _init_ctor_QNetworkAddressEntry_3380 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkAddressEntry & > (argspec_0);
  decl->set_return_new<QNetworkAddressEntry> ();
}

static void _call_ctor_QNetworkAddressEntry_3380 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkAddressEntry &arg1 = gsi::arg_reader<const QNetworkAddressEntry & >() (args, heap);
  ret.write<QNetworkAddressEntry *> (new QNetworkAddressEntry (arg1));
}


// QHostAddress QNetworkAddressEntry::broadcast()


static void _init_f_broadcast_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QHostAddress > ();
}

static void _call_f_broadcast_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QHostAddress > ((QHostAddress)((QNetworkAddressEntry *)cls)->broadcast ());
}


// void QNetworkAddressEntry::clearAddressLifetime()


static void _init_f_clearAddressLifetime_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clearAddressLifetime_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkAddressEntry *)cls)->clearAddressLifetime ();
}


// QNetworkAddressEntry::DnsEligibilityStatus QNetworkAddressEntry::dnsEligibility()


static void _init_f_dnsEligibility_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QNetworkAddressEntry::DnsEligibilityStatus>::target_type > ();
}

static void _call_f_dnsEligibility_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QNetworkAddressEntry::DnsEligibilityStatus>::target_type > ((qt_gsi::Converter<QNetworkAddressEntry::DnsEligibilityStatus>::target_type)qt_gsi::CppToQtAdaptor<QNetworkAddressEntry::DnsEligibilityStatus>(((QNetworkAddressEntry *)cls)->dnsEligibility ()));
}


// QHostAddress QNetworkAddressEntry::ip()


static void _init_f_ip_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QHostAddress > ();
}

static void _call_f_ip_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QHostAddress > ((QHostAddress)((QNetworkAddressEntry *)cls)->ip ());
}


// bool QNetworkAddressEntry::isLifetimeKnown()


static void _init_f_isLifetimeKnown_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isLifetimeKnown_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QNetworkAddressEntry *)cls)->isLifetimeKnown ());
}


// bool QNetworkAddressEntry::isPermanent()


static void _init_f_isPermanent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isPermanent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QNetworkAddressEntry *)cls)->isPermanent ());
}


// bool QNetworkAddressEntry::isTemporary()


static void _init_f_isTemporary_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isTemporary_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QNetworkAddressEntry *)cls)->isTemporary ());
}


// QHostAddress QNetworkAddressEntry::netmask()


static void _init_f_netmask_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QHostAddress > ();
}

static void _call_f_netmask_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QHostAddress > ((QHostAddress)((QNetworkAddressEntry *)cls)->netmask ());
}


// bool QNetworkAddressEntry::operator!=(const QNetworkAddressEntry &other)


static void _init_f_operator_excl__eq__c3380 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkAddressEntry & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3380 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkAddressEntry &arg1 = gsi::arg_reader<const QNetworkAddressEntry & >() (args, heap);
  ret.write<bool > ((bool)((QNetworkAddressEntry *)cls)->operator!= (arg1));
}


// QNetworkAddressEntry &QNetworkAddressEntry::operator=(const QNetworkAddressEntry &other)


static void _init_f_operator_eq__3380 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkAddressEntry & > (argspec_0);
  decl->set_return<QNetworkAddressEntry & > ();
}

static void _call_f_operator_eq__3380 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkAddressEntry &arg1 = gsi::arg_reader<const QNetworkAddressEntry & >() (args, heap);
  ret.write<QNetworkAddressEntry & > ((QNetworkAddressEntry &)((QNetworkAddressEntry *)cls)->operator= (arg1));
}


// bool QNetworkAddressEntry::operator==(const QNetworkAddressEntry &other)


static void _init_f_operator_eq__eq__c3380 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkAddressEntry & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3380 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkAddressEntry &arg1 = gsi::arg_reader<const QNetworkAddressEntry & >() (args, heap);
  ret.write<bool > ((bool)((QNetworkAddressEntry *)cls)->operator== (arg1));
}


// QDeadlineTimer QNetworkAddressEntry::preferredLifetime()


static void _init_f_preferredLifetime_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDeadlineTimer > ();
}

static void _call_f_preferredLifetime_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDeadlineTimer > ((QDeadlineTimer)((QNetworkAddressEntry *)cls)->preferredLifetime ());
}


// int QNetworkAddressEntry::prefixLength()


static void _init_f_prefixLength_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_prefixLength_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QNetworkAddressEntry *)cls)->prefixLength ());
}


// void QNetworkAddressEntry::setAddressLifetime(QDeadlineTimer preferred, QDeadlineTimer validity)


static void _init_f_setAddressLifetime_3532 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("preferred");
  decl->add_arg<QDeadlineTimer > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("validity");
  decl->add_arg<QDeadlineTimer > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setAddressLifetime_3532 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QDeadlineTimer arg1 = gsi::arg_reader<QDeadlineTimer >() (args, heap);
  QDeadlineTimer arg2 = gsi::arg_reader<QDeadlineTimer >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkAddressEntry *)cls)->setAddressLifetime (arg1, arg2);
}


// void QNetworkAddressEntry::setBroadcast(const QHostAddress &newBroadcast)


static void _init_f_setBroadcast_2518 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newBroadcast");
  decl->add_arg<const QHostAddress & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBroadcast_2518 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = gsi::arg_reader<const QHostAddress & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkAddressEntry *)cls)->setBroadcast (arg1);
}


// void QNetworkAddressEntry::setDnsEligibility(QNetworkAddressEntry::DnsEligibilityStatus status)


static void _init_f_setDnsEligibility_4699 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("status");
  decl->add_arg<const qt_gsi::Converter<QNetworkAddressEntry::DnsEligibilityStatus>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDnsEligibility_4699 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QNetworkAddressEntry::DnsEligibilityStatus>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QNetworkAddressEntry::DnsEligibilityStatus>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkAddressEntry *)cls)->setDnsEligibility (qt_gsi::QtToCppAdaptor<QNetworkAddressEntry::DnsEligibilityStatus>(arg1).cref());
}


// void QNetworkAddressEntry::setIp(const QHostAddress &newIp)


static void _init_f_setIp_2518 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newIp");
  decl->add_arg<const QHostAddress & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setIp_2518 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = gsi::arg_reader<const QHostAddress & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkAddressEntry *)cls)->setIp (arg1);
}


// void QNetworkAddressEntry::setNetmask(const QHostAddress &newNetmask)


static void _init_f_setNetmask_2518 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newNetmask");
  decl->add_arg<const QHostAddress & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setNetmask_2518 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = gsi::arg_reader<const QHostAddress & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkAddressEntry *)cls)->setNetmask (arg1);
}


// void QNetworkAddressEntry::setPrefixLength(int length)


static void _init_f_setPrefixLength_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("length");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPrefixLength_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkAddressEntry *)cls)->setPrefixLength (arg1);
}


// void QNetworkAddressEntry::swap(QNetworkAddressEntry &other)


static void _init_f_swap_2685 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QNetworkAddressEntry & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2685 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QNetworkAddressEntry &arg1 = gsi::arg_reader<QNetworkAddressEntry & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkAddressEntry *)cls)->swap (arg1);
}


// QDeadlineTimer QNetworkAddressEntry::validityLifetime()


static void _init_f_validityLifetime_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDeadlineTimer > ();
}

static void _call_f_validityLifetime_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDeadlineTimer > ((QDeadlineTimer)((QNetworkAddressEntry *)cls)->validityLifetime ());
}



namespace gsi
{

static gsi::Methods methods_QNetworkAddressEntry () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QNetworkAddressEntry::QNetworkAddressEntry()\nThis method creates an object of class QNetworkAddressEntry.", &_init_ctor_QNetworkAddressEntry_0, &_call_ctor_QNetworkAddressEntry_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QNetworkAddressEntry::QNetworkAddressEntry(const QNetworkAddressEntry &other)\nThis method creates an object of class QNetworkAddressEntry.", &_init_ctor_QNetworkAddressEntry_3380, &_call_ctor_QNetworkAddressEntry_3380);
  methods += new qt_gsi::GenericMethod (":broadcast", "@brief Method QHostAddress QNetworkAddressEntry::broadcast()\n", true, &_init_f_broadcast_c0, &_call_f_broadcast_c0);
  methods += new qt_gsi::GenericMethod ("clearAddressLifetime", "@brief Method void QNetworkAddressEntry::clearAddressLifetime()\n", false, &_init_f_clearAddressLifetime_0, &_call_f_clearAddressLifetime_0);
  methods += new qt_gsi::GenericMethod (":dnsEligibility", "@brief Method QNetworkAddressEntry::DnsEligibilityStatus QNetworkAddressEntry::dnsEligibility()\n", true, &_init_f_dnsEligibility_c0, &_call_f_dnsEligibility_c0);
  methods += new qt_gsi::GenericMethod (":ip", "@brief Method QHostAddress QNetworkAddressEntry::ip()\n", true, &_init_f_ip_c0, &_call_f_ip_c0);
  methods += new qt_gsi::GenericMethod ("isLifetimeKnown?", "@brief Method bool QNetworkAddressEntry::isLifetimeKnown()\n", true, &_init_f_isLifetimeKnown_c0, &_call_f_isLifetimeKnown_c0);
  methods += new qt_gsi::GenericMethod ("isPermanent?", "@brief Method bool QNetworkAddressEntry::isPermanent()\n", true, &_init_f_isPermanent_c0, &_call_f_isPermanent_c0);
  methods += new qt_gsi::GenericMethod ("isTemporary?", "@brief Method bool QNetworkAddressEntry::isTemporary()\n", true, &_init_f_isTemporary_c0, &_call_f_isTemporary_c0);
  methods += new qt_gsi::GenericMethod (":netmask", "@brief Method QHostAddress QNetworkAddressEntry::netmask()\n", true, &_init_f_netmask_c0, &_call_f_netmask_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QNetworkAddressEntry::operator!=(const QNetworkAddressEntry &other)\n", true, &_init_f_operator_excl__eq__c3380, &_call_f_operator_excl__eq__c3380);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QNetworkAddressEntry &QNetworkAddressEntry::operator=(const QNetworkAddressEntry &other)\n", false, &_init_f_operator_eq__3380, &_call_f_operator_eq__3380);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QNetworkAddressEntry::operator==(const QNetworkAddressEntry &other)\n", true, &_init_f_operator_eq__eq__c3380, &_call_f_operator_eq__eq__c3380);
  methods += new qt_gsi::GenericMethod ("preferredLifetime", "@brief Method QDeadlineTimer QNetworkAddressEntry::preferredLifetime()\n", true, &_init_f_preferredLifetime_c0, &_call_f_preferredLifetime_c0);
  methods += new qt_gsi::GenericMethod (":prefixLength", "@brief Method int QNetworkAddressEntry::prefixLength()\n", true, &_init_f_prefixLength_c0, &_call_f_prefixLength_c0);
  methods += new qt_gsi::GenericMethod ("setAddressLifetime", "@brief Method void QNetworkAddressEntry::setAddressLifetime(QDeadlineTimer preferred, QDeadlineTimer validity)\n", false, &_init_f_setAddressLifetime_3532, &_call_f_setAddressLifetime_3532);
  methods += new qt_gsi::GenericMethod ("setBroadcast|broadcast=", "@brief Method void QNetworkAddressEntry::setBroadcast(const QHostAddress &newBroadcast)\n", false, &_init_f_setBroadcast_2518, &_call_f_setBroadcast_2518);
  methods += new qt_gsi::GenericMethod ("setDnsEligibility|dnsEligibility=", "@brief Method void QNetworkAddressEntry::setDnsEligibility(QNetworkAddressEntry::DnsEligibilityStatus status)\n", false, &_init_f_setDnsEligibility_4699, &_call_f_setDnsEligibility_4699);
  methods += new qt_gsi::GenericMethod ("setIp|ip=", "@brief Method void QNetworkAddressEntry::setIp(const QHostAddress &newIp)\n", false, &_init_f_setIp_2518, &_call_f_setIp_2518);
  methods += new qt_gsi::GenericMethod ("setNetmask|netmask=", "@brief Method void QNetworkAddressEntry::setNetmask(const QHostAddress &newNetmask)\n", false, &_init_f_setNetmask_2518, &_call_f_setNetmask_2518);
  methods += new qt_gsi::GenericMethod ("setPrefixLength|prefixLength=", "@brief Method void QNetworkAddressEntry::setPrefixLength(int length)\n", false, &_init_f_setPrefixLength_767, &_call_f_setPrefixLength_767);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QNetworkAddressEntry::swap(QNetworkAddressEntry &other)\n", false, &_init_f_swap_2685, &_call_f_swap_2685);
  methods += new qt_gsi::GenericMethod ("validityLifetime", "@brief Method QDeadlineTimer QNetworkAddressEntry::validityLifetime()\n", true, &_init_f_validityLifetime_c0, &_call_f_validityLifetime_c0);
  return methods;
}

gsi::Class<QNetworkAddressEntry> decl_QNetworkAddressEntry ("QtNetwork", "QNetworkAddressEntry",
  methods_QNetworkAddressEntry (),
  "@qt\n@brief Binding of QNetworkAddressEntry");


GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkAddressEntry> &qtdecl_QNetworkAddressEntry () { return decl_QNetworkAddressEntry; }

}


//  Implementation of the enum wrapper class for QNetworkAddressEntry::DnsEligibilityStatus
namespace qt_gsi
{

static gsi::Enum<QNetworkAddressEntry::DnsEligibilityStatus> decl_QNetworkAddressEntry_DnsEligibilityStatus_Enum ("QtNetwork", "QNetworkAddressEntry_DnsEligibilityStatus",
    gsi::enum_const ("DnsEligibilityUnknown", QNetworkAddressEntry::DnsEligibilityUnknown, "@brief Enum constant QNetworkAddressEntry::DnsEligibilityUnknown") +
    gsi::enum_const ("DnsIneligible", QNetworkAddressEntry::DnsIneligible, "@brief Enum constant QNetworkAddressEntry::DnsIneligible") +
    gsi::enum_const ("DnsEligible", QNetworkAddressEntry::DnsEligible, "@brief Enum constant QNetworkAddressEntry::DnsEligible"),
  "@qt\n@brief This class represents the QNetworkAddressEntry::DnsEligibilityStatus enum");

static gsi::QFlagsClass<QNetworkAddressEntry::DnsEligibilityStatus > decl_QNetworkAddressEntry_DnsEligibilityStatus_Enums ("QtNetwork", "QNetworkAddressEntry_QFlags_DnsEligibilityStatus",
  "@qt\n@brief This class represents the QFlags<QNetworkAddressEntry::DnsEligibilityStatus> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QNetworkAddressEntry> inject_QNetworkAddressEntry_DnsEligibilityStatus_Enum_in_parent (decl_QNetworkAddressEntry_DnsEligibilityStatus_Enum.defs ());
static gsi::ClassExt<QNetworkAddressEntry> decl_QNetworkAddressEntry_DnsEligibilityStatus_Enum_as_child (decl_QNetworkAddressEntry_DnsEligibilityStatus_Enum, "DnsEligibilityStatus");
static gsi::ClassExt<QNetworkAddressEntry> decl_QNetworkAddressEntry_DnsEligibilityStatus_Enums_as_child (decl_QNetworkAddressEntry_DnsEligibilityStatus_Enums, "QFlags_DnsEligibilityStatus");

}

