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
	ArrayNode<Type> * deleteMe = Head;
	for (int index = 0; index < size; index++) {
		if (deleteMe->getNext() != nullptr) {
			Head = deleteMe->getNext();
			deleteMe->setNext(nullptr);
		}
		else {
			delete deleteMe->getNext();
			deleteMe = Head;
		}
	}
	delete Head;
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

	return this->size;

}

template <class Type>
void CTECList<Type>::addToFront(const Type& value) {

	ArrayNode<Type> * first, *newNode, *last;
	int count = 0;

}

template <class Type>
void CTECList<Type>::addToEnd(const Type& value) {

}

template <class Type>
void CTECList<Type>::addAtIndex(int index, const Type& value) {


}
/**
 * Calculates the size of the list by iterating over all the nodes
 */
template <class Type>
void CTECList<Type>::calculateSize() {

	assert(size >= 0);
	ArrayNode<Type> * counterPointer = Head;
	int count = 0;

	if(counterPointer == nullptr) {

		this->size = 0;
		return;
	}
	else {
		count++;
		while(counterPointer->getNext() != nullptr) {

			counterPointer = counterPointer->getNext();
			count++;

		}
		this->size = count;
	}



}

template <class Type>
Type CTECList<Type>::getFront() {

}

template <class Type>
Type CTECList<Type>::getEnd() {

}

template <class Type>
Type CTECList<Type>::getFromIndex() {

}


template <class Type>
Type CTECList<Type>::removeFromFront() {

	Type returnValue; //In case we need to use the value we are emoving

	assert(size > 0);
	//Create a pointer to what is after head
	ArrayNode<Type>* newHead = new ArrayNode<Type>();
	newHead = Head->getNext();
	//Get what was in the head node
	returnValue = Head->getValue();
	//Delete what head is pointing to
	delete Head;
	//Set head to new head
	this->Head = newHead;

	this->calculateSize();
	return returnValue;

}

template <class Type>
Type CTECList<Type>::removeFromEnd() {

	//Loop over size
	//or
	//Loop until ->getNext() == nullptr=
	//asert size > 0
	//size == 1
	assert(size > 0);
	Type valueToRemove;




	this->calculateSize();
	return valueToRemove;


}

template <class Type>
Type CTECList<Type>::removeFromIndex(int index) {

	Type returnValue;
	assert(size > 0 && index >= 0 && index > size);

	ArrayNode<Type> * previous, deleteMe, next;
	if(index == 0) {
		returnValue = removeFromFront();
	}
	else if(index == size-1) {
		returnValue = removeFromEnd();
	}
	else {
		for(int spot = 0; spot < index+1; spot++) {

		}

	}
	this->calculateSize();
	return returnValue;
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

	assert(position < size && position >= 0);

	ArrayNode<Type> * current = Head;
	for(int spot = 0; spot <= position; spot++) {
		if(spot != position) {
			current = current->getNext();
		} else {
			return current->getvalue();
		}
	}
}



