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

TournamentMember::TournamentMember(const char* newfirstname, const char* newlastname, const char* newdob, int newage, const string& newgender, const string& newlocation) {
    this->firstname = newfirstname;
    this->lastname = newlastname;
    this->dob = newdob;
    this->age = newage;
    this->gender = newgender;
    this->setlocation(newlocation);

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

Player::Player() : TournamentMember("Default First Name", "Default Last Name", "0000-00-00", 0, "Default Gender", getlocation()) {
    this->number = 0;
    this->position = "Default Position";
    this->goalnumber = 0;
    this->dominantfoot = "Default Dominant Foot";

    cout << "A Player has been added" << endl;
}
// Default Constructor

Player::Player(const char* newfirstname, const char* newlastname, const char* newdob, int newage, const string& newgender, const string& newlocation, int newnumber, string& newposition, int newgoalnumber, string& newdominantfoot) : TournamentMember(newfirstname, newlastname, newdob, newage, newgender, newlocation) {
    this->number = newnumber;
    this->position = newposition;
    this->goalnumber = newgoalnumber;
    this->dominantfoot = newdominantfoot;

    cout << "A Player has been added" << endl;
}
// Parametric Constructor

Player::Player(const Player& copy) : TournamentMember(copy.getfirstname(), copy.getlastname(), copy.getdob(), copy.getage(), copy.getgender(), copy.getlocation() ) {
    this->number = copy.number;
    this->position = copy.position;
    this->goalnumber = copy.goalnumber;
    this->dominantfoot = copy.dominantfoot;

    cout << "A Player has been added" << endl;
}
// Copy Constructor

Player::~Player() {
    cout << "A Player has been removed" << endl;
}
// Destructor

int Player::goalincrement() {
    return this->goalnumber++;
}

void Player::printplayer() const {
    cout << endl;
    cout << "Player Number: " << this->number << endl;
    cout << "Player Position: " << this->position << endl;
    cout << "Number of Goals: " << this->getgoalnumber() << endl;
    cout << "Dominant Foot: " << this->dominantfoot << endl;
    cout << endl;
}
// Printer Function for Player class