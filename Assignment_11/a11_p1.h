/*
CH-230-A
a11_p1.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <string>
using namespace std;

class Box {

    private:

    double height;
    double width;
    double depth;

    // Declaring Variables

    public:
    Box();
    Box(double newheight, double newwidth, double newdepth);
    Box(const Box&);
    
    // Declaring Constructors

    ~Box();
    // Destructor 

    void setHeight(double newheight);
    void setWidth(double newwidth);
    void setDepth(double newdepth);
    // Setter Methods

    double getHeight();
    double getWidth();
    double getDepth();
    // Getter Methods

    void print();
    // Printing Method

};
/*
class Box {
    private:
        double height;
        double width;
        double depth;

    public:
        // Constructors
        // Construct Box with all parameters
        Box(double Height, double Width, double Depth);
        // Default Construct Box with no parameters
        Box();
        // Copy constructor
        Box(Box& box);
        // Copy operator
        Box& operator=(const Box& op) = default;

        // Destructor
        ~Box();

        // setter methods
        void setH(double Height);
        void setW(double Width);
        void setD(double Depth);

        // getter methods
        double getH() const;
        double getW() const;
        double getD() const;
};
*/