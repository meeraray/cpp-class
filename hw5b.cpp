//Ronuk Ray, Period 2
//12 October 2018
//P5.27
//Method to reverses string

#include <iostream>
#include <iomanip>
#include <string>
 
using namespace std;

string reverse(string str) {
	//The reverse of a single character is itself.
	if(str.length() == 1) {
		return str;
	}
	
	/*
	Return last character and recursively call reverse on
	rest of string */
	
	return str.back() + reverse(str.substr(0, str.length() - 1));
}

int main() {
	
	//Input string
	string str;
	cin >> str;
	
	//Print out reversed string
	cout << reverse(str);
}
