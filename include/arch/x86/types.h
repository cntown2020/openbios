/* tag: data types for forth engine
 *
 * This file is autogenerated by types.sh. Do not edit!
 *
 * Copyright (C) 2003-2005 Stefan Reinauer, Patrick Mauritz
 *
 * See the file "COPYING" for further information about
 * the copyright and warranty status of this work.
 */

#ifndef __TYPES_H
#define __TYPES_H

#include <stdint.h>

/* endianess */

#include "autoconf.h"

/* physical address: XXX theoretically 36 bits for PAE */
typedef uint32_t phys_addr_t;

/* cell based types */

typedef int32_t		cell;
typedef uint32_t	ucell;
typedef int64_t		dcell;
typedef uint64_t	ducell;

#define FMT_cell    "%ld"
#define FMT_ucell   "%lu"
#define FMT_ucellx  "%08x"
#define FMT_ucellX  "%08X"

#define FMT_elf     "%#x"

#define bitspercell	(sizeof(cell)<<3)
#define bitsperdcell	(sizeof(dcell)<<3)

#define BITS		32

/* size named types */

typedef unsigned char   u8;
typedef unsigned short u16;
typedef unsigned int   u32;
typedef unsigned long long u64;

typedef char  		s8;
typedef short		s16;
typedef int		s32;
typedef long long	s64;

#endif
