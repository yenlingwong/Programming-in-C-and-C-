/*
CH-230-A
a13_p1.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string file1, extension, file2, filename;
    char ch;
    // string to store file names

    cout << "Please enter a file name: " << endl;
    cin >> file1;

    size_t found1 = file1.find('.');
    size_t found2 = file1.length();
    extension = file1.substr(found1, found2);
    // Split the string to obtain extension
    filename = file1.substr(0, found1);
    // Split the string to obtain part without extension
    file2 = filename + "_copy" + extension;
    // Concatenating all parts


    ifstream original_file;
    original_file.open(file1);
    // Opening file in read mode

    ofstream copy_file;
    copy_file.open(file2);
    // Opening file in write mode

    if (!original_file || !copy_file) {
        cerr << "Unable to open files";
        exit(1);   
        // Terminate if unable to open
    }
    
    while(original_file.get(ch)) {
        copy_file << ch ;
        // Reading and Writing character by character from
        // original_file to copy_file
    }

    copy_file.close();
    original_file.close();
    // Closing both files
    return 0;
}
