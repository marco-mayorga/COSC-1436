/*Marco Mayorga

COSC-1436

September 13, 2022

Chapter 3: Practice: Open a file and read the contents*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	// 1.Variables
	ifstream inputFile; // a file object named inputFile
	int number;			// a number that will be read from the file

	// 2.Opening the file you will read from
	inputFile.open("/Users/marcomayorga/Documents/School/Cosc/1436-2001/Chapter3/Practice/Numbers.txt");
	cout << "Reading data from the file. \n";

	// 3.Read first number
	inputFile >> number;	// Read number 1 from the file
	cout << number << endl; // Display number 1

	inputFile >> number;	// Read number 1 from the file
	cout << number << endl; // Display number 1

	inputFile >> number;	// Read number 1 from the file
	cout << number << endl; // Display number 1

	// 4.Close the file
	inputFile.close(); // Closing the file
}