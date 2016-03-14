/*
 * TestList.cpp
 *
 *  Created on: Mar 14, 2016
 *      Author: tgae6529
 */

#include "TestList.h"

TestList::TestList() {


}

TestList::~TestList() {

}

void NodeController::testLists()
{
	numbers->addToFront(3);
	numbers->addToEnd(8);

	cout << "End should be 8 and is: " << numbers->getEnd() << endl;
	cout << "Head should be 3 and is:" << numbers->getFront() << endl;
}

