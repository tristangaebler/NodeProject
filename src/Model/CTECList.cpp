/*
 * CTECList.cpp
 *
 *  Created on: Feb 18, 2016
 *      Author: tgae6529
 */

#include "CTECList.h"
#include <assert.h>
#include <iostream>

using namespace std;

template<class Type>
CTECList<Type>::CTECList() {
	this->size = 0;
	this->Head = nullptr;
	this->end = nullptr;
}

template <class Type>
CTECList<Type>::~CTECList() {

}

template <class Type>
Type CTECList<Type>::get(int position) {

}

template <class Type>
void CTECList<Type>::add(const Type& value) {

}

template <class Type>
void CTECList<Type>::deletePos(int position) {

}

template <class Type>
int CTECList<Type>::getSize() {

}

template <class Type>
void CTECList<Type>::addToFront(const Type& value) {

}

template <class Type>
void CTECList<Type>::addToEnd(const Type& value) {

}

template <class Type>
void CTECList<Type>::addAtIndex(int index, const Type& value) {

}

template <class Type>
Type CTECList<Type>::getFront() {

}

template <class Type>
Type CTECList<Type>::getEnd() {

}

template <class Type>
Type CTECList<Type>::getFromIndex(int index, Type value) {

	assert(index < size && index <= 0); //Check if the index is reasonable

	ArrayNode<Type> * current = Head;
	for(int spot = 0; spot <= index; spot++) {

	}
}

template <class Type>
Type CTECList<Type>::removeFromFront() {

	//Create a pointer to what is after head
	ArrayNode<Type>* newHead = new ArrayNode<Type>();
	newHead = Head->getNext();
	//Delete what head is pointing to
	delete Head;
	//Set head to new head
	this->Head = newHead;

}

template <class Type>
Type CTECList<Type>::removeFromEnd() {

	//Loop over size
	//or
	//Loop until ->getNext() == nullptr=
}

template <class Type>
Type CTECList<Type>::removeFromIndex(int index) {

}

template <class Type>
Type CTECList<Type>::set(int position, const Type& value) {

	assert(position < size && position >= 0);

	ArrayNode<Type> * current = Head;
	for (int spot = 0; spot <= position; spot++) {
		if (spot != position) {
			current = current->getNext();
		} else {
			current->setValue(value);
		}
	}
}

template <class Type>
Type CTECList<Type>::get(int position) {

}










