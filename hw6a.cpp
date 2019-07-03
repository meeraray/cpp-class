//Ronuk Ray, Period 2
//31 October 2018
//P6.1
//Array operations and functions practice

#include <iostream>
#include <stdlib.h>


using namespace std;

int main() {
	
	//6.1
	
	//fill array with random numbers
	int arr[10];
	for(int i = 0; i < 10; i++) {
		arr[i] = rand() % 50;
	}
	
	cout << "Even indexed elements:";
	for(int i = 0; i < 10; i++) {
		//loop through each ind
		if(i % 2 == 0) { //if even print
			cout << " " << arr[i];
		}
	}
	cout << endl;
	
	cout << "Even elements:";
	for(int i = 0; i < 10; i++) {
		if(arr[i] % 2 == 0) {
			//if elem value is even print
			cout << " " << arr[i];
		}
	}
	cout << endl;
	
	cout << "In reverse order:";
	//start from last index and count down
	for(int i = 9; i >= 0; i--) {
		cout << " " << arr[i];
	}
	cout << endl;
	
	cout << "The first and last element: ";
	cout << arr[0] << " " << arr[9] << endl;
	
}

