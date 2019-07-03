// Ronuk Ray, Period 2
// 22 December, 2018
// Ch 7 Linked List Program
// Sorts the values of two pointers

#include <iostream>

using namespace std;


struct node {
	//heights of yearly rainfall in different cities
	int height;
	node* next_node;
};

node* linked_list;

void insert_node(int height);
int delete_node();
void print_list();

int main() {
	
	//Add a node
	linked_list = new node;
	linked_list -> height = 2;
	linked_list -> next_node = NULL;
	
	cout << "Linked list so far: ";
	print_list();
	
	//Add a second node
	insert_node(5);
	
	cout << "Linked list so far: ";
	print_list();
	
	
	//Add a third node
	insert_node(1);
	
	cout << "Linked list so far: ";
	print_list();
	
	//Delete a node 
	int height = delete_node();
	cout << "Previously stored data: " << height << endl;
	cout << "Linked list so far: ";
	print_list();
	
	return 0;
}

//add node at beginning
void insert_node(int height) {
	
	//create new node
	node* temp_node = new node;
	temp_node->height = height;
	temp_node->next_node = linked_list;
	
	//make it the first one
	linked_list = temp_node;
}

//to delete the first node of the list
int delete_node() {
	
	int contents = linked_list -> height;
	
	//save pointer to be deleted later
	node* save_ptr = linked_list;
	
	//make the second element the first one
	linked_list = linked_list->next_node;
	
	//delete the first element so there are no dangling pointers
	delete save_ptr;
	
	return contents;
}

void print_list() {
	//initialize current node
	node* temp_node = linked_list;
	cout << "(";
	int i = 0;
	while (temp_node != NULL)
	{
		//put comma before every number except first one
		if(i != 0) {
			cout << ", ";
		}
		
		//print out current node's contents
		cout << temp_node-> height;
		
		//move current node to next one in list
		temp_node = temp_node->next_node;
		
		i++;
	}
	cout << ")" << endl;
}