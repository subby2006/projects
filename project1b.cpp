#include <iostream>
#include <string>
using namespace std;

int main() {
    double cartonVol = 3.78;
	double costOfMilk = 0.38;
	double profitOfMilk = 0.27;
	double milkProduced = 0;
	int numCartons = 0;
	int productionCost = 0;
	int profit = 0;

	cout << "Enter the total amount of milk produced today morning... " << endl;
	cin >> milkProduced;
	numCartons = round(milkProduced / cartonVol);
	cout << "Number of milk cartons needed: " << numCartons << endl;
	productionCost = (milkProduced * costOfMilk);
	cout << "Cost of producing milk: " << productionCost << endl;
	profit = (milkProduced * profitOfMilk);
	cout << "Profit of producing milk: " << profit << endl;

	return 0;
}