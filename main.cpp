#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include "message.h"
#include "game.h"
#include "chapters.h"
#include "fileInit.h"

int main(){
    Game g; Files f;
    g.chapter = 1;
    srand(time(0));
    int n = rand() % 100 + 1;
    f.createFiles();
    openingMessage();
    warning();
    
    while(g.chapter <= 5){
        g.printChapter(g.chapter);
        do{
            g.input = g.acceptInput();
        }while(!g.checkInput(g.chapter, g.input));
        g.branch = g.checkBranch(g.chapter, g.input);
        f.chronicler(g.input);
        g.chapter++;
    }
    switch(g.branch){
        case 1:
            g.story = 1;
            break;
        case 2:
            g.story = 2;
            break;
    }

    if(g.story == 1){ //story 1
        for( ; g.chapter <= 8; g.chapter++){
            g.printChapter(g.chapter);
            do{
                g.input = g.acceptInput();
            }while(!g.checkInput(g.chapter, g.input));
            g.branch = g.checkBranch(g.chapter, g.input);
            f.chronicler(g.input);
        }
        switch(g.branch){
            case 1:
                _1Chapter9B();
                _1ChapterN("Cecil Hotel");
                do{
                    g.input = g.acceptInput();
                }while(!g.checkInput('2', g.input));
                _1Chapter9A();               
                break;
            case 2:
                _1Chapter9A();
                _1ChapterN("The Last Bookstore");
                do{
                    g.input = g.acceptInput();
                }while(!g.checkInput('1', g.input));
                _1Chapter9B();
                break;
        }
        f.chronicler(g.input);

        g.chapter = 10;
        while(g.chapter <= 11){
            g.printChapter(g.chapter);
            do{
                g.input = g.acceptInput();
            }while(!g.checkInput(g.chapter, g.input));
            g.branch = g.checkBranch(g.chapter, g.input);
            f.chronicler(g.input);
            g.chapter++;
        }

        switch(g.branch){
            case 1:
                _1Chapter12B();
                _1Chapter12A();
                do{
                    g.input = g.acceptInput();
                }while(!g.checkInput(12, g.input));
                f.chronicler(g.input);
                _1Chapter12AA();
                break;
            case 2:
                _1Chapter12A();
                do{
                    g.input = g.acceptInput();
                }while(!g.checkInput(12, g.input));
                f.chronicler(g.input);
                _1Chapter12AA();
                _1Chapter12B();
                break;
        }
    }else{ //story 2
        _2ChapterSix();
        do{
            g.input = g.acceptInput();
        }while(!g.checkInput(7, g.input));
        f.chronicler(g.input);

        _2ChapterSeven();
        do{
            g.input = g.acceptInput();
        }while(!g.checkInput(19, g.input));
        f.chronicler(g.input);
        g.branch = g.checkBranch(19, g.input);

        switch(g.branch){
            case 1:
                _1Chapter9B();
                _2ChapterN("Cecil Hotel");
                do{
                    g.input = g.acceptInput();
                }while(!g.checkInput('4', g.input));
                _2Chapter8B();                
                break;
            case 2:
                _2Chapter8B();
                _2ChapterN("Skid Row");
                do{
                    g.input = g.acceptInput();
                }while(!g.checkInput('3', g.input));
                _1Chapter9B();                
                break;
        }
        f.chronicler(g.input);

        _1Chapter10(); //same as story 2 chapter 9
        do{
            g.input = g.acceptInput();
        }while(!g.checkInput(10, g.input));
        f.chronicler(g.input);  

        _2Chapter10();
        do{
            g.input = g.acceptInput();
        }while(!g.checkInput(20, g.input));
        f.chronicler(g.input);
        g.branch = g.checkBranch(20, g.input);

        switch(g.branch){
            case 1:
                _2Chapter11B();
                _1Chapter12A(); //same text here
                do{
                    g.input = g.acceptInput();
                }while(!g.checkInput(12, g.input));
                f.chronicler(g.input);
                _2Chapter11AA();
                break;
            case 2:
                _1Chapter12A(); //same text here
                do{
                    g.input = g.acceptInput();
                }while(!g.checkInput(12, g.input));
                f.chronicler(g.input);
                _2Chapter11AA();
                _2Chapter11B();
                break;
        }
    }

    //chapters 13 onwards
    for(g.chapter = 13; g.chapter <= 14; g.chapter++){
        g.printChapter(g.chapter);
        do{
            g.input = g.acceptInput();
        }while(!g.checkInput(g.chapter, g.input));
        g.branch = g.checkBranch(g.chapter, g.input);
        f.chronicler(g.input);
    }
    int tank, branch2;
    switch(g.branch){
        case 1:
            _1Chapter15C();
            do{
                g.input = g.acceptInput();
            }while(!g.checkInput(15, g.input));
            branch2 = g.checkBranch(15, g.input);
            f.chronicler(g.input);

            if(branch2 == 1){
                _1Chapter16C1();
            }else{
                _1Chapter16C2();
            }
            break;
        case 2:
            _1Chapter15B();
            for(g.chapter = 16; g.chapter <= 17; g.chapter++){
                g.printChapter(g.chapter);
                do{
                    g.input = g.acceptInput();
                }while(!g.checkInput(g.chapter + 1, g.input));
                f.chronicler(g.input);
            }
            branch2 = g.checkBranch(18, g.input);
            
            if(branch2 == 1){
                if(n <= 30) _1Chapter18B1B();
                else if(n > 30 && n <= 70) _1Chapter18B2A();
                else _1Chapter18B2B();
            }else{
                _1Chapter18B1A();
            }
            break;
        case 3:
            _1Chapter15A();
            tank = _1Chapter16A();
            do{
                g.input = g.acceptInput();
            }while(!g.checkInput(16, g.input));
            f.chronicler(g.input);
            if(tank == 1){ //open
                if(n <= 50) _1Chapter17A1A();
                else _1Chapter17A1B();
                _1Chapter18A1();
            }else{ //closed
                if(n <= 50) _1Chapter17A2A();
                else _1Chapter17A2B();
                _1Chapter18A2();
            }
            break;
    }
    std::cout << "Press ENTER to continue...\n";
    f.tracker();
    std::cin.get();
    closingMessage();
    return 0;
}
