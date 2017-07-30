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
	timer *t = new timer();
	int limit;
	cout << "Please key in a number for running times: ";
	cin >> limit;
	t->start();
	for(int i=0;i<limit;++i);
	t->stop();
	cout << "The total time: " << t->getInterval() << " ms" << endl;
	return 0;
}
