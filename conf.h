/* conf.h.  Generated automatically by configure.  */
/*
 * Configuration defines
 *
 * Copyright 2008 by Gray Watson
 *
 * This file is part of the sortu package.
 *
 * Permission to use, copy, modify, and distribute this software for
 * any purpose and without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies, and that the name of Gray Watson not be used in advertising
 * or publicity pertaining to distribution of the document or software
 * without specific, written prior permission.
 *
 * Gray Watson makes no representations about the suitability of the
 * software described herein for any purpose.  It is provided "as is"
 * without express or implied warranty.
 *
 * The author may be contacted via http://256.com/gray/
 *
 * $Id$
 */

#ifndef __CONF_H__
#define __CONF_H__

/*
 * should we include the RCS ids in the .c files and the installed
 * library?
 */
#define INCLUDE_RCS_IDS 1

/*
 ************************************************************************
 * CONFIGURE DEFINES:
 ************************************************************************
 */

/*
 * LIBRARY DEFINES:
 */

/*
 * required functions
 */
#define HAVE_ATOI 1
#define HAVE_ATOL 1
#define HAVE_EXIT 1
#define HAVE_FCLOSE 1
#define HAVE_FGETS 1
#define HAVE_FOPEN 1
#define HAVE_FPRINTF 1
#define HAVE_FPUTC 1
#define HAVE_FREE 1
#define HAVE_FWRITE 1
#define HAVE_GETENV 1
#define HAVE_MALLOC 1
#define HAVE_READ 1
#define HAVE_REALLOC 1
#define HAVE_SPRINTF 1
#define HAVE_SSCANF 1

/*
 * the argv library provides its own versions of the following
 * functions,  or knows how to work around their absence.
 */

#define HAVE_STRCHR 1
#define HAVE_STRCMP 1
#define HAVE_STRCPY 1
#define HAVE_STRLEN 1
#define HAVE_STRNCMP 1
#define HAVE_STRNCPY 1
#define HAVE_STRSEP 0

#endif /* ! __CONF_H__ */
