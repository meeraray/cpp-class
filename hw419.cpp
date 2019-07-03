//Ronuk Ray, Period 2
//27 September 2018
//P4.19
//Prints out all the factors of an inputted integer

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int num;
	cin >> num;
	
	//going from 1 to entered integer, prints it out if remainder when divided is 0
	for(int i = 1; i <= num; i++) {
		if(num % i == 0) {
			cout << i << endl;
		}
	}
	return 0;
}