/*   -*- buffer-read-only: t -*- vi: set ro:
 *  
 *  DO NOT EDIT THIS FILE   (genshell.c)
 *  
 *  It has been AutoGen-ed  January  6, 2013 at 05:54:52 PM by AutoGen 5.17.1
 *  From the definitions    genshell.def
 *  and the template file   options
 *
 * Generated from AutoOpts 37:1:12 templates.
 *
 *  AutoOpts is a copyrighted work.  This source file is not encumbered
 *  by AutoOpts licensing, but is provided under the licensing terms chosen
 *  by the genshellopt author or copyright holder.  AutoOpts is
 *  licensed under the terms of the LGPL.  The redistributable library
 *  (``libopts'') is licensed under the terms of either the LGPL or, at the
 *  users discretion, the BSD license.  See the AutoOpts and/or libopts sources
 *  for details.
 *
 * The genshellopt program is copyrighted and licensed
 * under the following terms:
 *
 *  Copyright (C) 1999-2012 Bruce Korb, all rights reserved.
 *  This is free software. It is licensed for use, modification and
 *  redistribution under the terms of the
 *  GNU General Public License, version 3 or later
 *      <http://gnu.org/licenses/gpl.html>
 *
 *  genshellopt is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  
 *  genshellopt is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License along
 *  with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __doxygen__
#define OPTION_CODE_COMPILE 1
#include "genshell.h"
#include <sys/types.h>

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef  __cplusplus
extern "C" {
#endif
extern FILE * option_usage_fp;

/* TRANSLATORS: choose the translation for option names wisely because you
                cannot ever change your mind. */
#define zCopyright      (genshellopt_opt_strs+0)
#define zLicenseDescrip (genshellopt_opt_strs+260)

extern tUsageProc genshelloptUsage;

#ifndef NULL
#  define NULL 0
#endif

/*
 *  genshellopt option static const strings
 */
static char const genshellopt_opt_strs[1685] =
/*     0 */ "genshellopt 1\n"
            "Copyright (C) 1999-2012 Bruce Korb, all rights reserved.\n"
            "This is free software. It is licensed for use, modification and\n"
            "redistribution under the terms of the\n"
            "GNU General Public License, version 3 or later\n"
            "    <http://gnu.org/licenses/gpl.html>\n\0"
/*   260 */ "genshellopt is free software: you can redistribute it and/or modify it\n"
            "under the terms of the GNU General Public License as published by the Free\n"
            "Software Foundation, either version 3 of the License, or (at your option)\n"
            "any later version.\n\n"
            "genshellopt is distributed in the hope that it will be useful, but WITHOUT\n"
            "ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or\n"
            "FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for\n"
            "more details.\n\n"
            "You should have received a copy of the GNU General Public License along\n"
            "with this program.  If not, see <http://www.gnu.org/licenses/>.\n\0"
/*   871 */ "Output Script File\0"
/*   890 */ "SCRIPT\0"
/*   897 */ "script\0"
/*   904 */ "Shell name (follows \"#!\" magic)\0"
/*   936 */ "SHELL\0"
/*   942 */ "no-shell\0"
/*   951 */ "no\0"
/*   954 */ "Display extended usage information and exit\0"
/*   998 */ "help\0"
/*  1003 */ "Extended usage information passed thru pager\0"
/*  1048 */ "more-help\0"
/*  1058 */ "Output version information and exit\0"
/*  1094 */ "version\0"
/*  1102 */ "GENSHELLOPT\0"
/*  1114 */ "genshellopt - Generate Shell Option Processing Script - Ver. 1\n"
            "USAGE:  %s [ -<flag> [<val>] | --<name>[{=| }<val>] ]...\n\0"
/*  1235 */ "autogen-users@lists.sourceforge.net\0"
/*  1271 */ "\n"
            "Note that 'shell' is only useful if the output file does not already exist.\n"
            "If it does, then the shell name and optional first argument will be\n"
            "extracted from the script file.\n\0"
/*  1449 */ "\n"
            "If the script file already exists and contains Automated Option Processing\n"
            "text, the second line of the file through the ending tag will be replaced\n"
            "by the newly generated text.  The first '#!' line will be regenerated.\n\0"
/*  1671 */ "genshellopt 1";

/*
 *  script option description:
 */
