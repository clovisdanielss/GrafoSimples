/*
 * Edge.cpp
 *
 *  Created on: 11 de abr de 2016
 *      Author: daniel
 */

#include "Edge.h"

Edge::Edge(Vertex &in, Vertex &out, int line) {
	// TODO Auto-generated constructor stub
	this->in = &in;
	this->out = &out;
	this->lineId = line;
}

Vertex *Edge::getIn(){
	return in;
}

Vertex *Edge::getOut(){
	return out;
}

int Edge::getLineId(){
	return lineId;
}

Edge::~Edge() {
	// TODO Auto-generated destructor stub
}

