/*Marco Mayorga

COSC-1436

October 11, 2022

Write a program that lets the user enter ten values into an array. The
program should then display the largest and smallest values stored in
the array.
*/

#include <iostream>

using namespace std;

int main()
{
	// 0.Constants
	int const CAPACITY = 10;
	// 1.Variables
	int arr[CAPACITY];
	int value;
	int biggest;
	int smallest;

	// for loop to store all user values
	for (int i = 0; i < CAPACITY; i++)
	{
		// 2.Ask User to type in elements 3.Store user answer
		cout << "Please enter a value: ";
		cin >> value;
		// 4.Calculations and logic
		arr[i] = value;
	}
	for (int i= 0; i < CAPACITY; i++){
		biggest = arr[0];
		smallest = arr[0];
		if (arr[i] > biggest){
			arr[i] = biggest;
		}
		if  (arr[i] < smallest){
			arr[i] = smallest;
		}

	}
	// 5.Display
	for(int i = 0; i < CAPACITY; i++){
		cout << arr[i] << ", ";
		cout << endl;
		cout << biggest << endl;
		cout << smallest << endl;
	}

	cout <<endl;
	return 0;
}