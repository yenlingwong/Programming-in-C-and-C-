/*
CH-230-A
a12_p2.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "TournamentMember.h"

using namespace std;

string TournamentMember::location = "Default Location";
// Initialize static location of class TournamentMember

TournamentMember::TournamentMember() {
    this->firstname = "Default First Name";
    this->lastname = "Default Last Name";
    this->dob = "0000-00-00";
    this->age = 0;
    this->gender = "Default Gender";
    this->setlocation(location);

    cout << "A new member is added" << endl;
}
// Default Constructor

TournamentMember::TournamentMember(const char* newfirstname, const char* newlastname, const char* newdob, int newage, string& newgender, string& newlocation) {
    firstname = newfirstname;
    lastname = newlastname;
    dob = newdob;
    age = newage;
    gender = newgender;
    setlocation(newlocation);

    cout << "A new member is added" << endl;
}
// Parametric Constructor

TournamentMember::TournamentMember(const TournamentMember& copy) {

    this->firstname = copy.firstname;
    this->lastname = copy.lastname;
    this->dob = copy.dob;
    this->age = copy.age;
    this->gender = copy.gender;
    this->setlocation(copy.getlocation());
    
    cout << "A new member is added" << endl;
}
// Copy Constructor

TournamentMember::~TournamentMember() {
    cout << "Tournament Member is removed" << endl;
}
// Destructor with bespoke message

void TournamentMember::print() const {
    cout << endl;
    cout << "Member Name: " << this->firstname << " " << this->lastname << endl;
    cout << "Date of Birth: " << this->dob << endl;
    cout << "Age: " << this->age << endl;
    cout << "Gender: " << this->gender << endl;
    cout << "Current Location: " << this->getlocation() << endl;
    cout << endl;
}
// Printer Method

string TournamentMember::relocate(string newlocation) {
    this->setlocation(newlocation);

    return getlocation();
}
// Method to change location