/*Marco Mayorga

COSC-1436

September 13, 2022

Writting to file*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	// 1.Variables
	ofstream outputFile;		   // create a ofstream named outputFile stream
	int number1, number2, number3; // a numbers that will be written to the file

	// 2.Open a file- if it exists our code will overwrite the file. if it doesnt then we make a file.
	outputFile.open("myNumbers.txt");
	cout << "Writing data to the file. \n";

	// 3.Get three numbers from the user.
	cout << "Enter a number: ";
	cin >> number1;
	cout << "Enter a number: ";
	cin >> number3;
	cout << "Enter a number: ";
	cin >> number2;

	// 4.Write numbers to the file.
	outputFile << number1 << endl;
	outputFile << number2 << endl;
	outputFile << number3 << endl;
	cout << "The numbers were saved to a file. \n";

	// 5. Close the file
	outputFile.close(); // Closing the file
}