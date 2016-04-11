//============================================================================
// Name        : ProjetoBolsa.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Edge.h"
#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Vertex *v1 = new Vertex(1);
	Vertex *v2 = new Vertex(2);

	Edge *e = new Edge(*v1,*v2, 1);

	cout << e->getIn()->getId() << " Linked to " << e->getOut()->getId() << " on Line "<< e->getLineId();

	return 0;
}
