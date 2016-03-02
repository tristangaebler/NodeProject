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

	assert(value != nullptr);

	insert(value);

}

template <class Type>
void CTECList<Type>::insert(const Type& newItem) {

	ArrayNode<Type> *current, *trailCurrent, *newNode;
	ArrayNode<Type> * first, *newNode, *last;

	bool found;
	int count = 0;

	newNode = new ArrayNode<Type>;
	newNode->info = newItem;
	newNode->link = nullptr;

	if(first == nullptr)
	{
		first = newNode;
		last = newNode;
		count++;
	}
	else
	{
		current = first;
		found = false;

		while(current != nullptr && !found)
		{
			if(current->info >= newItem)
			{
				found = true;
			}
			else
			{
				trailCurrent = current;
				current = current->link;
			}
		}
		if(current == first)
		{
			newNode->link = first;
			first = newNode;
			count++;
		}
		else
		{
			trailCurrent->link = newNode;
			newNode->link = current;

			if(current == nullptr)
			{
				last = newNode;
			}

			count++;
		}
	}

}

template <class Type>
void CTECList<Type>::addToEnd(const Type& value) {

	assert(value != nullptr);

	insert(value);

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

	assert(Head != nullptr);

	return this->Head;
}

template <class Type>
Type CTECList<Type>::getEnd() {
	assert(end != nullptr);

	return this->end;
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
	//grab the value fromt hte last node
	//set the next to last node to point to nullptr
	//set the next to the last node as end
	//delete the old last node
	//Before return the variable call calcuklatezise()
	//return value
	assert(size > 0);
	Type valueToRemove;
	if(size == 1) {
		valueToRemove = removeFromFront();
		end = nullptr;
		Head = nullptr;
		calculateSize();

		return valueToRemove;
	} else {
		ArrayNode<Type> * current = Head;
		for(int spot = 0; spot < size-1; spot++) {
			current = current->getNext();
		}

		valueToRemove = current->getNext()->getValue();
		end = current;
		delete current->getNext();

		this->calculateSize();

		return valueToRemove;
	}

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



