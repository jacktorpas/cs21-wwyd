#include <iostream>
#include <fstream>
#include <string>
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
        case 6: _1ChapterSix(); break;
        case 7: _1ChapterSeven(); break;
        case 8: _1ChapterEight(); break;
        case 10: _1Chapter10(); break;
        case 11: _1Chapter11(); break;
        case 13: _1Chapter13(); break;
        case 14: _1Chapter14(); break;
        case 16: _1Chapter16B(); break;
        case 17: _1Chapter17B(); break;
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
    string buffer, temp;
    ifstream f("choices.wwyd", ios::in);
    if(!f){
        cout << "Could not open choices.wwyd\n";
        exit(1);
    }
    //checking
    while(getline(f, buffer)){
        if(buffer[1] == '\40'){ //single-digit
            c.chapter = buffer[0] - '0';
            c.input = buffer.substr(4, buffer.find('\n'));
            if(c.chapter == ch && s.compare(c.input) == 0){
                f.close();
                return true;
            }
        }else{
            temp[0] = buffer[0]; temp[1] = buffer[1]; //two digits
            c.chapter = stoi(temp);
            c.input = buffer.substr(5, buffer.find('\n'));
            if(c.chapter == ch && s.compare(c.input) == 0){
                f.close();
                return true;
            }
        }
    }
    f.close();
    return false;
}

int Game::checkBranch(int ch, string s){
    Choices c;
    string buffer, temp;
    ifstream f("choices.wwyd", ios::in);
    if(!f){
        cout << "Could not open choices.wwyd\n";
        exit(1);
    }
    while(getline(f, buffer)){
        if(buffer[1] == '\40'){
            c.chapter = buffer[0] - '0';
            c.branch = buffer[2] - '0';
            c.input = buffer.substr(4, buffer.find('\n'));
            if(c.chapter == ch && s.compare(c.input) == 0){
                branch = c.branch;
                break;
            }
        }else{
            temp[0] = buffer[0]; temp[1] = buffer[1];
            c.chapter = stoi(temp);
            c.branch = buffer[3] - '0';
            c.input = buffer.substr(5, buffer.find('\n'));
            if(c.chapter == ch && s.compare(c.input) == 0){
                branch = c.branch;
                break;
            }
        }
    }
    return branch;
}

