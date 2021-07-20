/*
CH-230-A
a12_p7.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
using namespace std;

#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
#include <ctime>
 
int main() {
    Area* shapeList[25];
    // Declaring array of pointers of type Area
    srand(static_cast<unsigned int>(time(0)));
	const char* colourList[4] = {"RED", "BLACK", "VIOLET" , "BLUE"};
    // Declaring array of strings with each colour
    
    for (int i = 0; i < 25; i++) {
    // Randomly Generating Shapes
        int randomShape = rand() % 4;
        double randomSize1 = rand() % 96 + 5;
        double randomSize2 = rand() % 96 + 5;
        const char* colour = colourList[rand() % 4];
        if (randomShape == 0) {
            shapeList[i] = new Rectangle(colour, randomSize1, randomSize2); 
        } else if (randomShape == 1) {
            shapeList[i] = new Square(colour, randomSize1, randomSize1, randomSize1);
        } else if (randomShape == 2) {
            if (randomSize1 < randomSize2) {
                shapeList[i] = new Ring(colour, randomSize2, randomSize1);
            } else if (randomSize2 < randomSize1) {
                shapeList[i] = new Ring(colour, randomSize1, randomSize2);
            }
            
        } else if (randomShape == 3) {
            shapeList[i] = new Circle(colour, randomSize1);
        }
    }

    for (int i = 0; i < 25; i++) {
        shapeList[i]->getColor();
        cout << endl;
        cout << shapeList[i]->calcArea() << " units^2 " << std::endl;
        cout << shapeList[i]->calcPerimeter() << " units" << std::endl;
    }
    // Printing the area of each object
    cout << endl;
    for (int i = 0; i < 25; i++) {
        delete shapeList[i];
    }
    // Freeing Memory

	return 0;
}
