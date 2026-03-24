#pragma once
#include "tools.h"
#include "Atlas.h"
#include <functional>
#include <graphics.h>

class Animation {
public:
	Animation() = default;
	~Animation() = default;

	void reset() {
		timer = 0;
		s_frame = 0;
	}
	
	void set_atlas(Atlas* new_atlas) {
		reset();
		atlas = new_atlas;
	}

	void set_gap(int ms) {
		gap = ms;
	}

	int get_s_frame() {
		return s_frame;
	}

	IMAGE* get_frame() {
		return atlas->get_image(s_frame);
	}

	bool check_finished() {
		if (is_loop) {
			return false;
		}
		return(s_frame == atlas->get_size() - 1);
	}

	void set_callback(std::function<void()> callback) {
		this->callback = callback;
	}

	void on_update(int delta) {
		timer += delta;
		if (timer >= gap) {
			timer = 0;
			s_frame++;
			if (s_frame >= atlas->get_size() - 1) {
				s_frame = is_loop ? 0 : atlas->get_size() - 1;
				if (!is_loop && callback) {
					callback();
				}
			}
		}
	}

	void on_draw(int x, int y)const {
		putimage_alpha(x, y, atlas->get_image(s_frame));
	}

private:
	int timer = 0;
	int gap = 0;
	int s_frame = 0;
	bool is_loop - true;
	Atlas* atlas = nullptr;
	std::function<void()> callback;
};
