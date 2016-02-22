/*
 * CTECList.h
 *
 *  Created on: Feb 18, 2016
 *      Author: tgae6529
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

#include "ArrayNode.h"

template <class Type>
class CTECList {
private:
	int size();
	ArrayNode<Type> * Head;
	ArrayNode<Type> * end;
public:

	CTECList();
	virtual ~CTECList();
	int getSize();
	void addToFront(const Type& value);
	void addToEnd(const Type& value);
	void addAtIndex(int index, const Type& valuel);
	Type getFront();
	Type getEnd();
	Type getFromIndex();
	Type removeFromFront();
	Type removeFromEnd();
	Type removeFromIndex(int index);
	Type set(int position, const Type& value);
	Type get(int position);
	int size();
	void add(const Type& value);
	void deletePos(int position); //Same thing as delete, but delete is a keyword so I can't use that for a method name

};

#endif /* MODEL_CTECLIST_H_ */
