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
	//this->intNode.setValue(5);
	//this->stringArrayNode.setValue("words are fun");

	myStringArray = new CTECArray<string>(5); //Private CTEC Array made up of Strings


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
	//cout << intNode.getValue() << endl;
	//cout << stringArrayNode.getValue() << endl;

	string first = "first";
	string second = "second";
	string third = "third";
	string fourth = "fourth";
	string fifth = "fifth";

	myStringArray -> set(0, first);
	cout << myStringArray->get(0) << endl;
	myStringArray -> set(1, second);
	myStringArray -> set(2, third);
	myStringArray -> set(3, fourth);
	myStringArray -> set(4, fifth);

	//Prints out the index 5 times.
	for(int index = 0; index < myStringArray->getSize(); index++) {
		cout << "The contents at index " << index << " are: " << myStringArray->get(index) << endl;
	}
}

