/* Copyright (c) 2016, Hamid Rohani
   All rights reserved.
*/
#ifndef _PROGRAM_VERSION_H_
#define _PROGRAM_VERSION_H_

/** \ingroup avr_version
    String literal representation of the current library version. */
#define __PROGRAM_VERSION_STRING__ "1.0.0"

/** \ingroup avr_version
    Numerical representation of the current library version.

    In the numerical representation, the major number is multiplied by
    10000, the minor number by 100, and all three parts are then
    added.  It is intented to provide a monotonically increasing
    numerical value that can easily be used in numerical checks.
 */
#define __PROGRAM_VERSION__        10000UL

/** \ingroup avr_version
    String literal representation of the release date. */
#define __PROGRAM_DATE_STRING__    "20161013"

/** \ingroup avr_version
    Numerical representation of the release date. */
#define __PROGRAM_DATE_            20161013UL

/** \ingroup avr_version
    Library major version number. */
#define __PROGRAM_MAJOR__          1

/** \ingroup avr_version
    Library minor version number. */
#define __PROGRAM_MINOR__          0

/** \ingroup avr_version
    Library revision number. */
#define __PROGRAM_REVISION__       0

#endif /* _PROGRAM_VERSION_H_ */
