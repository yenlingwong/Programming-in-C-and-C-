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
/*
#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
    char c;
    std::string input, filename, extension;
    char delimiter = '.';

    std::cout << "Enter file name: ";
    std::cin >> input;

    // Find position of period in input
    std::size_t found = input.find_last_of(delimiter);

    // Divide the input into filename and extension using the position of period
    filename = input.substr(0, found);
    extension = input.substr(found, input.length());

    // Assign the new name of the file to be copied into by concatenating
    // filename, "_copy" and the extension
    std::string result = filename + "_copy" + extension;

    // Open the in file
    std::ifstream in(input);
	if (!in.good()) { // Check if it didn't open successfully
		std::cerr << "Error opening input file!" << std::endl;
		exit(1);
	}

    // Open the out file with truncate flag
	std::ofstream out(result, std::ios::trunc);
	if (!out.good()) { // Check if it didn't open successfully
		std::cerr << "Error opening output file!" << std::endl;
		exit(2);
	}

    // Check if both files are open
    if (in.is_open() && out.is_open()) {
        // Extract the in file character by character
        while (in.get(c))
            out << c; // Insert each character into out
    } else std::cout << "At least one of the files couldn't be opened!";

    // Close files
	in.close(); 
	out.close();

    return 0;
}
*/