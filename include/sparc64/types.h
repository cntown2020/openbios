/* tag: data types for forth engine
 *
 * Copyright (C) 2003-2005 Patrick Mauritz, Stefan Reinauer
 *
 * See the file "COPYING" for further information about
 * the copyright and warranty status of this work.
 */

#ifndef __TYPES_H
#define __TYPES_H

#include "mconfig.h"

#include <stdint.h>

/* cell based types */
typedef int64_t		 cell;
typedef uint64_t	ucell;
typedef long long	dcell;
typedef unsigned long long ducell;

#define bitspercell	(sizeof(cell)<<3)
#define bitsperdcell	(sizeof(dcell)<<3)

#define BITS		64

/* size named types */

typedef unsigned char   u8;
typedef unsigned short u16;
typedef unsigned int   u32;
typedef unsigned long  u64;

typedef signed char	s8;
typedef short		s16;
typedef int		s32;
typedef long    	s64;

#endif
