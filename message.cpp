#include <iostream>
#include "message.h"

using namespace std;

void openingMessage(){
    cout << "What Would You Do?";
    cout << "\n----------------------------\n";
    cout << "A simple console-based game that is played by entering simple verb-noun\n";
    cout << "commands. Depending on what you choose to do, the story will have a\n";
    cout << "different ending.\n\n";
    cout << "Coded by Justin; story by Ec and Gel, and QA-tested by Charles :)\n\n"; //change this soon
    cout << "Press ENTER to start...\n";
    cin.get();
}

void anotherMsg(){
    cout << "Before we get started:\n";
    cout << "\"What Would You Do?\" is an exploration game that takes us on a tour of\n";
    cout << "protagonist Elisa Lam\'s solo trip getaway around the West Coast,\n";
    cout << "as she resides in the hotel.\n\n";
    cout << "Press ENTER again...\n";
    cin.get();
}