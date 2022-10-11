/*Marco Mayorga

COSC-1436

September 29, 2022

*/

#include <iostream>

using namespace std;

int main()
{
	// 1.Variables
	int userInput;
	int firstNum = 0;
	int secondNum = 1;
	int nextNum;

	// 2.Ask User for number of fib numbrs. 	//3.Store user answer
	cout << "How many Fibinocci numbers do you want: ";
	cin >> userInput;
	cout << 0 << " ";
	cout << 1 << " ";
	// 4.Calculations and logic
	for (int i = 0; i < userInput; i++){
		nextNum = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = nextNum;
		cout << nextNum << " ";
	}
	cout << endl;

	// 5.Display
	return 0;
}