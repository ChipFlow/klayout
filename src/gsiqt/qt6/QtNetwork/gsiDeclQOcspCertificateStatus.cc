
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
*  @file gsiDeclQOcspCertificateStatus.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QOcspResponse>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// enum QOcspCertificateStatus


//  Implementation of the enum wrapper class for ::QOcspCertificateStatus
namespace qt_gsi
{

static gsi::Enum<QOcspCertificateStatus> decl_QOcspCertificateStatus_Enum ("QtNetwork", "QOcspCertificateStatus",
    gsi::enum_const ("Good", QOcspCertificateStatus::Good, "@brief Enum constant QOcspCertificateStatus::Good") +
    gsi::enum_const ("Revoked", QOcspCertificateStatus::Revoked, "@brief Enum constant QOcspCertificateStatus::Revoked") +
    gsi::enum_const ("Unknown", QOcspCertificateStatus::Unknown, "@brief Enum constant QOcspCertificateStatus::Unknown"),
  "@qt\n@brief This class represents the QOcspCertificateStatus enum");

static gsi::QFlagsClass<QOcspCertificateStatus > decl_QOcspCertificateStatus_Enums ("QtNetwork", "QFlags_QOcspCertificateStatus",
  "@qt\n@brief This class represents the QFlags<QOcspCertificateStatus> flag set");

}

