#pragma once
#include <graphics.h>

inline void flip_image(IMAGE* be, IMAGE* af) {
	int w = be->getwidth();
	int h = be->getheight();
	Resize(af, w, h);
	DWORD* be_buffer = GetImageBuffer(be);
	DWORD* af_buffer = GetImageBuffer(af);
	for (int y = 0; y < h; y++) {
		for (int x = 0; x < w; x++) {
			int s_num_be = y * w + x;
			int s_num_af = y * w + (w - x - 1);
			af_buffer[s_num_af] = be_buffer[s_num_be];
		}
	}
}