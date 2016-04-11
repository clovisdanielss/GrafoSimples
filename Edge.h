/*
 * Edge.h
 *
 *  Created on: 11 de abr de 2016
 *      Author: daniel
 */


#ifndef EDGE_H_
#define EDGE_H_
#import "Vertex.h"

class Edge {
private:
	int lineId;
	Vertex *in;
	Vertex *out;
public:
	Edge(Vertex& ,Vertex&, int);
	Vertex *getIn();
	Vertex *getOut();
	int getLineId();
	virtual ~Edge();
};

#endif /* EDGE_H_ */
