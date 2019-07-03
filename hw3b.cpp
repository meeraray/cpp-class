//Ronuk Ray, Period 2
//31 October 2018
//P3.16
//Compute paycheck for worker based on wage and hours

#include <iostream>
#include <string>

using namespace std;

int main() {
	//input hours
	cout << "Enter hours: ";
	double hours;
	cin >> hours;
	
	//input salary
	cout << "Enter wage: ";
	double wage;
	cin >> wage;
	
	double pay = 0.0;
	double overtime = 0.0;
	double hours_overtime = 0.0;
	
	if(hours <= 40) { //don't compute overtime
		pay = hours * wage;
	}
	else { //compute overtime too
		hours_overtime = hours - 40;
		overtime = hours_overtime * 1.5 * wage;
		pay = wage * 40 + overtime;
	}
	
	cout << "Hours worked: " << hours << endl;
	cout << "Wage: $" << wage << endl;
	cout << "Overtime hours: " << hours_overtime << endl;
	cout << "Overtime pay: " << hours_overtime * 1.5 * wage << endl;
	cout << "Total pay: " << pay << endl;
	return 0;
}