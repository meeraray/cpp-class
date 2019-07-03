// Ronuk Ray, Period 2
// 31 October 2018
// P6.12
// Removes duplicate elements in array

#include <iostream>

using namespace std;

void remove_duplicates(int arr[], int &size);
void remove_at_pos(int values[], int pos, int &current_size);

int main() {
	
}

//6.12
void remove_duplicates(int arr[], int &size) {
	//loop through array twice and checks if any duplicates
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			//if duplicate found (besides being = to itself)
			if(i != j & arr[i] == arr[j]) {
				//delete
				remove_at_pos(arr, i, size);
			}
		}
	}
}

//from book
void remove_at_pos(int values[], int pos, int &current_size) {
	//removes, shifts other elements
	for (int i = pos + 1; i < current_size; i++) {
	 values[i - 1] = values[i];
	}
	//updates size
	current_size--;
}