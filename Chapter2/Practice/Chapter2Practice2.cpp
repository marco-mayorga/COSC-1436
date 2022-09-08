/*Marco Mayorga
COSC-1436
September 08, 2022
Practice 2 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	// 0 . Constants
	double const TAX_RATE  = 0.0675;
	double const TIPRATE  = 0.2;

	// 1. Variables
	double customerTax = 0.0;
	double tipPercent = 0.0;
	double customerTip = 0.0;
	double mealCost = 0.0;
	double subTotal = 0.0;
	double totalBill = 0.0;

	// 2. Talk to the User
	cout << endl;
	cout << "What is the meal Cost: ";
	// 3. Store the information
	cin >> mealCost;
	// 2. Talk to the User
	cout << "Please eneter the tip amount of choice (Ex: 10 for 10%): " << endl;
	// 3. Store the information
	cin >> tipPercent;

	// 4. Calculations
	customerTax = mealCost * TAX_RATE;
	subTotal = mealCost + customerTax;
	customerTip = subTotal * (tipPercent / 100);
	totalBill = subTotal + customerTip;

	// 5. Display
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "Meal Cost: " << mealCost << endl;
	cout << "Tax: " << customerTax << endl;
	cout << "Sub Total: " << subTotal << endl;
	cout << "Tip: " << customerTip << endl;
	cout << "Total: " << totalBill << endl;
	return 0;
}