#include <iostream>
#include <string>
using namespace std;

int main() {
	double cartonVol = 3.78;
	double costOfMilk = 0;
	double profitOfMilk = 0;
	double milkProduced = 0;
	int numCartons = 0;
	int productionCost = 0;
	int profit = 0;

	cout << "Enter the total amount of milk produced today morning... " << endl;
	cin >> milkProduced;
	numCartons = round(milkProduced / cartonVol);
	cout << "Enter the cost of milk per liter... " << endl;
	cin >> costOfMilk;
	cout << "Enter the profit of milk per liter... " << endl;
	cin >> profitOfMilk;
	cout << "Number of milk cartons needed: " << numCartons << endl;
	productionCost = (milkProduced * costOfMilk);
	cout << "Cost of producing milk: " << productionCost << endl;
	profit = (milkProduced * profitOfMilk);
	cout << "Profit of producing milk: " << profit << endl;

	return 0;
}