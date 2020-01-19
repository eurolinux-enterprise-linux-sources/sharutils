/*   -*- buffer-read-only: t -*- vi: set ro:
 *  
 *  DO NOT EDIT THIS FILE   (uudecode-opts.h)
 *  
 *  It has been AutoGen-ed  January  6, 2013 at 06:21:38 PM by AutoGen 5.17.2pre2
 *  From the definitions    uudecode-opts.def
 *  and the template file   options
 *
 * Generated from AutoOpts 37:1:12 templates.
 *
 *  AutoOpts is a copyrighted work.  This header file is not encumbered
 *  by AutoOpts licensing, but is provided under the licensing terms chosen
 *  by the uudecode author or copyright holder.  AutoOpts is
 *  licensed under the terms of the LGPL.  The redistributable library
 *  (``libopts'') is licensed under the terms of either the LGPL or, at the
 *  users discretion, the BSD license.  See the AutoOpts and/or libopts sources
 *  for details.
 *
 * The uudecode program is copyrighted and licensed
 * under the following terms:
 *
 *  Copyright (C) 1994-2013 Free Software Foundation, Inc., all rights reserved.
 *  This is free software. It is licensed for use, modification and
 *  redistribution under the terms of the
 *  GNU General Public License, version 3 or later
 *      <http://gnu.org/licenses/gpl.html>
 *
 *  uudecode is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  
 *  uudecode is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License along
 *  with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
/*
 *  This file contains the programmatic interface to the Automated
 *  Options generated for the uudecode program.
 *  These macros are documented in the AutoGen info file in the
 *  "AutoOpts" chapter.  Please refer to that doc for usage help.
 */
#ifndef AUTOOPTS_UUDECODE_OPTS_H_GUARD
#define AUTOOPTS_UUDECODE_OPTS_H_GUARD 1
#include "config.h"
#include <autoopts/options.h>
#include <stdarg.h>

/*
 *  Ensure that the library used for compiling this generated header is at
 *  least as new as the version current when the header template was released
 *  (not counting patch version increments).  Also ensure that the oldest
 *  tolerable version is at least as old as what was current when the header
 *  template was released.
 */
#define AO_TEMPLATE_VERSION 151553
#if (AO_TEMPLATE_VERSION < OPTIONS_MINIMUM_VERSION) \
 || (AO_TEMPLATE_VERSION > OPTIONS_STRUCT_VERSION)
# error option template version mismatches autoopts/options.h header
  Choke Me.
#endif

/*
 *  Enumeration of each option:
 */
typedef enum {
    INDEX_OPT_OUTPUT_FILE   =  0,
    INDEX_OPT_IGNORE_CHMOD  =  1,
    INDEX_OPT_VERSION       =  2,
    INDEX_OPT_HELP          =  3,
    INDEX_OPT_MORE_HELP     =  4,
    INDEX_OPT_SAVE_OPTS     =  5,
    INDEX_OPT_LOAD_OPTS     =  6
} teOptIndex;

#define OPTION_CT    7
#define UUDECODE_VERSION       "4.13.3"
#define UUDECODE_FULL_VERSION  "uudecode (GNU sharutils) 4.13.3"

/*
 *  Interface defines for all options.  Replace "n" with the UPPER_CASED
 *  option name (as in the teOptIndex enumeration above).
 *  e.g. HAVE_OPT(OUTPUT_FILE)
 */
#define         DESC(n) (uudecodeOptions.pOptDesc[INDEX_OPT_## n])
#define     HAVE_OPT(n) (! UNUSED_OPT(& DESC(n)))
#define      OPT_ARG(n) (DESC(n).optArg.argString)
#define    STATE_OPT(n) (DESC(n).fOptState & OPTST_SET_MASK)
#define    COUNT_OPT(n) (DESC(n).optOccCt)
#define    ISSEL_OPT(n) (SELECTED_OPT(&DESC(n)))
#define ISUNUSED_OPT(n) (UNUSED_OPT(& DESC(n)))
#define  ENABLED_OPT(n) (! DISABLED_OPT(& DESC(n)))
#define  STACKCT_OPT(n) (((tArgList*)(DESC(n).optCookie))->useCt)
#define STACKLST_OPT(n) (((tArgList*)(DESC(n).optCookie))->apzArgs)
#define    CLEAR_OPT(n) STMTS( \
                DESC(n).fOptState &= OPTST_PERSISTENT_MASK;   \
                if ((DESC(n).fOptState & OPTST_INITENABLED) == 0) \
                    DESC(n).fOptState |= OPTST_DISABLED; \
                DESC(n).optCookie = NULL )

