#include <iostream>
#include "graph.h"

using namespace std;

int main()
{
	Graph *graph = new Graph();
	graph->addVertex(1);
	graph->addVertex(2);
	graph->addVertex(3);
	graph->addVertex(4);
	graph->addVertex(5);

	cout<<graph<<endl;

	graph->addEdge(1,2,5);
	graph->addEdge(2,1,5);
	graph->addEdge(2,3,4);
	graph->addEdge(3,4,2);
	graph->addEdge(4,5,1);

	cout<<graph<<endl;

	cout<<"\nSearching for a vertex..."<<endl;
	int result = graph->breadthFirstSearch(3,1);

	if (!result)
		cout<<"Vertex found with success"<<endl;
	else
		cout<<"Vertex not found"<<endl;

	delete graph;

	return 0;
}

