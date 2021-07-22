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
/*
#include <iostream>

// Overloaded function mycount that receives 2 integers as arguments and returns
// the difference between the second and first integer
int mycount(int a, int b);

// Overloaded function mycount that receives one char and one string as 
// as arguments and returns the occurence of the char in the string
int mycount(char ch, std::string s);

int main(int argc, char **argv) {
    int firstNum = 49, secondNum = 93, result;

    // Call overloaded function mycount with int parameters
    result = mycount(firstNum, secondNum); // Should return 44
    std::cout << result << std::endl;

    // Call overloaded function mycount with char and string parameters
    result = mycount('l', "hello world!"); /// Should return 3
    std::cout << result << std::endl;

    return 0;
}

int mycount(int a, int b) {
    return b - a;
}

int mycount(char ch, std::string s) {
    int count = 0;
    // Traverse the string and check each character
    for (int i = 0; i < (int) s.length(); i++) {
        if (s[i] == ch)
            count++;
    }
    return count;
}
*/