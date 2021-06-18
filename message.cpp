#include <iostream>
#include "message.h"

using namespace std;

void openingMessage(){
    cout << "The Mysterious Case of Elisa Lam";
    cout << "\n---------------------------------\n";
    cout << "A console-based mystery/thriller game that is played by entering simple verb-noun commands. Depending on what\n";
    cout << "you choose to do, the story will have a different ending.\n\n";
    cout << "Coded by Justin; story by Gel, and QA-tested by Ec and Charles :)\n\n";
    cout << "Press ENTER to continue...\n";
    cin.get();
}

void warning(){
    cout << "WARNING:\n";
    cout << "You'll be playing as an LAPD detective investigating this case. This is based on a true yet mysterious\n";
    cout << "story; possible gore and unsettling stuff are to be expected. As they say, \"viewer discretion is advised.\"\n";
    cout << "If you are ready to play, press ENTER again...\n";
    cin.get();
}

void closingMessage(){
    cout << "Thank you for playing \"The Mysterious Case of Elisa Lam\". If that's not the ending you want, you may\n";
    cout << "want to replay it and try different approaches. Your text inputs have been stored in inputs.txt and tracker.txt tells\n";
    cout << "how many times you've played this story.\n\n";
    cout << "CREDITS:\n\nJustin - Code\nGel - Story\nEc and Charles - QA Testing\n\n";
    cout << "Press ENTER to exit...\n";
    cin.get();
}