#define SCRIPT_DESC      (genshellopt_opt_strs+871)
#define SCRIPT_NAME      (genshellopt_opt_strs+890)
#define SCRIPT_name      (genshellopt_opt_strs+897)
#define SCRIPT_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_STRING))

/*
 *  shell option description:
 */
#define SHELL_DESC      (genshellopt_opt_strs+904)
#define SHELL_NAME      (genshellopt_opt_strs+936)
#define NOT_SHELL_name  (genshellopt_opt_strs+942)
#define NOT_SHELL_PFX   (genshellopt_opt_strs+951)
#define SHELL_name      (NOT_SHELL_name + 3)
#define SHELL_FLAGS     (OPTST_INITENABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_STRING))

/*
 *  Help/More_Help/Version option descriptions:
 */
#define HELP_DESC       (genshellopt_opt_strs+954)
#define HELP_name       (genshellopt_opt_strs+998)
#ifdef HAVE_WORKING_FORK
#define MORE_HELP_DESC  (genshellopt_opt_strs+1003)
#define MORE_HELP_name  (genshellopt_opt_strs+1048)
#define MORE_HELP_FLAGS (OPTST_IMM | OPTST_NO_INIT)
#else
#define MORE_HELP_DESC  NULL
#define MORE_HELP_name  NULL
#define MORE_HELP_FLAGS (OPTST_OMITTED | OPTST_NO_INIT)
#endif
#ifdef NO_OPTIONAL_OPT_ARGS
#  define VER_FLAGS     (OPTST_IMM | OPTST_NO_INIT)
#else
#  define VER_FLAGS     (OPTST_SET_ARGTYPE(OPARG_TYPE_STRING) | \
                         OPTST_ARG_OPTIONAL | OPTST_IMM | OPTST_NO_INIT)
#endif
#define VER_DESC        (genshellopt_opt_strs+1058)
#define VER_name        (genshellopt_opt_strs+1094)
/*
 *  Declare option callback procedures
 */
extern tOptProc
    optionBooleanVal,   optionNestedVal,    optionNumericVal,
    optionPagedUsage,   optionPrintVersion, optionResetOpt,
    optionStackArg,     optionTimeDate,     optionTimeVal,
    optionUnstackArg,   optionVendorOption;
static tOptProc
    doUsageOpt;
#define VER_PROC        optionPrintVersion

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 *  Define the genshellopt Option Descriptions.
 * This is an array of GENSHELL_OPTION_CT entries, one for each
 * option that the genshellopt program responds to.
 */
static tOptDesc optDesc[GENSHELL_OPTION_CT] = {
  {  /* entry idx, value */ 0, VALUE_GENSHELL_OPT_SCRIPT,
     /* equiv idx, value */ 0, VALUE_GENSHELL_OPT_SCRIPT,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ SCRIPT_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --script */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ SCRIPT_DESC, SCRIPT_NAME, SCRIPT_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 1, VALUE_GENSHELL_OPT_SHELL,
     /* equiv idx, value */ 1, VALUE_GENSHELL_OPT_SHELL,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ SHELL_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --shell */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ SHELL_DESC, SHELL_NAME, SHELL_name,
     /* disablement strs */ NOT_SHELL_name, NOT_SHELL_PFX },

  {  /* entry idx, value */ INDEX_GENSHELL_OPT_VERSION, VALUE_GENSHELL_OPT_VERSION,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_GENSHELL_OPT_VERSION,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ VER_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ VER_PROC,
     /* desc, NAME, name */ VER_DESC, NULL, VER_name,
     /* disablement strs */ NULL, NULL },



  {  /* entry idx, value */ INDEX_GENSHELL_OPT_HELP, VALUE_GENSHELL_OPT_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_GENSHELL_OPT_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ OPTST_IMM | OPTST_NO_INIT, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doUsageOpt,
     /* desc, NAME, name */ HELP_DESC, NULL, HELP_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_GENSHELL_OPT_MORE_HELP, VALUE_GENSHELL_OPT_MORE_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_GENSHELL_OPT_MORE_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ MORE_HELP_FLAGS, 0,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL,  NULL,
     /* option proc      */ optionPagedUsage,
     /* desc, NAME, name */ MORE_HELP_DESC, NULL, MORE_HELP_name,
     /* disablement strs */ NULL, NULL }
};


/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  Define the genshellopt Option Environment
 */
