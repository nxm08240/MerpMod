/*
	Copyright (C) 2012-2013 Merrill A. Myers III merrillamyersiii@gmail.com
	
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
*/

#include "EcuHacks.h"

#if INJECTOR_HACKS

float INJECTOR_SCALING_ROWS[11] INJECTORDATA =
{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0};

short INJECTOR_SCALING_DATA[11] INJECTORDATA =
{0,3276,6552,9828,13104,16380,19656,22932,26208,29484,32760};

TwoDTable InjectorScaling2D  INJECTORDATA = {
	.columnCount = 11,
	.tableType = UInt16Table2D,
	.columnHeaderArray = INJECTOR_SCALING_ROWS,
	.tableCells = INJECTOR_SCALING_DATA,
	.multiplier = 0.1983703115939817f,	//TODO: test this output!!
	.offset = 500.0 };
//! 6500/32767  (500-7000.00 RAW range, 16bit precision, converts to: 5414cc to 387cc range. 

#endif