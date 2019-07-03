// Ronuk Ray, Period 2
// 18 December, 2018
// P8.2 
// Finds average of list of doubles in external file

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	
	
	
	//Prompt user
	ifstream input_file;
	cout << "Enter file name: ";
	
	//Read in filename and open file
	string filename;
	cin >> filename;
	input_file.open(filename.c_str());
	
	//intialize counter variables
	string input_line;
	int num = 0;
	double current = 0.0;
	double total = 0.0;
	while(!input_file.fail()) {
		
		//continue reading in until input fails
		
		input_file >> current;
		
		if(!input_file.fail()) {
		total += current;
		}
		num++;
	}
	
	//Accounting for how the loop will add one extra before it fails
	num--;
	
	cout << "Average: " << (total / (double) num);
	//cout << total << " " << num;
	input_file.close();
	return 0;
	
	
}