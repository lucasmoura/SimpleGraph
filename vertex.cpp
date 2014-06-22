#include "vertex.h"

const int Vertex::EDGE_NOT_FOUND = -1;

Vertex::Vertex(int _vertexNumber)
{
	vertexNumber = _vertexNumber;
	numEdges = 0;
}

int
Vertex::getEdgeCost(int vertexNumber)
{
	std::map<int, int>::iterator it;
	it = edge.find(vertexNumber);

	if(it == edge.end())
		return EDGE_NOT_FOUND;
	
	return it->second;
}

int
Vertex::getNumEdge() const
{
	return numEdges;
}

int
Vertex::getNumber() const
{
	return vertexNumber;
}

