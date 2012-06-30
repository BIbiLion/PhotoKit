/******************************************************************************
	NextEffect_None: No effect.
	Copyright (C) 2011 Wang Bin <wbsecg1@gmail.com>

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License along
	with this program; if not, write to the Free Software Foundation, Inc.,
	51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
******************************************************************************/

#include "nexteffect_none.h"
#include "nexteffectfactory.h"


REGISTER_EFFECT(None, None)

NextEffect_None::NextEffect_None()
	:NextEffect()
{
	effect_type = None;
	frames_total = 1;
}

bool NextEffect_None::prepareFrameAt(int frame)
{
	frames_total = 1;
	if (frame>frames_total)
		return false;
	current_frame = frame;
	next_clip_region = QRegion(0, 0, width, height);
	current_clip_region = QRegion(0, 0, width, height) - next_clip_region;
	current_rect = QRect();//QRect(0, 0, width, height);
	return true;
}
