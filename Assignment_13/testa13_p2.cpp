/*
CH-230-A
a13_p2.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include "a13_p2.h"
using namespace std;

int main() {
    Complex complex1, complex2;
    Complex addcomplex, diffcomplex;
    Complex prodcomplex;
    // Storing complex numbers into variables

    ifstream firstfile;
    firstfile.open("in1.txt");
    // Opening in1.txt in read mode

    ifstream secondfile;
    secondfile.open("in2.txt");
    // Opening in2.txt in read mode

    if (!firstfile || !secondfile) {
        cerr << "Unable to open files!\n";
        exit(1);
    }
    // Check if files can be opened

    if (firstfile.is_open() && secondfile.is_open()) {
        firstfile >> complex1;
        secondfile >> complex2;
    }
    // Storing the file contents into complex variables

    addcomplex = complex1 + complex2;
    diffcomplex = complex1 - complex2;
    prodcomplex = complex1 * complex2;
    // Computing addition, subtraction and product

    ofstream resultfile;
    // Open output.txt in write mode

    resultfile.open("output.txt", ios::trunc);
    if (!resultfile) {
        cerr << "Unable to open files!\n";
        exit(1);
    }
    // Check if file can be opened

    if (resultfile.is_open()) {
        resultfile << "The sum of both complex numbers: ";
        resultfile << addcomplex << endl;
        resultfile << "The difference between the first and second complex number: ";
        resultfile << diffcomplex << endl;
        resultfile << "The product of both complex numbers: ";
        resultfile << prodcomplex << endl;
    }
    // Writing into output.txt

    firstfile.close();
    secondfile.close();
    resultfile.close();
    // Closing files

    return 0;
}