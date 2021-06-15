#include <iostream>
#include <vector>
#include <fstream>
#include "fileInit.h"

using namespace std;

void Files::createFiles(){ //for Chapters 1-5 only (for now)
    fstream file;
    //include in each chapter file all accepted choices for each chapter
    file.open("choices.wwyd", ios::out);
    if(!file){
        cout << "Failed to write to choices.wwyd\n";
        exit(1);
    }
    //CHAPTER 1       
    Choices c1[8];
    for(int i = 0; i < 8; i++){
        c1[i].chapter = 1; //this tells that they're from chapter 1
        c1[i].branch = 0;
    }
    c1[0].input = "pick file"; c1[1].input = "grab file"; c1[2].input = "take file";
    c1[3].input = "obtain file"; c1[4].input = "get file"; c1[5].input = "open file";
    c1[6].input = "take file"; c1[7].input = "grab file";

    for(int i = 0; i < 8; i++){
        //file.write((char *) &c1[i], sizeof(Choices));
        file << c1[i].chapter << " " << c1[i].branch << " " << c1[i].input << '\n';
    }

    //CHAPTER 2
    Choices c2[9];
    for(int i = 0; i < 9; i++){
        c2[i].chapter = 2;
        c2[i].branch = 0;
    }
    c2[0].input = "pick cd"; c2[1].input = "pick disc"; c2[2].input = "pick CD";
    c2[3].input = "play cd"; c2[4].input = "play disc"; c2[5].input = "play CD";
    c2[6].input = "watch cd"; c2[7].input = "watch disc"; c2[8].input = "watch CD";

    for(int i = 0; i < 9; i++){
        file << c2[i].chapter << " " << c2[i].branch << " " << c2[i].input << '\n';
    }

    //CHAPTER 3
    Choices c3[4];
    for(int i = 0; i < 4; i++){
        c3[i].chapter = 3;
        c3[i].branch = 0;
    }
    c3[0].input = "click result"; c3[1].input = "click summary";
    c3[2].input = "read result"; c3[3].input = "read summary";

    for(int i = 0; i < 4; i++){
        file << c3[i].chapter << " " << c3[i].branch << " " << c3[i].input << '\n';
    }

    //CHAPTER 4
    //ch4.open("chpt4.bin", ios::out | ios::binary);
    Choices c4[2];
    c4[0].chapter = 4; c4[1].chapter = 4;
    c4[0].branch = 0; c4[1].branch = 0;
    c4[0].input = "investigate case"; c4[1].input = "examine case";

    for(int i = 0; i < 2; i++){
        file << c4[i].chapter << " " << c4[i].branch << " " << c4[i].input << '\n';
    }
    //ch4.close();

    //CHAPTER 5 (you can enter more than two words here)
    Choices c5[9];
    for(int i = 0; i < 9; i++){
        c5[i].chapter = 5;
        if(i >= 0 && i <= 3){
            c5[i].branch = 1;
        }else if(i >= 4 && i <= 6){
            c5[i].branch = 2;
        }else{
            c5[i].branch = 3;
        }
    }
    c5[0].input = "go to Cecil Hotel"; c5[1].input = "go to Cecil"; c5[2].input = "go to hotel";
    c5[3].input = "go to the hotel"; c5[4].input = "go to bookstore"; c5[5].input = "go to last bookstore";
    c5[6].input = "go to the last bookstore"; c5[7].input = "go to the skid row"; c5[8].input = "go to skid row";

    for(int i = 0; i < 9; i++){
        file << c5[i].chapter << " " << c5[i].branch << " " << c5[i].input << '\n';
    }
    file.close();
}

//this creates a txt file to display how many times someone's played through the story
void Files::tracker(){
    fstream file;
    int x; //the tracker itself
    //check if it exists
    file.open("tracker.txt", ios::in | ios::out);
    if(!file){
        file.open("tracker.txt", ios::out);
        x = 1;
        file << x;
    }else{
        file >> x;
        file.seekg(0, ios::beg);
        x++;
        file << x;
    }
    file << "\nYou've played through the story " << x << " time(s).\n";
    file.close();
}