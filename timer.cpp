/* FileName: timer.cpp
 * Created Date: 2017.7.30
 * Author: Kaiwen Hu
 * Description: Definition of timer
 * Version: 0.0.1
 */

#include"timer.h"


void timerMs::start(){
	clockBegin = clock();
}

void timerMs::stop(){
	clockEnd = clock();
	timeInterval = clockEnd - clockBegin;
}

clock_t timerMs::getInterval(){
	return timerInterval;
}

double timerMs::transInterval2ms(){
	return double(timeInterval)/CLOCKS_PER_SEC;
}

// The definitions of nano second timer
//void timerNs::start(){
//	clock_gettime(CLOCK_MONOTONIC, &timeBegin);
//}
//
//void timerNs::stop(){
//	clock_gettime(CLOCK_MONOTONIC, &timeEnd);
//	timeInterval = (timeEnd.tv_sec - timeBegin.tv_sec)*1000000000 + timeEnd.tv_nsec - timeBegin.tv_nsec;
//}
//
//unsigned long long timerNs::getInterval(){
//	return timeInterval;
//}
//unsigned long long timerNs::transInterval2ms(){
//	return timeInterval/1000000;
//}
