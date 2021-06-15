#include <iostream>
#include <fstream>
#include "message.h"
#include "game.h"
#include "chapters.h"
#include "fileInit.h"

using namespace std;

int main(){
    bool finished = false;
    Game g; Files f;
    g.chapter = 1;
    f.createFiles();
    openingMessage();
    anotherMsg();
    
    while(!finished){
        g.printChapter(g.chapter);
        do{
            g.input = g.acceptInput();
        }while(!g.checkInput(g.chapter, g.input));
        //branching function that takes account of the different directions later on
        if(g.chapter == 5){
            finished = true;
        }else{
            g.chapter++;
        }
    }
    f.tracker();
    cout << "End of temporary session\n";
    cin.get();
    return 0;
}