// Ronuk Ray, Period 2
// 18 December, 2018
// P8.15
// Copies one file to another

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
	string sourceFile = argv[1];
	string destFile = argv[2];
	
	cout << "source: " << sourceFile << endl;
	cout << "destination: " << destFile << endl;
	
	ifstream src;
	src.open(sourceFile.c_str());
	
	ofstream dest;
	dest.open(destFile.c_str());
	
	
	// string line;
	// src >> line;
	// cout << line;
	
	while(!src.fail()) {
		string line;
		src >> line;
		//cout << line;
		//cout << line;
		
		if(!src.fail()) {
			dest << line << endl;
		}
	}
	return 0;
	
}