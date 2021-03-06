/**
 * @file U8GettextSimple.h
 *
 * @date 2015-10-18
 * @author Hong-She Liang <starofrainnight@gmail.com>
 */

#ifndef __U8GETTEXTSIMPLE_H_INCLUDED_3DC4756E755911E5AA6EA088B4D1658C
#define __U8GETTEXTSIMPLE_H_INCLUDED_3DC4756E755911E5AA6EA088B4D1658C

#include <U8Gettext.h>

#define _(str) u8gettext(F(str))
#define N_(str) F(str)
#define U_(str) u8gettextUNF(u8gettext(F(str)))

#endif /* __U8GETTEXTSIMPLE_H_INCLUDED_3DC4756E755911E5AA6EA088B4D1658C */
