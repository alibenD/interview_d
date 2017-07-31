/* FileName: testTimer.cpp
 * Created Date: 2017.7.30
 * Author: Aliben
 * Description: A test of timer class
 * Version: 0.0.1
 */

#include<iostream>
#include"timer.h"

using namespace std;

int main(void){
	timerMs *t = new timerMs();
	int limit, count=0;
	cout << "Please key in a number for running times: ";
	cin >> limit;
	// Test for ms timer
	t->start();
	while(count != limit) ++count;
	t->stop();
	cout << "The total time: " << t->getInterval() << " ms" << endl;
	delete t;

//	// Test for us timer
//	timerNs *t2 = new timerNs();
//	t2->start();
//	while(count != limit) ++count;
//	t2->stop();
//	cout << "The total time: " << t2->getInterval() << " ns" << endl;
//	cout << "The total time: " << t2->transInterval2ms() << " ms" << endl;
//	return 0;
}
