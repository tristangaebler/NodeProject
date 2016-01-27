/*
 * Node.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: tgae6529
 */

#include "Node.h"
#include <iostream>
//using namespace std;

template <class Type>
Node<Type>::Node() {
	// TODO Auto-generated constructor stub
	value = 0;
	pointers = nullptr;

}

template <class Type>
Node<Type>::Node(Type value) {
	// TODO Auto-generated constructor stub
	this -> value = value;
	pointers = nullptr;

}

template <class Type>
Node<Type>::~Node() {
	// TODO Auto-generated destructor stub
}

template <class Type>
Type Node<Type> :: getValue()
{
	return this -> value;
}

template <class Type>
Node<Type> * Node<Type> :: getPointers()
{
	return this -> pointers;
}

