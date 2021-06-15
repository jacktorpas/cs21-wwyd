#include <iostream>
#include <fstream>
#include <string>
#include "message.h"
#include "game.h"
#include "fileInit.h"
#include "chapters.h"

using namespace std;

//This contains all the necessary functions for the game

void Game::printChapter(int ch){
    switch(ch){
        case 1: chapterOne(); break;
        case 2: chapterTwo(); break;
        case 3: chapterThree(); break;
        case 4: chapterFour(); break;
        case 5: chapterFive(); break;
    }
}

string Game::acceptInput(){
    string temp;
    cout << "> ";
    getline(cin, temp);
    return temp;
}

bool Game::checkInput(int ch, string s){
    Choices c;
    //char chr, chr2;
    string buffer;
    ifstream f("choices.wwyd", ios::in);
    if(!f){
        cout << "Could not open choices.wwyd\n";
        exit(1);
    }
    //checking
    while(getline(f, buffer)){
        c.chapter = buffer[0] - '0';
        c.input = buffer.substr(4, buffer.find('\n'));
        if(c.chapter == ch && s.compare(c.input) == 0){
            f.close();
            return true;
        }
    }
    f.close();
    return false;
}



