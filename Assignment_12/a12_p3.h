/*
CH-230-A
a12_p3.cpp
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
        TournamentMember(const char*, const char*, const char*, int, const string&, const string&);
        // Parametric Constructor
        TournamentMember(const TournamentMember&);
        // Copy Constructor
        ~TournamentMember();
        // Destructor Constructor

        inline const char* getfirstname() const {return firstname;}
        inline const char* getlastname() const {return lastname;}
        inline const char* getdob() const {return dob;}
        inline int getage() const {return age;}
        inline string getgender() const {return gender;}
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

class Player : public TournamentMember { // Inherits from Tournament Member
    private:
        int number;
        string position;
        int goalnumber;
        string dominantfoot;
        // Declaring properties of the player class

    public: 

        Player();
        // Default Constructor
        Player(const char*, const char*, const char*, int, const string&, const string&, int, string&, int, string&);
        // Parametric Constructor
        Player(const Player&);
        // Copy Constructor
        ~Player();
        // Destructor

        inline int getnumber() {return number;}
        inline string getposition() {return position;}
        inline int getgoalnumber() const {return goalnumber;}
        inline string getdominantfoot() {return dominantfoot;}
        // Inline getter methods

        inline void setnumber(int newnumber) {number = newnumber;}
        inline void setposition(string newposition) {position = newposition;}
        inline void setdominantfoot(string newdominantfoot) {dominantfoot = newdominantfoot;}
        // Inline setter methods

        int goalincrement(); 
        // Method to Increment the Number of Goals

        void printplayer() const;
        // Printer Method
};