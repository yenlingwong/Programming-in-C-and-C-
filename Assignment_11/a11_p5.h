/*
CH-230-A
a11_p5.h
Yen Ling Wong
ywong@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
#include <iostream>


class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
        void setName(const std::string&);
        // Setter Method
		void printName() const ;  	// prints the name  
        std::string getName() const;
        // Getter Method
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
        void setx(int);
        void sety(int);
        // Setter Methods
		void move(double, double);	// moves the shape, i.e. it modifies it center
        double getx() const;
        double gety() const;
        // Getter Method
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
        void setEdgesNumber(int);
        // Setter Method
        int getEdgesNumber() const;
        // Getter Method
};

class Rectangle : public RegularPolygon { // a rectangle is a regular polygon 
                                          // with 4 edges with 2 different lengths
    private:
        double width, height;
    public:
        Rectangle();
        // Default Constructor
        Rectangle(const std::string&, double, double, int, double, double);
        Rectangle(const Rectangle&);
        // Copy Constructor
        void setwidth(double);
        void setheight(double);
        // Setter Method
        double getwidth() const;
        double getheight() const;
        // Getter Method
        double perimeter();
        // Method to Calculate Perimeter
        double area();
        // Method to Calculate Area
};

class Square : public Rectangle {
    private:
        double side;

    public:
        Square();
        // Default Constructor
        Square(const std::string&, double, double, int, double, double, double);
        Square(const Square&);
        // Copy Constructor
        void setside(double);
        // Setter Method
        double getside() const;
        // Getter Method
        double perimeter();
        // Method to Calculate Perimeter
        double area();
        // Method to Calculate Area
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
        // Default Constructor
		Circle(const Circle&);
        // Copy Constructor
        void setRadius(double);
        // Setter Method
        double getRadius() const;
        // Getter Method
        double perimeter();
        // Method to calculate perimeter
        double area();
        // Method to calculate area
};
    
#endif
/*
/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
/*
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape& obj);		// copy constructor

		void setName(std::string Name); // setter method for name

		std::string getName() const;	// getter method for name
		void printName() const;  		// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x, y;  // the center of the shape
	public:
		// Parametric constructor with all parameters
		CenteredShape(const std::string&, double, double);
		CenteredShape(); // Default constructor
		CenteredShape(const CenteredShape& obj); // Copy constructor

		void setX(double X);		// Setter method for x
		void setY(double Y);		// Setter method for y

		double getX() const;		// Getter method for x
		double getY() const;		// Getter method for y

		// moves the shape, i.e. it modifies it center
		void move(double, double);	
};

// a regular polygon is a centered_shape with a number of edges
class RegularPolygon : public CenteredShape {
	private: 
		int EdgesNumber; // number of edges of the polygon
	public:
		// Parametric constructor with all parameters
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon(); // Default constructor
		RegularPolygon(const RegularPolygon& obj); // Copy constructor

		// Setter method for EdgesNumber
		void setEdgesNumber(int newEdgesNumber);
		
		int getEdgesNumber() const; // Getter method for EdgesNumber
};

class Rectangle : public RegularPolygon {
	private:
		double nwidth;
		double nheight;
	public:
		// Parametric constructor with all parameters
		Rectangle(const std::string& n, double nx, double ny, double NWidth,
				  double NHeight);
		Rectangle(); // Default constructor
		Rectangle(const Rectangle& obj); // Copy constructor

		void setNWidth(double NWidth); // Setter method for nwidth
		void setNHeight(double NHeight); // Setter method for nheight

		double getNWidth() const; // Getter method for nwidth
		double getNHeight() const; // Getter method for nheight

		double perimeter() const; // Calculate perimeter
		double area() const; // Calculate area
};

class Square : public Rectangle {
	private:
		double nside;
	public:
		// Parametric constructor with all parameters
		Square(const std::string& n, double nx, double ny, double NSide);
		Square(); // Default constructor
		Square(const Square& obj); // Copy constructor
		
		void setNSide(double NSide); // Setter method for nside

		double getNSide() const; // Getter method for nside

		double perimeter() const; // Calculate perimeter
		double area() const; // Calculate area
};

// a Circle is a shape with a center and a radius
class Circle : public CenteredShape {
	private:
		double Radius;
	public:
		// Parametric constructor with all 
		Circle(const std::string&, double, double, double);
		Circle(); // Default constructor
		Circle(const Circle&); // Copy constructor

		void setRadius(double newRadius); // Setter method for Radius
		
		double getRadius() const; // Getter method for Radius

		double perimeter() const; // Calculate perimeter
		double area() const; // Calculate area
};
#endif
*/