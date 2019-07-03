#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() { 
	ifstream data_file;
	data_file.open("okay.epic");
	string input_line;
	getline(data_file, input_line);
	cout << input_line;
	return 0;
}