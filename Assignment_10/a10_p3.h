/*
CH-230-A
a10_p3.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <string>
using namespace std;

class City {

    private:

    string name;
    int inhabitants;
    string mayor;
    double area;
    // Declaring Properties

    public:

    void setName(string &newName);
    void setInhabitants(int newInhabitants);
    void setMayor(string newMayor);
    void setArea(double newArea);
    // Setter Methods

    string getName();
    int getInhabitants();
    string getMayor();
    double getArea();
    // Getter Methods

    void print();
    // Printing Methods

};
/*
#include <string>

class City {
	private:
		int population;
		double area;
		std::string name;
		std::string mayor;
	public:
		// setter methods
		void setName(std::string newName);
		void setArea(double newArea);
		void setPopulation(int newPopulation);
		void setMayor(std::string newMayor);

		// getter methods
		std::string getName();
		double getArea();
		int getPopulation();
		std::string getMayor();

		// service method
		void print();
};
*/