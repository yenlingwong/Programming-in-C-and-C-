/*
CH-230-A
a9_p2.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    int n;
    double x;
    string s;
    // Declaring Variables

    cin >> n;
    cin >> x;
    cin >> s;
    // Reading inputs from keyboard

    for (int i = 0; i < n; i++) {
        // Printing n number of times
        cout << s << ":" << x << endl;
    }

    return 0 ;
}
/*
#include <iostream>

int main(int argc, char **argv) {
    int n;
    double x;
    std::string s;

    std::cin >> n >> x >> s;
    
    // Loop n times and output string:double every time
    for (int i = 0; i < n; i++) {
        std::cout << s << ":" << x << std::endl;
    }
    
    return 0;
}
*/