//Ronuk Ray, Period 2
//31 October 2018
//P3.1
//Print the state of water depending on inputted temp

#include <iostream>
#include <string>

using namespace std;

int main() {
	double temp;
	char letter;
	cin >> temp >> letter;
	
	if(letter == 'C') {
		
		
		if(temp >= 100) { //over boiling point
			cout << "gaseous";
			
		}
		else if(temp >= 0) { //over melting point
			cout << "liquid";
		}
		else {
			cout << "solid";
		}
	}
	else if(letter == 'F'){
		if(temp >= 212) { //over boiling point
			cout << "gaseous";
		}
		else if(temp >= 32) { //over melting point
			cout << "liquid";
		}
		else {
			cout << "solid";
		}	
	}
	else {
		cout << "Invalid letter";
	}
	return 0;
}