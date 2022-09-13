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
	int sum;

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

	// 4. adding up all 3 numbers
	sum = number1 + number2 + number3;

	// 5.Write numbers to the file.
	outputFile << "Number 1: " << number1 << endl;
	outputFile << "Number 2: " << number2 << endl;
	outputFile << "Number 3: " << number3 << endl;
	outputFile << "Sum: " << sum << endl;
	cout << "The numbers were saved to a file. \n";

	// 6. Close the file
	outputFile.close(); // Closing the file
}