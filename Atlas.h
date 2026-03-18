#include <vector>
#include <graphics.h>

class Atlas {
public:
    Atlas() = default;
    ~Atlas() = default;

    void load_from_file(LPCTSTR path_template, int number) {
        img_list.clear();
        img_list.resize(number);

        TCHAR path_file[256];
        for (int i = 0, i < number, i++) {
            _stprintf_s(path_file, path_template, i + 1);
            loadimage(&img_list, path_file);
        }
    }
    
    void clear() {
        img_list.clear();
    }

    void get_size() {
        return (int)img_list.size();
    }

    IMAGE* get_image(int s_num) {
        if (s_num < 0 || s_num >= img_list.size()) {
            return nullptr;
        }
        return &img_list[s_num];
    }

    void add_image(const IMAGE& img) {
        img_list.push_back(img);
    }

private:
    std::vector<IMAGE> img_list;
};