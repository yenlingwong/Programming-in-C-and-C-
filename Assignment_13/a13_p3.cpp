/*
CH-230-A
a13_p3.cpp
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int n;
    char ch;
    cout << "How many files?" << endl;
    cin >> n;
    // Reading number of files from keyboard

    string filename[n];
    cout << "Type in the filenames." << endl;
    for (int i = 0; i < n ; i++) {
        cin >> filename[i];
    }
    // Storing filenames in string array

    ofstream outputfile;
    outputfile.open("concatn.txt", ios::binary | ios::trunc);
    // Open "concatn.txt" in binary write mode
    // Truncate file if already exists
    if (!outputfile) {
        cerr << "Unable to open file!\n";
        exit(1);
        // Check if file can be opened
    }

    for (int i = 0; i < n; i++) {
        ifstream sourcefile;
        sourcefile.open(filename[i], ios::binary);
        // Opening file at each iteration in binary read mode
        if (!sourcefile) {
            cerr << "Unable to open file!\n";
            exit(1);
            // Check if file exists and can be opened
        }
        while(sourcefile.get(ch)) {
            outputfile << ch;
            // Read character by character
        }
        outputfile << endl;
        // Add '\n' to the end of each file
        sourcefile.close();
        // Close file before opening the next one
    }
    outputfile.close();
    // Closing "concatn.txt"
    return 0;
}