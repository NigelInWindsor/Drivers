#pragma once
// -------------------------------------------------------------------------
//
// PRODUCT:            DMA Driver
// MODULE NAME:        version.h
//
// MODULE DESCRIPTION:
//
// Contains the master version number and macro defines.
//
// $Revision:  $
//
// ------------------------- CONFIDENTIAL ----------------------------------
//
//              Copyright (c) 2017 by Northwest Logic, Inc.
//                       All rights reserved.
//
// Trade Secret of Northwest Logic, Inc.  Do not disclose.
//
// Use of this source code in any form or means is permitted only
// with a valid, written license agreement with Northwest Logic, Inc.
//
// Licensee shall keep all information contained herein confidential
// and shall protect same in whole or in part from disclosure and
// dissemination to all third parties.
//
//
//                        Northwest Logic, Inc.
//                  1100 NW Compton Drive, Suite 100
//                      Beaverton, OR 97006, USA
//
//                        Ph:  +1 503 533 5800
//                        Fax: +1 503 533 5900
//                      E-Mail: info@nwlogic.com
//                           www.nwlogic.com
//
// -------------------------------------------------------------------------

#ifndef _VERSION_H_
#define _VERSION_H_

#define VER_MAJOR_NUM               1
#define VER_MINOR_NUM               0
#define VER_SUBMINOR_NUM            2
#define VER_BUILD_NUM               0

#define STRINGIZE2(s) #s
#define STRINGIZE(s) STRINGIZE2(s)

#define VER_MAJOR_NUM_STR       STRINGIZE(VER_MAJOR_NUM)
#define VER_MINOR_NUM_STR       STRINGIZE(VER_MINOR_NUM)
#define VER_SUBMINOR_NUM_STR    STRINGIZE(VER_SUBMINOR_NUM)
#define VER_BUILD_NUM_STR       STRINGIZE(VER_BUILD_NUM)

#define VER_PRODUCTVERSION            VER_MAJOR_NUM, VER_MINOR_NUM, VER_SUBMINOR_NUM, VER_BUILD_NUM
#define VER_PRODUCTVERSION_STR        VER_MAJOR_NUM_STR "." VER_MINOR_NUM_STR "." VER_SUBMINOR_NUM_STR "." VER_BUILD_NUM_STR

#define VER_LEGALCOPYRIGHT_YEARS    "2016-2019"
#define VER_PRODUCTNAME_STR         "Ultrasonic Sciences Limited PM40"
#define VER_INTERNALNAME_STR        "PM40Driver.sys"
#define VER_COMPANYNAME_STR         "Ultrasonic Sciences, Ltd."
#define VER_FILEDESCRIPTION_STR     "PCI Express PM40 Driver"
#define VER_LEGALCOPYRIGHT_STR      VER_LEGALCOPYRIGHT_YEARS " " VER_COMPANYNAME_STR

#endif
