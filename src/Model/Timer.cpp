/*
 * Timer.cpp
 *
 *  Created on: Feb 16, 2016
 *      Author: tgae6529
 */

#include "Timer.h"
#include <iomanip>
using namespace std;

Timer::Timer() {
	// TODO Auto-generated constructor stub

	executionTime = 0;
}

Timer::~Timer() {
	// TODO Auto-generated destructor stub
}

void Timer::displayTimerInfo() {

}

void Timer::startTimer() {
	executionTime = clock();
}

void Timer::stopTimer() {
	executionTime = clock() - executionTime;
}

void Timer::resetTimer() {
	executionTime = 0;
}

long Timer::getExecutionTimeInMicroseconds() {
	return executionTime;
}