#define zPROGNAME       (genshellopt_opt_strs+1102)
#define zUsageTitle     (genshellopt_opt_strs+1114)
#define zRcName         NULL
#define apzHomeList     NULL
#define zBugsAddr       (genshellopt_opt_strs+1235)
#define zExplain        (genshellopt_opt_strs+1271)
#define zDetail         (genshellopt_opt_strs+1449)
#define zFullVersion    (genshellopt_opt_strs+1671)
/* extracted from optcode.tlib near line 353 */

#if defined(ENABLE_NLS)
# define OPTPROC_BASE OPTPROC_TRANSLATE
  static tOptionXlateProc translate_option_strings;
#else
# define OPTPROC_BASE OPTPROC_NONE
# define translate_option_strings NULL
#endif /* ENABLE_NLS */


#define genshellopt_full_usage (NULL)

#define genshellopt_short_usage (NULL)

#endif /* not defined __doxygen__ */

/*
 *  Create the static procedure(s) declared above.
 */
/**
 * The callout function that invokes the genshelloptUsage function.
 *
 * @param pOptions the AutoOpts option description structure
 * @param pOptDesc the descriptor for the "help" (usage) option.
 * @noreturn
 */
static void
doUsageOpt(tOptions * pOptions, tOptDesc * pOptDesc)
{
    genshelloptUsage(&genshelloptOptions, GENSHELLOPT_EXIT_SUCCESS);
    /* NOTREACHED */
    (void)pOptDesc;
    (void)pOptions;
}
/* extracted from optmain.tlib near line 1196 */

/**
 * The directory containing the data associated with genshellopt.
 */
#ifndef  PKGDATADIR
# define PKGDATADIR ""
#endif

/**
 * Information about the person or institution that packaged genshellopt
 * for the current distribution.
 */
#ifndef  WITH_PACKAGER
# define genshellopt_packager_info NULL
#else
static char const genshellopt_packager_info[] =
    "Packaged by " WITH_PACKAGER

# ifdef WITH_PACKAGER_VERSION
        " ("WITH_PACKAGER_VERSION")"
# endif

# ifdef WITH_PACKAGER_BUG_REPORTS
    "\nReport genshellopt bugs to " WITH_PACKAGER_BUG_REPORTS
# endif
    "\n";
#endif
#ifndef __doxygen__

#endif /* __doxygen__ */
/**
 * The option definitions for genshellopt.  The one structure that
 * binds them all.
 */
tOptions genshelloptOptions = {
    OPTIONS_STRUCT_VERSION,
    0, NULL,                    /* original argc + argv    */
    ( OPTPROC_BASE
    + OPTPROC_ERRSTOP
    + OPTPROC_SHORTOPT
    + OPTPROC_LONGOPT
    + OPTPROC_NO_REQ_OPT
    + OPTPROC_NEGATIONS
    + OPTPROC_NO_ARGS ),
    0, NULL,                    /* current option index, current option */
    NULL,         NULL,         zPROGNAME,
    zRcName,      zCopyright,   zLicenseDescrip,
    zFullVersion, apzHomeList,  zUsageTitle,
    zExplain,     zDetail,      optDesc,
    zBugsAddr,                  /* address to send bugs to */
    NULL, NULL,                 /* extensions/saved state  */
    genshelloptUsage, /* usage procedure */
    translate_option_strings,   /* translation procedure */
    /*
     *  Indexes to special options
     */
    { INDEX_GENSHELL_OPT_MORE_HELP, /* more-help option index */
      NO_EQUIVALENT, /* save option index */
      NO_EQUIVALENT, /* '-#' option index */
      NO_EQUIVALENT /* index of default opt */
    },
    5 /* full option count */, 2 /* user option count */,
    genshellopt_full_usage, genshellopt_short_usage,
    NULL, NULL,
    PKGDATADIR, genshellopt_packager_info
};

#if ENABLE_NLS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#ifdef HAVE_DCGETTEXT
# include <gettext.h>
#endif
#include <autoopts/usage-txt.h>

static char * AO_gettext(char const * pz);
static void   coerce_it(void ** s);

/**
 * AutoGen specific wrapper function for gettext.  It relies on the macro _()
 * to convert from English to the target language, then strdup-duplicates the
 * result string.  It tries the "libopts" domain first, then whatever has been
 * set via the \a textdomain(3) call.
 *
 * @param[in] pz the input text used as a lookup key.
 * @returns the translated text (if there is one),
 *   or the original text (if not).
 */
