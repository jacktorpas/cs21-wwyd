#include <iostream>
#include <fstream>
#include "fileInit.h"

using namespace std;

void Files::createFiles(){
    fstream file;
    ofstream file2("inputs.txt", ios::out); //overwrite inputs.txt every game start
    file2.close();
    file.open("choices.wwyd", ios::out);
    if(!file){
        cout << "Failed to write to choices.wwyd\n";
        exit(1);
    }
    //CHAPTER 1       
    Choices c1[14];
    for(int i = 0; i < 14; i++){
        c1[i].chapter = 1; //this tells that they're from chapter 1
        c1[i].branch = 0;
    }
    //pick case file, pick the case file,...
    c1[0].input = "pick file"; c1[1].input = "grab file"; c1[2].input = "take file";
    c1[3].input = "obtain file"; c1[4].input = "get file"; c1[5].input = "open file";
    c1[6].input = "take case file"; c1[7].input = "grab file"; c1[8].input = "pick case file";
    c1[9].input = "grab case file"; c1[10].input = "obtain case file";
    c1[11].input = "get case file"; c1[12].input = "open case file"; c1[13].input = "grab case file";

    for(int i = 0; i < 14; i++){
        file << c1[i].chapter << " " << c1[i].branch << " " << c1[i].input << '\n';
    }

    //CHAPTER 2
    Choices c2[12];
    for(int i = 0; i < 12; i++){
        c2[i].chapter = 2;
        c2[i].branch = 0;
    }
    c2[0].input = "pick cd"; c2[1].input = "pick disc"; c2[2].input = "pick CD";
    c2[3].input = "play cd"; c2[4].input = "play disc"; c2[5].input = "play CD";
    c2[6].input = "watch cd"; c2[7].input = "watch disc"; c2[8].input = "watch CD";
    c2[9].input = "pick compact disc"; c2[10].input = "play compact disc"; c2[11].input = "watch compact disc";

    for(int i = 0; i < 12; i++){
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
    Choices c4[2];
    c4[0].chapter = 4; c4[1].chapter = 4;
    c4[0].branch = 0; c4[1].branch = 0;
    c4[0].input = "investigate case"; c4[1].input = "examine case";

    for(int i = 0; i < 2; i++){
        file << c4[i].chapter << " " << c4[i].branch << " " << c4[i].input << '\n';
    }

    //CHAPTER 5 
    Choices c5[14];
    for(int i = 0; i < 14; i++){
        c5[i].chapter = 5;
        if(i >= 0 && i <= 3){
            c5[i].branch = 1;
        }else{
            c5[i].branch = 2;
        }
    }
    c5[0].input = "call parents"; c5[1].input = "call her parents"; c5[2].input = "ask parents";
    c5[3].input = "ask her parents"; c5[4].input = "google her name"; c5[5].input = "google name";
    c5[6].input = "google Elisa Lam"; c5[7].input = "google Elisa"; c5[8].input = "search name";
    c5[9].input = "search Elisa Lam"; c5[10].input = "search Elisa"; c5[11].input = "google";
    c5[12].input = "search online"; c5[13].input = "search";

    for(int i = 0; i < 14; i++){
        file << c5[i].chapter << " " << c5[i].branch << " " << c5[i].input << '\n'; 
    }

    //CHAPTER 6.1
    Choices c61[6];
    for(int i = 0; i < 6; i++){
        c61[i].chapter = 6;
        c61[i].branch = 0;
    }
    c61[0].input = "open file"; c61[1].input = "open medical history"; c61[2].input = "check file";
    c61[3].input = "check medical history"; c61[4].input = "read file"; c61[5].input = "read medical history";

    for(int i = 0; i < 6; i++){
        file << c61[i].chapter << " " << c61[i].branch << " " << c61[i].input << '\n'; 
    }

    //CHAPTER 7.1
    Choices c71[8];
    for(int i = 0; i < 8; i++){
        c71[i].chapter = 7;
        c71[i].branch = 0;
    }
    c71[0].input = "get up"; c71[1].input = "stand up"; c71[2].input = "look for Elisa";
    c71[3].input = "search for Elisa"; c71[4].input = "look for Elisa Lam"; c71[5].input = "search for Elisa Lam";
    c71[6].input = "start looking"; c71[7].input = "start looking for Elisa";

    for(int i = 0; i < 8; i++){
        file << c71[i].chapter << " " << c71[i].branch << " " << c71[i].input << '\n'; 
    }

    //CHAPTER 8.1
    Choices c81[10];
    c81[0].input = "go to Cecil Hotel"; c81[1].input = "go to Cecil"; c81[2].input = "go to the Cecil Hotel";
    c81[3].input = "go to the Cecil"; c81[4].input = "go to the hotel"; c81[5].input = "go to hotel";
    c81[6].input = "go to the bookstore"; c81[7].input = "go to the last bookstore"; c81[8].input = "go to bookstore";
    c81[9].input = "go to last bookstore";

    for(int i = 0; i < 10; i++){
        c81[i].chapter = 8;
        if(i >= 0 && i <= 5){
            c81[i].branch = 1;
        }else{
            c81[i].branch = 2;
        }
        file << c81[i].chapter << " " << c81[i].branch << " " << c81[i].input << '\n';
    }

    Choices n1[10];
    for(int i = 0; i < 10; i++){
        if(i >= 0 && i <= 5){
            n1[i].chapter = '1';
            n1[i].branch = 1;
        }else{
            n1[i].chapter = '2';
            n1[i].branch = 2;
        }
        n1[i].input = c81[i].input;
        file << n1[i].chapter << " " << n1[i].branch << " " << n1[i].input << '\n';
    }

    Choices c10[16];
    c10[0].input = "press 5"; c10[1].input = "press button 5"; c10[2].input = "go to floor 5";
    c10[3].input = "5"; c10[4].input = "button 5"; c10[5].input = "to 5"; c10[6].input = "press five";
    c10[7].input = "press button five"; c10[8].input = "go to floor five"; c10[9].input = "five";
    c10[10].input = "button five"; c10[11].input = "to five"; c10[12].input = "press 5th floor";
    c10[13].input = "go to 5th floor"; c10[14].input = "5th floor"; c10[15].input = "to 5th floor";
    
    for(int i = 0; i < 16; i++){
        c10[i].chapter = 10;
        c10[i].branch = 0;
        file << c10[i].chapter << " " << c10[i].branch << " " << c10[i].input << '\n';
    }

    Choices c11[18];
    c11[0].input = "take medicine bottle"; c11[1].input = "take medicine bottles"; c11[2].input = "take bottle";
    c11[3].input = "take bottles"; c11[4].input = "examine medicine bottle"; c11[5].input = "examine bottle";
    c11[6].input = "grab medicine bottle"; c11[7].input = "grab bottle"; c11[8].input = "examine medicine bottles";
    c11[9].input = "examine bottles"; c11[10].input = "grab medicine bottles"; c11[11].input = "grab bottles";
    c11[12].input = "take cellphone"; c11[13].input = "take phone"; c11[14].input = "examine cellphone";
    c11[15].input = "examine phone"; c11[16].input = "grab cellphone"; c11[17].input = "grab phone";

    for(int i = 0; i < 18; i++){
        c11[i].chapter = 11;
        if(i >= 0 && i <= 11){
            c11[i].branch = 1;
        }else{
            c11[i].branch = 2;
        }
        file << c11[i].chapter << " " << c11[i].branch << " " << c11[i].input << '\n';
    }

    Choices c12[3];
    c12[0].input = "0430"; c12[1].input = "type 0430"; c12[2].input = "enter 0430";
    for(int i = 0; i < 3; i++){
        c12[i].chapter = 12;
        c12[i].branch = 0;
        file << c12[i].chapter << " " << c12[i].branch << " " << c12[i].input << '\n';
    }

    Choices c72[8];
    for(int i = 0; i < 6; i++){
        c72[i].input = c81[i].input;
    }
    c72[6].input = "go to skid row"; c72[7].input = "go to the skid row";
    for(int i = 0; i < 8; i++){
        c72[i].chapter = 19;
        if(i >= 0 && i <= 5){
            c72[i].branch = 1;
        }else{
            c72[i].branch = 2;
        }
        file << c72[i].chapter << " " << c72[i].branch << " " << c72[i].input << '\n';
    }

    Choices n2[8];
    for(int i = 0; i < 8; i++){
        if(i >= 0 && i <= 5){
            n2[i].chapter = '3';
            n2[i].branch = 1;
        }else{
            n2[i].chapter = '4';
            n2[i].branch = 2;
        }
        n2[i].input = c72[i].input;
        file << n2[i].chapter << " " << n2[i].branch << " " << n2[i].input << '\n';
    }

    Choices c102[12];
    c102[0].input = "take business card"; c102[1].input = "take card"; c102[2].input = "examine business card";
    c102[3].input = "examine card"; c102[4].input = "grab business card"; c102[5].input = "grab card";
    for(int i = 6; i < 12; i++){
        c102[i].input = c11[i + 6].input;
    }
    for(int i = 0; i < 12; i++){
        c102[i].chapter = 20;
        if(i >= 0 && i <= 5){
            c102[i].branch = 1;
        }else{
            c102[i].branch = 2;
        }
        file << c102[i].chapter << " " << c102[i].branch << " " << c102[i].input << '\n';
    }

    Choices c13[4];
    c13[0].input = "answer phone"; c13[1].input = "answer the phone"; c13[2].input = "phone";
    c13[3].input = "answer";
    for(int i = 0; i < 4; i++){
        c13[i].chapter = 13;
        c13[i].branch = 0;
        file << c13[i].chapter << " " << c13[i].branch << " " << c13[i].input << '\n';
    }

    Choices c14[11];
    c14[0].input = "talk to the hotel manager"; c14[1].input = "talk to hotel manager";
    c14[2].input = "talk to the manager"; c14[3].input = "talk to manager"; c14[4].input = "manager";
    c14[5].input = "talk to the janitor"; c14[6].input = "talk to janitor"; c14[7].input = "janitor";
    c14[8].input = "talk to the tenant"; c14[9].input = "talk to tenant"; c14[10].input = "tenant";
    for(int i = 0; i < 11; i++){
        c14[i].chapter = 14;
        if(i >= 0 && i <= 4){
            c14[i].branch = 1;
        }else if(i >= 5 && i <= 7){
            c14[i].branch = 2;
        }else{
            c14[i].branch = 3;
        }
        file << c14[i].chapter << " " << c14[i].branch << " " << c14[i].input << '\n';
    }

    Choices c15[4];
    c15[0].input = "accept offer"; c15[1].input = "accept"; c15[2].input = "refuse offer";
    c15[3].input = "refuse";
    for(int i = 0; i < 4; i++){
        c15[i].chapter = 15;
        if(i == 0 || i == 1){
            c15[i].branch = 1;
        }else{
            c15[i].branch = 2;
        }
        file << c15[i].chapter << " " << c15[i].branch << " " << c15[i].input << '\n';
    }

    Choices c16a[3];
    c16a[0].input = "request autopsy report"; c16a[1].input = "request report"; c16a[2].input = "request autopsy";
    for(int i = 0; i < 3; i++){
        c16a[i].chapter = 16;
        c16a[i].branch = 0;
        file << c16a[i].chapter << " " << c16a[i].branch << " " << c16a[i].input << '\n';
    }

    Choices c16b[8];
    c16b[0].input = "go to the storage room"; c16b[1].input = "go to storage room";
    c16b[2].input = "go to room"; c16b[3].input = "storage room"; c16b[4].input = "examine Elisa’s body";
    c16b[5].input = "examine body"; c16b[6].input = "Elisa’s body"; c16b[7].input = "body";
    for(int i = 0; i < 8; i++){
        c16b[i].chapter = 17;
        c16b[i].branch = 0;
        file << c16b[i].chapter << " " << c16b[i].branch << " " << c16b[i].input << '\n';
    }

    Choices c17[11];
    c17[0].input = "chase him"; c17[1].input = "chase the person"; c17[2].input = "chase the guy";
    c17[3].input = "chase person"; c17[4].input = "chase guy"; c17[5].input = "chase"; c17[6].input = "continue";
    c17[7].input = "continue examination"; c17[8].input = "continue examine"; c17[9].input = "examine Elisa’s body";
    c17[10].input = "examine body";
    for(int i = 0; i < 11; i++){
        c17[i].chapter = 18;
        if(i >= 0 && i <= 5){
            c17[i].branch = 1;
        }else{
            c17[i].branch = 2;
        }
        file << c17[i].chapter << " " << c17[i].branch << " " << c17[i].input << '\n';
    }

    file.close();
}

void Files::chronicler(string s){
    ofstream file("inputs.txt", ios::app);
    if(!file){
        cout << "Couldn't write to inputs.txt\n";
        exit(1);
    }
    file << s << '\n';
    file.close();
}

//this creates a txt file to display how many times someone's played through the story
void Files::tracker(){
    fstream file;
    string buffer;
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
