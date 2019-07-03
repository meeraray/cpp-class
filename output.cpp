#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ofstream data_file;
	data_file.open("cat.txt");
	
	int x = 4;
	data_file << setw(4) << setfill('0') << x;
	
	data_file.close();
}