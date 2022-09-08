/*Marco Mayorga

COSC-1436

September 08, 2022

practice*/

#include <iostream>

using namespace std;

int main()
{
	// 1. Variables
	double var1 = 0;
	double var2 = 0;
	double var3 = 0;
	double var4 = 0;
	double var5 = 0;
	
	// 2 Talk To user &
	// 3. Store info
	cout << "The First Value is: ";
	cin >> var1;

	cout << "The Second Value is: ";
	cin >> var2;

	cout << "The Third Value is: ";
	cin >> var3;

	cout << "The Fourth Value is: ";
	cin >> var4;

	cout << "The Fifth Value is: ";
	cin >> var5;

	// 4. Calculate
	double sum = var1 + var2 + var3 + var4 + var5;
	double average = sum / 5;

	// 5. Display
	cout << "The sum is: "<< sum << endl;
	cout << "The average is: " << average << endl;
	return 0;
}