/*  Copyright (C) 1995 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#if defined (vms)
# include <types.h>
# include <time.h>
#else
# ifdef HAVE_STDLIB_H
#  include <stdlib.h>
# endif
# include <sys/types.h>
# ifdef TIME_WITH_SYS_TIME
#  include <sys/time.h>
#  include <time.h>
# else
#  ifdef HAVE_SYS_TIME_H
#   include <sys/time.h>
#  else
#   include <time.h>
#  endif
# endif
#endif				/* defined (vms) */

#ifdef NO_MACRO
#undef isspace
#undef isdigit
#undef isalpha
#undef isupper
#undef islower
#undef isxdigit
#undef isalnum
#undef ispunct
#undef isprint
#undef isgraph
#undef iscntrl
#undef isascii
#endif

time_t get_date (const char *p, const time_t *now);
