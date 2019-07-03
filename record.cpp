#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;
int main() {
	ifstream in_file;
	in_file.open("example.recnord");
	
	string line;
	string firstname1;
	string lastname1;
	string phonenum;
	
	//in_file >> firstname1 >> lastname1 >> phonenum;
	while(getline(in_file, line)) {
		//cout << line << endl;
		istringstream strm;
		strm.str(line);
		strm >> firstname1 >> lastname1 >> phonenum;
		cout << setw(6) << left;
		cout << firstname1 << " ";
		cout << setw(13) << left;
		cout << lastname1 << " ";
		cout << setw(12); 
		cout << phonenum << endl;
	}
	in_file.close();
	
	ofstream out_file;
	out_file.open("C:/cpp/trolling.ebin");
	out_file << "When you trigger a libtard le ebin style.";
	out_file.close();
	//cout << firstname1 << " " << lastname1 << " " << phonenum << endl;
	return 0;	 
}
