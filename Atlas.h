class Atlas{
    Atlas() = default;
    ~Atlas() = default;

    void load_from_file(LPCTSTR path_template, int number){
        _img_list.clear();
        _img_list.resize(number);
        
    }
}