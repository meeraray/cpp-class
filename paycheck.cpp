#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	double hours;
	double salary;
	double pay;
	double overtime;
	
	cout << "This is the paycheck calculator version 1.0." << endl;
	cout << "Please enter your first name: ";
	cin >> name;
	cout << "Please enter how many hours you worked: ";
	cin >> hours;
	cout << "Please enter your salary. Do not include the $ sign: ";
	cin >> salary;
	
	if(hours > 40) {
		overtime = hours - 40;
		hours = 40;
	}
	else {
		overtime = 0;
	}

	pay = salary * hours + salary * 1.5 * overtime;
	cout << name << "'s pay for this week is " << pay << endl;
	cout << "Press any key and enter to exit" << endl;
	cin >> name;
	
	return 0;
	
	int n = 3;
	if(n > 5) {
		cout << "big";
	}
	else if(n > 4) {
		cout << "less big";
	}
	else if(n > 2) {
		cout << "smol";
	}
	//If the order were reversed, it wouldn't matter.
	
	int n = 10;
	if(n > 5) {
		cout << "big";
	}
	else if(n > 6) {
		cout << "less big";
	}
	else if(n > 2) {
		cout << "smol";
	}
	//if the 2nd  and 1st were swiched, it would print out "less big".
	
}