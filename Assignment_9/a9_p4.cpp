/*
CH-230-A
a9_p4.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int myCount(int x, int y) {
    return (y - x) ;
}
// Return difference between 2nd and 1st output

int myCount(char x, string y) {

    int count = 0;
    for (unsigned int i = 0; i < y.length(); i++){
        if (y[i] == x) {
            count++;
        }
    }
    return count;
}
// Return number of occurences of a character
// Within a string

int main () {
    
    int x = 7;
    int y = 3;

    char a = 'i';
    string b = "this is a string";
    
    cout << myCount(x , y) << endl;
   
    cout << myCount(a , b) << endl;

    return 0;
}
