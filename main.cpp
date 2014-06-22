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
	graph->addVertex(6);
	graph->addVertex(7);

	cout<<graph<<endl;

	graph->addEdge(1,2,5);
	graph->addEdge(1,7,5);
	graph->addEdge(2,3,5);
	graph->addEdge(2,6,5);
	graph->addEdge(3,4,5);
	graph->addEdge(3,5,4);

	cout<<graph<<endl;

	cout<<"\nSearching for a vertex..."<<endl;
	int result = graph->breadthFirstSearch(1,5);

	if (!result)
		cout<<"Vertex found with success"<<endl;
	else
		cout<<"Vertex not found"<<endl;

	cout<<"\nSearching for a vertex..."<<endl;
	result = graph->depthFirstSearch(1,7);

	cout<<endl;

	if (!result)
		cout<<"Vertex found with success"<<endl;
	else
		cout<<"Vertex not found"<<endl;

	delete graph;

	return 0;
}

