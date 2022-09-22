/*Marco Mayorga

COSC-1436

September 22, 2022

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// 1.Variables
	int numOfSharesPurchased;
	double pricePerShareBought;
	double purchasePrice;
	double purchaseCommisionPercent;
	double purchaseCommisionAmount;
	double totalOfPurchas;
	int numOfSharesSold;
	double pricePerShareSold;
	double salePrice;
	double saleCommisionPercent;
	double saleCommisionAmount;
	double totalOfSale;
	double profitAmount;

	// 2.Ask user for information &&  3.Store user answer
	cout << "How many shares did you buy? ";
	cin >> numOfSharesPurchased;
	cout << "What was the purchase price of the share? ";
	cin >> pricePerShareBought;
	cout << "What percent commission did you pay? (For example type in .07 for 7%) ";
	cin >> purchaseCommisionPercent;
	cout << "How many shares did you sell? ";
	cin >> numOfSharesSold;
	cout << "What was the sale price of the shares? ";
	cin >> pricePerShareSold;
	cout << "What percent commission did you pay to sell the shares? (For example type in .07 for 7%) ";
	cin >> saleCommisionPercent;

	// 4.Calculations and logic

	// 4a. Purchases Calculations
	purchasePrice = (pricePerShareBought * numOfSharesPurchased);
	purchaseCommisionAmount = purchasePrice * purchaseCommisionPercent;
	totalOfPurchas = purchasePrice + purchaseCommisionAmount;

	// 4b. Sales Calculations
	salePrice = (pricePerShareSold * numOfSharesSold);
	saleCommisionAmount = salePrice * saleCommisionPercent;
	totalOfSale = salePrice + saleCommisionAmount;

	// 5.Display

	// 5a. Show purchas amounts
	cout << endl;
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << endl;
	cout << "Purchase Price:" << purchasePrice << endl;
	cout << endl;
	cout << "Purchase Commission:" << purchaseCommisionAmount << endl;
	cout << endl;
	cout << "Purchase Total:" << totalOfPurchas << endl;
	cout << endl;
	// 5a. Show Sale amounts
	cout << "Sale Price:" << salePrice << endl;
	cout << endl;
	cout << "Sale Commission:" << saleCommisionAmount << endl;
	cout << endl;
	cout << "Sale Total:" << totalOfSale << endl;

	return 0;
}