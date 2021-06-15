#ifndef FILEINIT_H
#define FILEINIT_H

//------------------------------------
//creation of struct for random-access
struct Choices {
    int chapter;
    int branch;
    std::string input;
};

class Files {
    public:
        bool completed;
        void createFiles();
        void tracker();
};

//------------------------------------

#endif