#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string first_name;
	string last_name;
	
	cout << "Enter first name: ";
	cin >> first_name;
	cout << "Enter last name: ";
	cin >> last_name;
	cout << "Your name is " << first_name << " " << last_name << endl;
	return 0;
}