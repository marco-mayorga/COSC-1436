/*Marco Mayorga

COSC-1436

October 04, 2022

*/

#include <iostream>
using namespace std;

// Prototypes
void display(int num1, int num2, double sum, double difference);
int getFirstNUm();
int getSecondNUm();
double Sum(int num1, int num2);
double calcDifference(int num1, int num2);
void noParam();


int main()
{
	int num1 = 0;
	int num2 = 0;
	double sum = 0.0;
	double difference = 0.0;


	num1 = getFirstNUm();
	num2 = getSecondNUm();

	// 4.Calculations and logic
	sum = Sum(num1, num2);
	difference = calcDifference(num1, num2);

	// 5.Display
	display(num1, num2, sum, difference);
	noParam();
	return 0;
}
int getFirstNUm()
{
	int num1;
	// 2.Ask User for 'first num' //3.Store user answer
	cout << "Please enter the first number." << endl;
	cin >> num1;
	return num1;
}
int getSecondNUm()
{
	int num2;
	// 2.Ask User for 'first num' //3.Store user answer
	cout << "Please enter the second number." << endl;
	cin >> num2;
	return num2;
}
double Sum(int num1, int num2)
{
	// 4.Calculations and logic
	return num1 + num2;
}
double calcDifference(int num1, int num2)
{
	// 4.Calculations and logic
	return num1 - num2;
}
void display(int num1, int num2, double sum, double difference)
{
	// 5.Display
	cout << "Num1: " << num1 << endl;
	cout << "Num2: " << num2 << endl;
	cout << "Sum: " << sum << endl;
	cout << "Differnce: " << difference << endl;
}
void noParam()
{
	cout << "THE END";
}