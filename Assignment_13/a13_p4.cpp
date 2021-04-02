/*
CH-230-A
a13_p4.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  virtual public A
{
public:
  B()  { setX(10); }
};
 
class C:  virtual public A  
// set as virtual base classes to remove ambiguity 
// To avoid duplicates of setX in D
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    // Error: Request for member 'print' is ambiguous
    // Ambiguous because d inherits setX from both B and C
    // And so there exists duplicates
    d.print();
    return 0;
}

