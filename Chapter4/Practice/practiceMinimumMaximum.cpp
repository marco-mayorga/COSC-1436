/*Marco Mayorga

COSC-1436

September 22, 2022

Write a program that asks the user to enter two numbers. The program should use the conditional operator to determine which number is the
smaller and which is the larger.*/

#include <iostream>

using namespace std;

int main()
{
	double Num1 = 0;
	double Num2 = 0;

	cout << "Give me the first number: ";
	cin >> Num1;
	cout << "Give me the second number: ";
	cin >> Num2;

	if (Num1 > Num2)
	{
		cout << Num1 << " is the largest number " << endl;
		cout << "and " << Num2 << " is the smallest number!" << endl;
	}
	else if (Num2 > Num1)
	{
		cout << Num2 << " is the largest number ";
		cout << "and " << Num1 << " is the smallest number." << endl;
	}
	else
	{
		cout << Num1 << " and " << Num2 << " are equal!" << endl;
	}
	return 0;
}
