/********************************************************************************* 
  *Copyright(C), Aliben
  *FileName: timer.h 
  *Author: Aliben 
  *Version:  0.0.1
  *Date: 2017.7.30 
  *Description: Declaration of timer, head file of timer.cpp 
                
               
  *Others: 
  *Function List: 
     1.void start()
     2.void stop()
	 3.clock_t getInterval()
  *History: 
     1.Date: 2017.7.30
       Author: Aliben
       Modification: Create a timer class 
**********************************************************************************/ 

#ifndef __TIMER_H_
#define __TIMER_H_
#include<time.h>
class timerMs;
class timerUs;

class timerMs{
	public:
		void start();
		void stop();
		clock_t getInterval();
		double transInterval2ms();
	private:
		clock_t clockBegin, clockEnd, timeInterval;
};

// Nano second timer exists some trouble
//class timerNs{
//	public:
//		void start();
//		void stop();
//		unsigned long long getInterval();	
//		unsigned long long transInterval2ms();
//	private:
//		timespec timeBegin, timeEnd;
//		unsigned long long timeInterval;
//};
#endif // __TIMER_H_
