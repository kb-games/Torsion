// Torsion TorqueScript IDE - Copyright (C) Sickhead Games, LLC
// This file is subject to the terms and conditions defined in
// file 'LICENSE.txt', which is part of this source code package.

#ifndef TORSION_BUILDVERSION_H
#define TORSION_BUILDVERSION_H
#pragma once


//
// WARNING: The build process will automaticly update
// BUILDVER_BUILD and BUILDVER_RESSTR when it is run,
// so don't mess with the formatting below!
//
// The build number is calculated as the number of days
// between tsBUILDVER_START and the current date.
//

//#define tsBUILDVER_START   1170288000   // time() for February 1st, 2007 00:00
#define tsBUILDVER_MAJOR   1
#define tsBUILDVER_MINOR   2
#define tsBUILDVER_FIX  1
//#define tsBUILDVER_BUILD	3930
#define tsBUILDVER_NAME    "Final"
#define tsBUILDVER_RES     tsBUILDVER_MAJOR, tsBUILDVER_MINOR, tsBUILDVER_FIX
#define tsBUILDVER_RESSTR	"1.2.0.19639"


inline wxString tsGetFullBuildString()
{
   wxString out;
   out << 'v' << tsBUILDVER_MAJOR << '.' << tsBUILDVER_MINOR << '.' << tsBUILDVER_FIX << ' ' << tsBUILDVER_NAME;
   return out;
}

#endif // TORSION_BUILDVERSION_H

