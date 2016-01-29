/*
 * ArrayNode.cpp
 *
 *  Created on: Jan 29, 2016
 *      Author: tgae6529
 */

#include "ArrayNode.h"
#include <iostream>

template <class Type>
ArrayNode<Type>::ArrayNode() : Node<Type>(){

	this->next = nullptr;


}

template <class Type>
ArrayNode<Type>::ArrayNode(Type value) : Node<Type>(value) {

	this->value = value;
	this->next = nullptr;
}


template <class Type>
ArrayNode<Type>::ArrayNode(Type value, ArrayNode * next) : Node<Type>(value) {

	this->value = value;
	this->next = next;
}


template <class Type>
ArrayNode<Type>::~ArrayNode() {
	// TODO Auto-generated destructor stub
}

template <class Type>
ArrayNode<Type> * ArrayNode<Type> :: getNext() {
	return this->next;
}
