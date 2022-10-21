#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int INCREMENT = 3;
	int number = 0;
	double Y = 1;
	double X = 0;

	cout << "Enter a number between 1 and 10: ";
	cin >> number;
	while (number > 10 || number < 1)
	{
		cout << "Try again" << endl;
		cout << "Enter a number between 1 and 10: ";
		cin >> number;
	}

	cout << "X" << setw(8) << "Y" << endl;

	for (int i = 0; i < number; i++)
	{
		X += Y;
		cout << (i) << setw(8) << Y << endl;
		Y *= INCREMENT;
	}
	return 0;
}