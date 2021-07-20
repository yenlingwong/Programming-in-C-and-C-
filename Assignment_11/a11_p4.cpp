/*
CH-230-A
a11_p4.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Creature.h"

using namespace std;

int main () {

    while (1) {
        cout << endl;
        string stop = "quit";
        string wiz = "wizard";
        string obj1 = "archer";
        string obj2 = "builder";
        string choice;

        // Variables to store strings

        cout << "What do you want to create?" << endl;
        cout << "Choose wizard, archer or builder" << endl;

        cin >> choice;
        // Input from keyboard

        if (choice == stop) {
            exit(1);
            // Stop execution
        } else if (choice == wiz) {
            Wizard* w = new(nothrow) Wizard;
            if (!w) {
                cout << "Memory Allocation Failed" << endl;
            } else {
                w->run();
                w->hover();
            }

            delete w;
        } else if (choice == obj1) {
            Archer* a = new(nothrow) Archer;
            if (!a) {
                cout << "Memory Allocation Failed" << endl;
            } else {
                a ->run();
                a ->target();
            }

            delete a;
        } else if (choice == obj2){
            Builder * b = new(nothrow) Builder;
            if (!b) {
                cout << "Memory Allocation Failed" << endl;
            } else {
                b ->run();
                b ->forge();
            }

            delete b;
        } else {
            cout << "Please try again with a valid input" << endl;
        }
        cout << endl;
    }
    return 0 ;
}
