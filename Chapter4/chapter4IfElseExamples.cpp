#include <iostream>
using namespace std;

int main()
{
    /*
    // 1.Variables
    int age = 0;

    // 2.Talk to the user
    cout << "How old are you? " << endl;
    // 3.Store
    cin >> age;

    // 4.Calculations and Logic
    if (age >= 16 && age <= 99) // 100 or more can not apply for a license.
    {
        // 5.Display
        cout << "You can apply for a drivers license." << endl;
        cout << "Here is your application." << endl;
    }
    if (age >= 18)
    {
        // 5.Display
        cout << "You can register to vote" << endl;
    }
    if (age >= 21)
    {
        cout << "You can Purchase Alcohol." << endl;
        cout << "You can Purchase Tobacco." << endl;
    }
    else
    {
        cout << "Thank you for visiting our location. " << endl;
    }
    cout << "The end." << endl; */
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