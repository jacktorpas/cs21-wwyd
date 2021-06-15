#ifndef GAME_H
#define GAME_H

//------------------------------------

class Game {
    public:
        int chapter;
        int branch;
        std::string input;

        void printChapter(int ch);
        std::string acceptInput(); //accepts the text from the user
        bool checkInput(int ch, std::string s); //returns true if the input is valid
};

//------------------------------------

#endif