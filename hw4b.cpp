/*
Name: Ronuk Ray
Date: 10 Oct 2018
Program: HW4 4.19
Program Description: Print out all the factors of an integer
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	//P4.19 Print out factors of integer
	
	//input number
	int num2;
	cin >> num2;
	
	//test all numbers less than num2
	for(int i = 1; i <= num2; i++) {
		if(num2 % i == 0) {
			cout << i << endl;
		}
	}
	return 0;
}