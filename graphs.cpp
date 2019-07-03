//Ronuk Ray Period 2
// Graph Lab Part 1

#include <iostream>
#include <array>
#include <vector>
#include <string>

using namespace std;

struct Graph {
	int vertices;
	int matrix[20][20];
	
};

struct Edge {
	int vertex1;
	int vertex2;
};

void fill(Graph &graph) {
	for(int i = 0; i < graph.vertices; i++) {
		for(int j = 0; j < graph.vertices; j++) {
			graph.matrix[i][j] = 0;
		}
		graph.matrix[i][i] = 1;
	}
}

void add_edge(Graph &graph, int vertex1, int vertex2) {
	graph.matrix[vertex1][vertex2] = 1;
	graph.matrix[vertex2][vertex1] = 1;
}

void display(Graph g) {
	for(int i = 0; i < g.vertices; i++) {
		for(int j = 0; j < g.vertices; j++) {
			cout << g.matrix[i][j] << " ";
		}
		cout << endl;
	}
}

Graph create_p274_1() {
	Graph g1;
	g1.vertices = 7;
	fill(g1);
	add_edge(g1, 0, 1);
	add_edge(g1, 1, 2);
	add_edge(g1, 1, 3);
	add_edge(g1, 1, 4);
	add_edge(g1, 1, 5);
	add_edge(g1, 2, 3);
	add_edge(g1, 4, 5);
	add_edge(g1, 5, 6);
	return g1;
}

Graph create_p300_1() {
	Graph g1;
	g1.vertices = 5;
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			g1.matrix[i][j] = 1;
		}
	}
	g1.matrix[1][3] = 0;
	g1.matrix[1][4] = 0;
	g1.matrix[3][1] = 0;
	g1.matrix[4][1] = 0;
	g1.matrix[4][3] = 0;
	return g1;
}

Graph create_p300_3() {
	Graph g;
	g.vertices = 5;
	fill(g);
	add_edge(g, 0, 1);
	add_edge(g, 2, 3);
	add_edge(g, 2, 4);
	add_edge(g, 3, 4);
	return g;
}

Graph create_p307_2() {
	Graph g;
	g.vertices = 6;
	fill(g);
	add_edge(g, 0, 1);
	add_edge(g, 0, 4);
	add_edge(g, 0, 5);
	add_edge(g, 1, 4);
	add_edge(g, 5, 3);
	add_edge(g, 3, 4);
	add_edge(g, 3, 2);
	add_edge(g, 2, 1);
	return g;
}
vector<Edge> edge_list(Graph graph) {
	vector<Edge> edges;
	for(int i = 0; i < graph.vertices; i++) {
		for(int j = i; j < graph.vertices; j++) {
			if(i != j && graph.matrix[i][j] == 1) {
				Edge e;
				e.vertex1 = i;
				e.vertex2 = j;
				edges.push_back(e);
			}
		}
	}
	return edges;
}

void print(vector<Edge> edges) {
	for(int i = 0; i < edges.size(); i++) {
		cout << edges[i].vertex1 << "-" << edges[i].vertex2 << endl;
	}
}

void calculate_incidence_matrix(Graph g) {
	vector<Edge> edges = edge_list(g);
	int incidence_matrix[g.vertices][edges.size()];
	
	//fill with zeroes
	for(int i = 0; i < g.vertices; i++) {
		for(int j = 0; j < edges.size(); j++) {
			incidence_matrix[i][j] =  0;
		}
	}
	
	//populate
	for(int i = 0; i < edges.size(); i++) {
		Edge e = edges[i];
		incidence_matrix[e.vertex1][i] = 1;
		incidence_matrix[e.vertex2][i] = 1;
	}
	
	//print out
	for(int i = 0; i < g.vertices; i++) {
		for(int j = 0; j < edges.size(); j++) {
			cout << incidence_matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void printAll(Graph g, string name) {
	cout << name << ":" << endl;
	cout << "Adjacency matrix" << endl;
	display(g);
	cout << "Edge list" << endl;
	print(edge_list(g));
	cout << "Incidence Matrix" << endl;
	calculate_incidence_matrix(g);
	cout << endl << endl;
}

// int main() {
	// printAll(create_p274_1(), "p274 Fig.6.2.1");
	// printAll(create_p300_1(), "p300 #1");
	// printAll(create_p300_3(), "p300 #3");
	// printAll(create_p307_2(), "p307 Fig.6.7.2");
// }