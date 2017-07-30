/* FileName: timer.cpp
 * Created Date: 2017.7.30
 * Author: Kaiwen Hu
 * Description: Definition of timer
 * Version: 0.0.1
 */

#include"timer.h"

void timer::start(){
	clockBegin = clock();
}

void timer::stop(){
	clockEnd = clock();
	interval = clockEnd - clockBegin;
}

clock_t timer::getInterval(){
	return interval;
}
