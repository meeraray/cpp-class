#include <iostream>


int root(int num) 
{
	int lower = 0;
	int upper;
	while(upper * upper < num) {
		upper++;
	}
	cout << upper << " " << endl;
}
int main() 
{
	root(5);
	return 0;
}