static char *
AO_gettext(char const * pz)
{
    char * res;
    if (pz == NULL)
        return NULL;
#ifdef HAVE_DCGETTEXT
    /*
     * While processing the option_xlateable_txt data, try to use the
     * "libopts" domain.  Once we switch to the option descriptor data,
     * do *not* use that domain.
     */
    if (option_xlateable_txt.field_ct != 0) {
        res = dgettext("libopts", pz);
        if (res == pz)
            res = (char *)(void *)_(pz);
    } else
        res = (char *)(void *)_(pz);
#else
    res = (char *)(void *)_(pz);
#endif
    if (res == pz)
        return res;
    res = strdup(res);
    if (res == NULL) {
        fputs(_("No memory for duping translated strings\n"), stderr);
        exit(GENSHELLOPT_EXIT_FAILURE);
    }
    return res;
}

/**
 * All the pointers we use are marked "* const", but they are stored in
 * writable memory.  Coerce the mutability and set the pointer.
 */
static void coerce_it(void ** s) { *s = AO_gettext(*s);
}

/**
 * Translate all the translatable strings in the genshelloptOptions
 * structure defined above.  This is done only once.
 */
static void
translate_option_strings(void)
{
    tOptions * const opts = &genshelloptOptions;

    /*
     *  Guard against re-translation.  It won't work.  The strings will have
     *  been changed by the first pass through this code.  One shot only.
     */
    if (option_xlateable_txt.field_ct != 0) {
        /*
         *  Do the translations.  The first pointer follows the field count
         *  field.  The field count field is the size of a pointer.
         */
        tOptDesc * od = opts->pOptDesc;
        char **    ppz = (char**)(void*)&(option_xlateable_txt);
        int        ix  = option_xlateable_txt.field_ct;

        do {
            ppz++; /* skip over field_ct */
            *ppz = AO_gettext(*ppz);
        } while (--ix > 0);
        /* prevent re-translation and disable "libopts" domain lookup */
        option_xlateable_txt.field_ct = 0;

        coerce_it((void*)&(opts->pzCopyright));
        coerce_it((void*)&(opts->pzCopyNotice));
        coerce_it((void*)&(opts->pzFullVersion));
        coerce_it((void*)&(opts->pzUsageTitle));
        coerce_it((void*)&(opts->pzExplain));
        coerce_it((void*)&(opts->pzDetail));
        coerce_it((void*)&(opts->pzPackager));

        for (ix = opts->optCt; ix > 0; ix--, od++)
            coerce_it((void*)&(od->pzText));
    }

    if ((opts->fOptSet & OPTPROC_NXLAT_OPT_CFG) == 0) {
        tOptDesc * od = opts->pOptDesc;
        int        ix;

        for (ix = opts->optCt; ix > 0; ix--, od++) {
            coerce_it((void*)&(od->pz_Name));
            coerce_it((void*)&(od->pz_DisableName));
            coerce_it((void*)&(od->pz_DisablePfx));
        }
        genshelloptOptions.fOptSet |= OPTPROC_NXLAT_OPT_CFG | OPTPROC_NXLAT_OPT;
    }
}

#endif /* ENABLE_NLS */

#ifdef DO_NOT_COMPILE_THIS_CODE_IT_IS_FOR_GETTEXT
static void bogus_function(void) {

  /* prog-title */
  puts(_("Generate Shell Option Processing Scrip"));
  /* descrip */
  puts(_("Output Script Fil"));
  /* descrip */
  puts(_("Shell name (follows \"#!\" magic"));
  /* explain */
  puts(_("Note that 'shell' is only useful if the output file does not already exist.\n\
If it does, then the shell name and optional first argument will be\n\
extracted from the script file"));
  /* detail */
  puts(_("If the script file already exists and contains Automated Option Processing\n\
text, the second line of the file through the ending tag will be replaced\n\
by the newly generated text.  The first '#!' line will be regenerated"));
  /* copyright.type */
  puts(_("This program is released under the terms of the GNU General Public License, version 3 or later."));
}
#endif /* uncompilable code */
#ifdef  __cplusplus
}
#endif
/* genshell.c ends here */
