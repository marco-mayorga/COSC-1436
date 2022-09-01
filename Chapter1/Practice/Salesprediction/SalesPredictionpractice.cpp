/*Marco Mayorga

COSC-1436

September 01, 2022

The East Coast sales division of a company generates 58 percent of total sales.
Based on that percentage, write a program that will predict how much the East Coast
division will generate if the company has $8.6 million in sales this year.*/

#include <iostream>

using namespace std;

int main()
{
	// Total Company Sales I set it as an integer since it is a whole number
	int CompanySales = 8600000;

	// .58 == 58% in decimal form. I also made it a float since a percentage
	//  is the same as a decimal
	float ECDSales = .58;

	// It is an int because the answer should be a whole number
	// It multiplies the company sales by the percentage of East coast sales
	// to find how much tht divison sold for the company
	int ECDSalesInCompany = CompanySales * ECDSales;

	// Both of the console outs format and send the answer to the terminal/console
	cout << "The East Coast sales division Sold: ";
	cout << ECDSalesInCompany;
	return 0;
}