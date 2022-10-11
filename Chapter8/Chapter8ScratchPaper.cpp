/*Marco Mayorga

COSC-1436

October 11, 2022

*/

#include <iostream>
void ShowDub(int);

using namespace std;
int scores[10];		//declare an array of size 10

int main()
{
	int const CAPACITY = 12;
	double money[CAPACITY] = {45, 50, 34, 99, 34, 23, 45, 67, 34, 100, 101,55};
	for (int i = 10; i < CAPACITY; i++){
		cout << money[i] << endl;
	}

	cout << endl;

	// Swapping 101 and 55
	int temp = money[10];//Storing 101 in temp variable
	money[10] = money[11]; //storing 55 into money[10]
	money[11] = temp; 	 // storing 101 that was in temp is now stored in money[11]

	for (int i = 10; i < CAPACITY; i++){
		cout << money[i] << endl;
	}
}