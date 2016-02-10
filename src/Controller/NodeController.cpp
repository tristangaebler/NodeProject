/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: tgae6529
 */

#include "NodeController.h"
/*
 * This is the Constructor of the NodeController class. We are giving the CTECArray 5 indexes or spots.
 */
NodeController::NodeController() {

	myIntArray = new CTECArray<int>(5);
}
/*
 * This is the destructor for the NodeController class. Currently nothing is happening in it. I do not fully understand the destructor.
 */
NodeController::~NodeController() {
	// TODO Auto-generated destructor stub
}
/*
 * This is the start method that is void. We are giving the CTECArray values. Then we print the values out using cout <<.
 */
void NodeController :: start() {
	for(int index = 0; index < myIntArray->getSize(); index++) {
		myIntArray->set(index, (23 * index));

	}
cout << "somehting" << endl;
	for(int index = 0; index < myIntArray->getSize(); index++) {
		cout << "These are some integers that " << index << "contain " << myIntArray->get(index) << endl;
	}
}

