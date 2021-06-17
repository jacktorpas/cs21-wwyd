#ifndef FILEINIT_H
#define FILEINIT_H

//------------------------------------

struct Choices {
    int chapter;
    int branch;
    std::string input;
};

class Files {
    public:
        void createFiles();
        void tracker();
        void chronicler(std::string s);
};

//------------------------------------

#endif
