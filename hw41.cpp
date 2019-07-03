//Ronuk Ray, Period 2
//27 September 2018
//P4.1
//Uses loops to print different quantities

#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;

int main() {
	//a) sum of even numbers between 2 and 100 (inclusive)
	int total = 0;
	for(int i = 2; i <= 100; i++) {
		total += i;
	}
	cout << total << endl;
	
	//b) sum of all squares between 1 and 100 (inclusive)
	total = 0;
	for(int i = 1; i <= 100; i++) {
		total += i * i;
	}
	cout << total << endl;
	
	//c) All powers of 2 from 2^0 up to 2^20
	for(int i = 0; i <= 20; i++) {
		cout << pow(2, i) << endl;
	}
	
	//d) The sum of all odd numbers between a and b (inclusive), where a and b are inputs
	int a;
	cin >> a;
	int b;
	cin >> b;
	total = 0;
	for(; a <= b; a++) {
		if(a % 2 == 1) {
			total += a;
		}
	}
	cout << total << endl;
	
	//e) The sum of all odd digits of an input
	//repeatedly divided by 10, added digit to total if it wasn't divisible by 2
	int n;
	cin >> n;
	int current = n;
	int div = 0;
	int digit = 0;
	total = 0;
	do {
		div = current / 10;
		digit = current - div * 10;
		if(digit % 2 == 1) {
			total += digit;
		}
		current = div;
	}
	while (div > 0);
	cout << total;
	return 0;
}