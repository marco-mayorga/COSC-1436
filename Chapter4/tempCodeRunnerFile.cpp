#include <iostream>
using namespace std;

int main()
{
    // 1.Variables
    int num1, num2 = 0;
    int largest = -999;

    // 2.Ask user for the first number
    cout << "Pleae enter your first number. ";
    // 3.Store
    cin >> num1;

    cout << "Pleae enter your second number. ";
    cin >> num2;

    // Calculation and logic
    if (num1 > num2)
    {
        largest = num1;
        cout << endl;
    }
    else if ( num2 > num1)
    {
        largest = num2;
        cout << endl;
    }
    else
    {
        largest = num1; // Doesnt matter what you set largest to as long as you set it to a num.
        cout << endl;
    }
    cout << "Largest: " << largest << endl;
    cout << "The END" << endl;
}