/*Marco Mayorga

COSC-1436

October 11, 2022

*/

#include <iostream>

using namespace std;
double potentialEnergy(double mass, double height);

// P.E. = mgh, where m is the mass in kilograms, g is the acceleration due to gravity (9.8 m / s2 at the earth’s surface),
//	and h is the height in meters.

// 0.Constant
double const gravity = 9.8;
int main()
{
	// 1.Variables
	double mass = 0;
	double height = 0;

	// 2.Ask User for mass and height of the object //3.Store user answer
	cout << "What is the mass of the object (in kilograms): ";
	cin >> mass;
	while (mass < 0)
	{
		cout << "Try again!" << endl;
		cout << "What is the mass of the object (in kilograms): ";
		cin >> mass;
	}

	cout << "What is the height of the object (in meters): ";
	cin >> height;
	while (height < 0)
	{
		cout << "Try again!" << endl;
		cout << "What is the height of the object (in meters): ";
		cin >> height;
	}
	// 4.Calculations and logic
	potentialEnergy(mass, height);
	return 0;
}

double potentialEnergy(double mass, double height)
{
	double PE = mass * gravity * height;
	cout << "The Potential Energy of your obejct is " << PE << endl;
	return 0;
}
