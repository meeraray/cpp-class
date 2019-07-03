// Ronuk Ray, Period 2
// 21 December, 2018
// P7.1
// Sorts the values of two pointers

#include <iostream>

void sort2(double* p, double* p2);

using namespace std;


int main() {
	//return 0;
	
	//testing values
	double x = 7.0;
	double y = 6.4;
	double* p = &x;
	double* p2 = &y;
	
	cout << x << endl;
	cout << y << endl;
	
	sort2(p, p2);
	
	//Did it change afterward?
	cout << x << endl;
	cout << y << endl;
	return 0;
}

void sort2(double* p, double* p2) {
	//dereference pointers
	double d1 = *p;
	double d2 = *p2;
	
	
	if(d1 < d2) { //already sorted
		return;
	}
	else { //switch them
		*p = d2;
		*p2 = d1;
		return;
	}
}