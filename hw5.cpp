//Ronuk Ray, Period 2
//12 October 2018
//P5.3
//Methods to find average and smallest of three numbers provided

#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;


/**
@param x first number
@param y second number
@param z third number
@return the smallest of the three
*/
double smallest(double x, double y, double z) {
	//checks if x is smallest
	if(x <= y && x <= z) {
		return x;
	}
	
	//checks if y is smallest
	if(y <= x && y <= z) {
		return y;
	}
	
	//checks if z is smallest
	if(z <= x && z <= y) {
		return z;
	}
	
}


/**
@param x first number
@param y second number
@param z third number
@return the average
*/
double average(double x, double y, double z) {
	//sum all numbers and divide by 3
	return (x + y + z) / 3;
}

int main() {
	
	//Program to test the two functions by looping through numbers
	double x = 0;
	double y = 0;
	double z = 0;
	
	for(double x = 0; x < 5; x++) {
		for(double y = 0; y < 5; y++) {
			for(double z = 0; z < 5; z++) {
				cout << "x = " << x << ", y = " << y << ", z = " << z << ", smallest is " << smallest(x, y, z) << endl; 
				cout << "x = " << x << ", y = " << y << ", z = " << z << ", average is " << smallest(x, y, z) << endl; 
			}
		}
	}

}


