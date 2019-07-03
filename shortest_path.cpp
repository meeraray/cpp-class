#include <iostream>
#include <array>
#include "graphs.cpp"

struct Vertex {
	int name;
	int shortest_path_length;
	int prev_vertex;
	bool visited;
	int next_vertex;
	
	//Vertex(int namee, 
};

int main() {
	Vertex vertices[100];
	Vertex unvisited_vertices[100];
	int unvisited_vertices_back;
	int unvisited_vertices_front;
}