/* * * * * *
 *
 *  Enumeration of uudecode exit codes
 */
typedef enum {
    UUDECODE_EXIT_SUCCESS           = 0,
    UUDECODE_EXIT_OPTION_ERROR      = 1,
    UUDECODE_EXIT_INVALID           = 2,
    UUDECODE_EXIT_NO_INPUT          = 4,
    UUDECODE_EXIT_NO_OUTPUT         = 8,
    UUDECODE_EXIT_USAGE_ERROR       = 64,
    UUDECODE_EXIT_NO_CONFIG_INPUT   = 66,
    UUDECODE_EXIT_LIBOPTS_FAILURE   = 70
} uudecode_exit_code_t;
/* * * * * *
 *
 *  Interface defines for specific options.
 */
#define VALUE_OPT_OUTPUT_FILE    'o'
#define VALUE_OPT_IGNORE_CHMOD   'c'
#define VALUE_OPT_HELP          'h'
#define VALUE_OPT_MORE_HELP     '!'
#define VALUE_OPT_VERSION       'v'
#define VALUE_OPT_SAVE_OPTS     'R'
#define VALUE_OPT_LOAD_OPTS     'r'
#define SET_OPT_SAVE_OPTS(a)   STMTS( \
        DESC(SAVE_OPTS).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(SAVE_OPTS).fOptState |= OPTST_SET; \
        DESC(SAVE_OPTS).optArg.argString = (char const*)(a))
/*
 *  Interface defines not associated with particular options
 */
#define ERRSKIP_OPTERR  STMTS(uudecodeOptions.fOptSet &= ~OPTPROC_ERRSTOP)
#define ERRSTOP_OPTERR  STMTS(uudecodeOptions.fOptSet |= OPTPROC_ERRSTOP)
#define RESTART_OPT(n)  STMTS( \
                uudecodeOptions.curOptIdx = (n); \
                uudecodeOptions.pzCurOpt  = NULL)
#define START_OPT       RESTART_OPT(1)
#define USAGE(c)        (*uudecodeOptions.pUsageProc)(&uudecodeOptions, c)
/* extracted from opthead.tlib near line 497 */

#ifdef  __cplusplus
extern "C" {
#endif
/*
 *  global exported definitions
 */
       #include <errno.h>
       #include <string.h>

extern void vusage_message(char const * fmt, va_list ap);
extern void usage_message(char const * fmt, ...);


/* * * * * *
 *
 *  Declare the uudecode option descriptor.
 */
extern tOptions uudecodeOptions;

#if defined(ENABLE_NLS)
# ifndef _
#   include <stdio.h>
#   ifndef HAVE_GETTEXT
      extern char * gettext(char const *);
#   else
#     include <libintl.h>
#   endif

static inline char* aoGetsText(char const* pz) {
    if (pz == NULL) return NULL;
    return (char*)gettext(pz);
}
#   define _(s)  aoGetsText(s)
# endif /* _() */

# define OPT_NO_XLAT_CFG_NAMES  STMTS(uudecodeOptions.fOptSet |= \
                                    OPTPROC_NXLAT_OPT_CFG;)
# define OPT_NO_XLAT_OPT_NAMES  STMTS(uudecodeOptions.fOptSet |= \
                                    OPTPROC_NXLAT_OPT|OPTPROC_NXLAT_OPT_CFG;)

# define OPT_XLAT_CFG_NAMES     STMTS(uudecodeOptions.fOptSet &= \
                                  ~(OPTPROC_NXLAT_OPT|OPTPROC_NXLAT_OPT_CFG);)
# define OPT_XLAT_OPT_NAMES     STMTS(uudecodeOptions.fOptSet &= \
                                  ~OPTPROC_NXLAT_OPT;)

#else   /* ENABLE_NLS */
# define OPT_NO_XLAT_CFG_NAMES
# define OPT_NO_XLAT_OPT_NAMES

# define OPT_XLAT_CFG_NAMES
# define OPT_XLAT_OPT_NAMES

# ifndef _
#   define _(_s)  _s
# endif
#endif  /* ENABLE_NLS */

extern void vdie( int exit_code, char const * fmt, va_list);
extern void die(  int exit_code, char const * fmt, ...);
extern void fserr(int exit_code, char const * op, char const * fname);

#ifdef  __cplusplus
}
#endif
#endif /* AUTOOPTS_UUDECODE_OPTS_H_GUARD */
/* uudecode-opts.h ends here */
