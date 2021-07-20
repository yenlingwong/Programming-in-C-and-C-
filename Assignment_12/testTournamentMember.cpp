/*
CH-230-A
a12_p2.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>
#include <string>

int main() {
    string gender1 = "Male";
    string gender2 = "Female";
    char date1[11] = "1993-08-15";
    char date2[11] = "1967-06-16";
    char fname1[37] = "Alex";
    char fname2[37] = "Jurgen";
    char lname1[36] = "Oxlade-Chamberlain";
    char lname2[36] = "Klopp";
    string locat1 = "Liverpool FC";
    string locat2 = "Stuttgart";


    TournamentMember Person1;
    Person1.print();
    // Default Constructor printed to screen
    
    TournamentMember Person2(fname1, lname1, date1, 24, gender1, locat1);
    Person2.print();
    // Parametric Constructor Printed
    TournamentMember Person3(fname2, lname2, date2, 53, gender2, locat2);
    Person3.print();
    // Parametric Constructor Printed

    TournamentMember Person4(Person3);
    Person4.relocate("Manchester");
    Person4.print();
    // Copy Constructor with Change Location Function

    Person1.~TournamentMember();
    Person2.~TournamentMember();
    Person3.~TournamentMember();
    Person4.~TournamentMember();
    // Releasing Memory

    return 0;
}