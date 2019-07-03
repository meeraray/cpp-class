#include <iostream>
#include <string>

using namespace std;

int main() {
	int temp;
	cout << "You might want to enter a temperature: ";
	cin >> temp;
	
	string scale;
	cout << endl << "Ok now say C for Celcius or F for Farenheit.";
	cin >> scale;
	
	if(scale == "C") {
		if(temp > 100) {
			cout << "It's a gas!";
			return 0;
		}
		else if(temp > 0) {
			cout << "It's a liquid!";
			return 0;
		}
		else {
			cout << "It's a solid!";
			return 0;
		}
	}
	
	if(scale == "F") {
		if(temp > 212) {
			cout << "It's a gas!";
			return 0;
		}
		else if(temp > 20) {
			cout << "It's a liquid!";
			return 0;
		}
		else {
			cout << "It's a solid!";
		}
	}
}