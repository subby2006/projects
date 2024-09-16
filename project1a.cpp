#include <iostream>
#include <string>
using namespace std;

int main() {
	const int SECRET = 11;
	const double RATE = 12.50;

	int num1 = 0;
	int num2 = 0;
	int newNum = 0;
	string name;
	name = "";
	double hoursWorked = 0.0;
	double wages = 0.0;

	cout << "Enter the following prompts... " << endl;
	cout << "Enter an Integer: " << endl;
	cin >> num1;
	cout << "Enter an Integer 2: " << endl;
	cin >> num2;
	cout << "The value of Integer1 = " << num1 << " and the value of Integer2 = " << num2 << endl;
	newNum = (num1 * num2);
	cout << "newNum value: " << newNum << endl;
	newNum = newNum + SECRET;
	cout << "newNum with SECRET value: " << newNum <<endl;
	cout << "Enter a last name: " << endl;
	cin >> name;
	cout << "Enter a decimal number between 0 and 70: " << endl;
	cin >> hoursWorked;
	wages = (hoursWorked * RATE);
	cout << "Name: " << name << endl;
	cout << "Pay Rate: $ " << wages << endl;
	cout << "Hours Worked: " << hoursWorked << endl;

}