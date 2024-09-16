//include statements
#include <iostream>
#include <string>
//using namespace statements
using namespace std;

int main() {
	//variable declarations
	int gigabitStorage = 0;
	double convertedStorageValue = 0;
	double convertToMegabits = 0;
	double convertToMegabytes = 0;

	//executable statements
	cout << "Enter the amount of storage in GB..." << endl;
	cin >> gigabitStorage;
	convertToMegabits = (gigabitStorage * 1000);
	convertedStorageValue = (convertToMegabits / 1024);
	cout << "The converted storage value is..." << convertedStorageValue << endl;

	//return statement
	return 0;
}