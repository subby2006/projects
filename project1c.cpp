#include <iostream>
#include <string>
using namespace std;

int main() {
	double payrate = 0;
	double totalPay = 0;
	double payrateAfterTaxes = 0;
	double calculated1 = 0;
	double calculated2 = 0;
	double calculated3 = 0;
	double taxes = 0.14;
	double newClothesSpending = 0.10;
	double schoolSuppliesSpending = 0.01;
	double bondSpending = 0.25;
	double additionalBonds = 0.5;
	int additionalBondsSpent = 0;
	int weeklyHours = 0;
	int weeksWorked = 5;
	double remainingMoney = 0;

	cout << "Enter your hourly income..." << endl;
	cin >> payrate;
	cout << "Enter total hours worked per week..." << endl;
	cin >> weeklyHours;
	totalPay = (payrate * weeklyHours * weeksWorked);
	payrateAfterTaxes = totalPay - (totalPay * taxes);
	cout << "Your income from summer job before taxes is: " << totalPay << " and after taxes is: " << payrateAfterTaxes << endl;
	calculated1 = (payrateAfterTaxes * newClothesSpending);
	cout << "Your spending on new clothes and other accessories is: " << calculated1 << endl;
	calculated2 = (payrateAfterTaxes * schoolSuppliesSpending);
	cout << "Your spending on school supplies is: " << calculated2 << endl;
	remainingMoney = payrateAfterTaxes - (calculated1 + calculated2);
	calculated3 = (remainingMoney * bondSpending);
	cout << "Your spending on savings bonds is: " << calculated3 << endl;
	additionalBondsSpent = (calculated3 * additionalBonds);
	cout << "The money your parents spent on additional bonds is: " << additionalBondsSpent << endl;

	return 0;
}