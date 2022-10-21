/*Marco Mayorga

COSC-1436

October 14, 2022

Write a program that asks the user for a file name.
(20pts) Assume the file contains a series of numbers, each written on a separate line.
The program should read the contents of the file into an array then display the following data: (20 pts)

The lowest number in the array (10 pts)
The highest number in the array (10 pts)
The total of the numbers in the array (20 pts)
The average of the numbers in the array (20 pts)
*/

#include <iostream> // input output stream
#include <fstream>	//file library for working with files
#include <vector>	// Automatically resize arrays
#include <string>	//lwork with strings

using namespace std;

// Function prototypes
// Tells c++ about functions in a differnt area of the main file.
int lowestNum(const vector<int> numbersArray);
int highestNum(const vector<int> numbersArray);
int totalNums(const vector<int> numbersArray);
double averageOfNums(const vector<int> numbersArray);

int main()
{
	// 1.Variables
	ifstream inputFile; // a file object named inputFile
	string path = "";
	int currentNumberInFile;  // current number read from the file
	vector<int> numbersArray; // initializes a dynamic array or automatically resized array

	// Asks User For file Name
	cout << "Give me the Path to the file: ";
	// Gets users input and sets it as path variable.
	getline(cin, path);

	// 2.Opening the file that is going to be read.
	inputFile.open(path);

	// 2. Reading Numbers from file and adding to array.
	while (inputFile >> currentNumberInFile)
	{
		// .push_back(currentNumberInFile) adds a space to the array(numbersInArray) and appends the item to that space
		numbersArray.push_back(currentNumberInFile);
	}

	// Formatting
	cout << endl;

	// 4 & 5. Calls functions and sets to diffeerent variables. The functions do the calculations and display to console
	lowestNum(numbersArray);
	highestNum(numbersArray);
	totalNums(numbersArray);
	averageOfNums(numbersArray);
}

// Finds lowest Num in array. Takes array as const so nothing changes.
int lowestNum(const vector<int> numbersArray)
{
	int lowestNum = numbersArray[0];			  // sets the lowestNum to first num in array
	for (int i = 0; i < numbersArray.size(); i++) // loops until i is the size of the array
	{
		if (numbersArray[i] <= lowestNum) // checks if the currect num in array is the lowestNum
		{

			lowestNum = numbersArray[i]; // sets lowestNum to current Num in array
		}
	}
	cout << "The Lowest Number is: " << lowestNum << endl; // outputs lowest to console.
	return 0;
}

// Finds highest Num in array. Takes array as const so nothing changes.
int highestNum(const vector<int> numbersArray)
{
	int highestNum = numbersArray[0];			  // sets the highestNum to first num in array
	for (int i = 0; i < numbersArray.size(); i++) // loops until i is the size of the array
	{
		if (numbersArray[i] >= highestNum) // checks if the currect num in array is the highestNum
		{
			highestNum = numbersArray[i]; // sets highestNuum to current Num in array
		}
	}
	cout << "The Highest Number is: " << highestNum << endl; // Outputs highestNum to console.
	return 0;
}

// Finds total Num in array. Takes array as const so nothing changes
int totalNums(const vector<int> numbersArray)
{
	int total = numbersArray.size();					 // Gets the array size and sets it to total.
	cout << "Total Numbers in Array: " << total << endl; // Outputs total to console.
	return 0;
}

// Finds avg of Num in array. Takes array as const so nothing changes
double averageOfNums(const vector<int> numbersArray)
{
	// Setting local variables
	double sum = 0;
	double avg = 0;

	// loops until i is the size of the array
	for (int i = 0; i < numbersArray.size(); i++)
	{
		// sum is setting sum to sum + the current index of numbersArray. until size of array is reached.
		sum += numbersArray[i];
	}
	avg = sum / numbersArray.size();								 // Calculating the average by  dividing the sum by the Array size.
	cout << "The average of the Nums in the array: " << avg << endl; // Outputs avg to console.
	return 0;
}