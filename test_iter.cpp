#include <iostream>
using namespace std;
int main() {
	cout << "start";
	
	for(int i = 0; i < 7000000; i++) {
		if(i % 1000000 == 0) {
			cout << i << endl;
		}
	}
	cout << "done";
}