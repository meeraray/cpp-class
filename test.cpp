#include <iostream>
#include <vector>
#include <time.h>

using namespace std;


int main() 
{
	srand(time(NULL));
	if(rand() % 2 == 0) {
		cout << "even";
	}
}
