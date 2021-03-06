/*
CH-230-A
a9_p9.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cstring>
#include <ctype.h>

using namespace std;

int main () {
    while(1){
    // The outer while loop reiterates again until 
    // it terminates by satisfying one of the 
    // conditions below

        const string wordList[17] = {"computer", "television", "keyboard", "laptop", "mouse", //
                        "algorithm", "thermos", "dictionary", "motivation", "hopelessness", //
                        "unknown", "futile", "cessation", "fatigue", "anyways", //
                        "stifling", "coffee"};
        // Declaring string of 17 words

        int flag = 0;
        // Acting as a check

        string stop = "quit";
        // Storing a variable for 'quit'
        // That has '\0'
        int tries = 0;
        // Counter for number of tries
        srand(time(0));
        // Planting time seed

        string word = wordList[rand() % 17];
        // Randomly choosing a word out of the 17
        // And storing in word variable

        string newWord = word;
        
        // Copying word into another variable
        // So as to not change the original content

        const char *vowels = "AEIOU";
        for (int i = 0; newWord[i] != '\0'; i++){
            if (strchr(vowels, toupper(newWord[i]))!= NULL){
                newWord[i] = '_';
            }
        }
        // String made of char arrays end on '\n'
        // String variables end on '\0'

        cout << "The word: " <<  newWord << endl;
        cout << "Your guess is: " << endl;

        string answer;
        // Declare variable to store player's guess

        cin >> answer;
        // Player inputs guess

        while(flag == 0){
            // Since flag is set at 0, it will always
            // Enter the while loop
            tries++;
            // Increment number of tries
            // Everytime the while loop is repeated
            
            if (answer == stop){
                exit(1);
                // Terminate if 'quit' is entered
            } else if (answer == word){
                cout << "Congratulations, you guessed right!" << endl;
                cout << "Number of tries: " << tries << endl;
                cout << "Do you want to play again?" << endl;
                cout << "Press 1 to continue, otherwise press any number: " << endl;
                cin >> flag;
                if (flag != 1){
                    // If the flag is not 1, the 
                    // program terminates
                    exit(1);
                }

            } else {
                cout << "Please guess again: " << endl;
                cin >> answer;
            }
        }
    }

    return 0;
}
