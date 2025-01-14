/*--------------------------------------------------------------------
 *
 *	Copyright (c) 1991-2023 by the GMT Team (https://www.generic-mapping-tools.org/team.html)
 *	See LICENSE.TXT file for copying and redistribution conditions.
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU Lesser General Public License as published by
 *	the Free Software Foundation; version 3 or any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU Lesser General Public License for more details.
 *
 *	Contact info: www.generic-mapping-tools.org
 *--------------------------------------------------------------------*/

#ifndef FILTER1D_INC_H
#define FILTER1D_INC_H

/* Translation table from long to short module options, directives and modifiers */

static struct GMT_KEYWORD_DICTIONARY module_kw[] = {
	/* separator, short_option, long_option,
		  short_directives,    long_directives,
		  short_modifiers,     long_modifiers,
		  transproc_mask */
	{ 0, 'D', "inc|increment",     "", "", "", "", GMT_TP_STANDARD },
	{ 0, 'E', "end",               "", "", "", "", GMT_TP_STANDARD },
	{ 0, 'F', "filter|filter_type",
	          "b,B,c,C,g,G,f,F,m,M,p,P,l,L,u,U",
				       "boxcar,rboxcar,cosarch,rcosarch,gaussian,rgaussian,custom,rcustom,median,rmedian,mlprob,rmlprob,minall,minpos,maxall,maxneg",
	          "h,l,u",             "highpass,lower,upper",
		  GMT_TP_STANDARD },
	{ 0, 'L', "gap_width",         "", "", "", "", GMT_TP_STANDARD },
	{ 0, 'N', "time_column|time_col",          "", "", "", "", GMT_TP_STANDARD },
	{ 0, 'Q', "quality",           "", "", "", "", GMT_TP_STANDARD },
	{ 0, 'S', "symmetry",          "", "", "", "", GMT_TP_STANDARD },
	{ 0, 'T', "range|series",
		  "",                  "",
		  "a,e,i,n",           "array,exact,inverse,number",
		  GMT_TP_STANDARD },
	{ 0, '\0', "", "", "", "", "", 0 }  /* End of list marked with empty option and strings */
};
#endif  /* !FILTER1D_INC_H */
