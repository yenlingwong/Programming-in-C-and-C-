/*
CH-230-A
a12_p2.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <string>

using namespace std;

class TournamentMember {
    private:

        const char* firstname;
        const char* lastname;
        const char* dob;
        int age;
        string gender;
        static string location;
    
    // Declaring Properties with two additional ones

    public:

        TournamentMember();
        // Default Contructor
        TournamentMember(const char*, const char*, const char*, int, string&, string&);
        // Parametric Constructor
        TournamentMember(const TournamentMember&);
        // Copy Constructor
        ~TournamentMember();
        // Destructor Constructor

        inline const char* getfirstname() {return firstname;}
        inline const char* getlastname() {return lastname;}
        inline const char* getdob() {return dob;}
        inline int getage() {return age;}
        inline string getgender() {return gender;}
        inline static string getlocation() {return location;}
        // Inline Getter Methods

        inline void setfirstname(const char* newfirstname) {firstname = newfirstname;} 
        inline void setlastname(const char* newlastname) {lastname = newlastname;}
        inline void setdob(const char* newdob) {dob = newdob;}
        inline void setage(int newage) {age = newage;}
        inline void setgender(string newgender) {gender = newgender;}
        inline void setlocation(string newlocation) {location = newlocation;}
        // Inline Setter Methods

        string relocate(string alteredlocation);
        // Method to change location

        void print() const;
        // Printer Method

};