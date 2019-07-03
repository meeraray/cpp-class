/*
Name: Ronuk Ray
Date: 10 Oct 2018
Program: HW4 p178 P4.1 and 4.19
Program Description: Loop Practice
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//a) Sum of all even numbers between 2 and 100
	int total = 0;
	for(int i = 2; i <= 200; i += 2) {
			total += i;
	}
	cout << total;
	
	//b) Sum of all squares between 1 and 100
	int total2 = 0;
	for(int i = 0; i <= 100; i++) {
		total2 += i * i;
	}
	cout << total2;
	
	//c) All powers of 2 from 2^0 to 2^20
	for(int i = 0; i <= 20; i++) {
		cout << pow(2, i) << endl;
	}
	
	
	//d) Sum of all odd numbers between inputs a and b
	int a;
	int b;
	int total3 = 0;
	cin >> a;
	cin >> b;
	for(; a < b; a += 2) {
		if(a % 2 == 1) {
			total3 += a;
		}
	}
	cout << total3;
	
	//e) Sum of odd digits of an input
	int num;
	int total4 = 0;
	cin >> num;
	int current = num;
	int div = 0;
	int digit = 0;
	do {
		div = current / 10;
		//System.out.println("Div: " + div);
		digit = current - div * 10;
		if(digit % 2 == 1) {
			total4 += digit;
		}
		current = div;
	}
	while(current > 0);
	
	//P4.19 Print out factors of integer
	int num2;
	cin >> num2;
	for(int i = 1; i <= num2; i++) {
		if(num % i == 0) {
			cout << i << endl;
		}
	}
	return 0;
}