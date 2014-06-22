#ifndef GRAPH_H
#define GRAPH_H

#include <map>
#include <ostream>
#include "vertex.h"

class Graph
{
	friend std::ostream& operator<<(std::ostream& os, Graph* graph);

	public:

		static const int VERTEX_ALREADY_IN_GRAPH;
		static const int VERTEX_INSERTED_ON_GRAPH;
		static const int VERTEX_NOT_FOUND;
		static const int EDGE_INSERTED_ON_GRAPH;
		static const int VERTEX_FOUND;

		Graph();
		~Graph();

		int getNumVertex() const;
		Vertex* getVertex(int);
		int addVertex(int);
		int addEdge(int, int, int);
		int breadthFirstSearch(int, int);

	private:

		std::map<int, Vertex*> vertexMap;
		int numVertex;

};	

#endif
