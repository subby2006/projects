#include <iostream>
#include <string>
using namespace std;

int main() {
	int numStudents = 0;
	double numStudentCalories = 0;
	double totalStudentCalories = 0;
	double nutCaloriespp = 0;
	double fruitToNutRatio = 0.7;
	double fruitCaloriespp = 0;
	double totalCaloriespp = 0;
	double totalMixRequired = 0;

	cout << "Enter the number of students..." << endl;
	cin >> numStudents;
	cout << "Enter the number of calories required..." << endl;
	cin >> numStudentCalories;
	cout << "Enter the number of calories in a nut..." << endl;
	cin >> nutCaloriespp;
	fruitCaloriespp = nutCaloriespp / fruitToNutRatio;
	totalCaloriespp = (fruitCaloriespp + nutCaloriespp)/2;
	totalStudentCalories = numStudents * numStudentCalories;
	totalMixRequired = totalStudentCalories / totalCaloriespp;
	cout << "Amount of Nut and Fruit mixture needed for the students: " << totalMixRequired << endl;

	return 0;
}