/*
CH-230-A
a12_p3.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "TournamentMember.h"

using namespace std;

int main() {

    string gender1 = "Male";
    char date1[11] = "1985-02-05";
    char date2[11] = "1998-12-20";
    char fname1[37] = "Cristiano Ronaldo";
    char fname2[37] = "Kylian Mbappé";
    char lname1[36] = "dos Santos Aveiro";
    char lname2[36] = "Lottin";
    string locat1 = "Real Madrid";
    string locat2 = "Paris Saint-Germain";
    string position1 = "forward";
    string dexterity1 = "right";
    string dexterity2 = "left";

    Player p2(fname1, lname1, date1, 35, gender1, locat1, 7, position1, 450, dexterity1);
    // Paramtric Constructor
    p2.print();
    cout << "Year 2018 and before" << endl;
    p2.printplayer();
    cout << "Year 2018-2020" << endl;
    p2.relocate("Juventus");
    for (int i = 0; i < 103; i++){
        p2.goalincrement();
    }
    // Function to increase number of goals
    p2.printplayer();

    Player p3(fname2, lname2, date2, 21, gender1, locat2, 7, position1, 102, dexterity1);
    p3.print();
    p3.printplayer();

    Player p1(p3);
    // Copy Constructor
    p1.print();
    p1.printplayer();

    p1.~Player();
    p2.~Player();
    p3.~Player();
    // Releasing Memory
    return 0;
}