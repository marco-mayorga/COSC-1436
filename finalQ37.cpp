/*Marco Mayorga

COSC-1436

October 11, 2022

*/

#include <iostream>

using namespace std;

double potentialEnergy(double, double);

double const gravity = 9.8;

int main()
{

	double mass = 0;
	double height = 0;

	cout << "What is the mass of the object (in kilograms): ";
	cin >> mass;
	while (mass < 0)
	{
		cout << "Try again! Mass can't be negative." << endl;
		cout << "What is the mass of the object (in kilograms): ";
		cin >> mass;
	}

	cout << "What is the height of the object (in meters): ";
	cin >> height;
	while (height < 0)
	{
		cout << "Try again! Height can't be negative." << endl;
		cout << "What is the height of the object (in meters): ";
		cin >> height;
	}

	double pE = potentialEnergy(mass, height);

	cout << "PE = m g h" << endl;
	cout << mass << " kg" << " x "<< gravity <<  " m/s^2" << " x " << height <<  " m" << endl;
	cout << pE << " kg m^2/s^2"  << endl;
	cout << pE << "J" << endl;
	return 0;
}

double potentialEnergy(double mass, double height)
{
	double pE = mass * gravity * height;
	return pE;
}
