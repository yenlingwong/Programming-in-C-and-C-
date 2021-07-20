/*
CH-230-A
a11_p2.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/
 
#include <iostream>
 
using namespace std;
 
class Creature {
    public:
        Creature();  
        ~Creature();
        void run() const;
 
    protected:
        int distance;
};
 
Creature::Creature(): distance(10) {
    cout << "Creating a creature" << endl;
} 
 
Creature::~Creature() {
    cout << "Destroying a creature" << endl;
}
 
void Creature::run() const { 
    cout << "running " << distance << " meters!\n";
}  
// Creature class

class Wizard : public Creature {
    public:
        Wizard();
        ~Wizard();
        void hover() const;
 
    private:
        int distFactor;
};
 
Wizard::Wizard() : distFactor(3) {
    cout << "Creating a Wizard" << endl;
}  
 
Wizard::~Wizard() {
    cout << "Destroying a Wizard" << endl;
}
 
void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
// Wizard class

class Archer : public Creature {
   public:
    Archer();
    ~Archer();
    void target() const;
 
   private:
    int arrowRange;
    
};
 
Archer::Archer() : arrowRange(12) {
    cout << "Creating an Archer" << endl;
}
 
Archer::~Archer() {
    cout << "Destroying an Archer" << endl;
}
 
void Archer::target() const {
    cout << "Targeting " << (arrowRange * distance) << " meters\n";

};
// Archer class
class Builder : public Creature {
    public:
        Builder();
        ~Builder();
        void forge() const;
    private:
        int weaponStrength;
 
};
 
Builder::Builder() : weaponStrength(21) {
    cout << "Creating a Builder." << endl;
}
 
Builder::~Builder() {
    cout << "Destroying a Builder." << endl;
}
 
void Builder::forge() const {
    cout << "Forging " << (weaponStrength * distance) << " weapons.\n";
}
// Builder class

int main() { 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();
    c.~Creature();
    cout << "Creature Destoyed.\n";
 
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();
    w.~Wizard();
    cout << "Wizard Destroyed.\n";
 
    cout << "\nCreating an Archer.\n";
    Archer a;
    a.run();
    a.target();
    a.~Archer();
    cout << "Archer Destroyed.\n";
 
    cout << "\nCreating a Builder.\n";
    Builder b;
    b.run();
    b.forge();
    b.~Builder();
    cout << "Builder Destroyed.\n";
 
    return 0;
}