/*
 * CTECList.h
 *
 *  	Date:	March 14, 2016
 *      Author: Tristan Gaebler
 *      version: 0.7
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

#include "ArrayNode.h"
#include <assert.h>

template <class Type>
class CTECList
{
private:
	int size;
	ArrayNode<Type> * head;
	ArrayNode<Type> * end;
	void calculateSize();
public:
	CTECList();
	virtual ~CTECList();
	int getSize();
	Type getFront();
	Type getEnd();
	Type getAtIndex(int index);
	void set(int index, const Type& value);
	void addToFront(const Type& value);
	void addToEnd(const Type& value);
	void addAtIndex(int index, const Type& value);
	Type removeFront();
	Type removeEnd();
	Type removeAtIndex(int index);

};

#endif /* MODEL_CTECLIST_H_ */
