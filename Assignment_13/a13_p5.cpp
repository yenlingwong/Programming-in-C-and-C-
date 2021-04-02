/*
CH-230-A
a13_p5.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
using namespace std;
 
class A
{
  int x;
public:
  A() {x = 0;}
  // Add Default Constructor because D has no 
  // Definition and is calling for the default
  // Constructor in A, because D is inherited from A
  // Through B and C
  A(int i) { x = i; }
  // error: no matching function for call to 'A::A()'
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    // error: use of deleted function 'D::D()'
    // D::D()' is implicitly deleted because 
    // the default definition would be ill-formed
    // since there is class D is not defined, 
    // the compiler looks for default constructor in class A
    // which is not present
    d.print();
    return 0;
}