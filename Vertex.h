/*
 * Vertex.h
 *
 *  Created on: 11 de abr de 2016
 *      Author: daniel
 */

#ifndef VERTEX_H_
#define VERTEX_H_

class Vertex {
private:
	int vertexId;
public:
	Vertex(int);
	int getId();
	virtual ~Vertex();
};

#endif /* VERTEX_H_ */
