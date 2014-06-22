#ifndef VERTEX_H
#define VERTEX_H

#include <map>

class Vertex
{
	public:
	
		static const int EDGE_NOT_FOUND;

		Vertex(int);
		int getEdgeCost(int);
		int getNumEdge() const;
		int getNumber() const;
		void incEdgeNum();
		std::map<int, int> edge;
		
	private:

		int numEdges;
		int vertexNumber;
};

#endif
