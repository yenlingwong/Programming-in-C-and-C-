/*
CH-230-A
a9_p5.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string name;
    int actual, guess, tries = 0;
    // Declaring variables

    cout << "Please enter your name: " << endl;
    cin >> name;

    cout << "Hello: " << name << endl;
    cout << "Please guess a number from 1 to 100 ;)" << endl;

    srand(time(0));
    actual = rand() % 100 + 1; 
    // Random number generator

    cin >> guess;
    // Player inputs guess

    while (guess != actual) {
        tries++;
        // Increment tries by 1
        if (guess < actual) {
            cout << "Too Low. Please guess again" << endl;
        } else if (guess > actual) {
            cout << "Too High. Please guess again" << endl;
        }
        cin >> guess;
    }
    tries++;
    // If first guess is correct, tries increments by 1
    cout << "Congratulations! You guessed right ;)" << endl;
    cout << "Number of tries: " << tries << endl;

    return 0;
}
