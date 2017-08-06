/* FileName: expensiveFunc.cpp
 * Created Date: 2017.8.6
 * Author: Aliben
 * Version: 0.0.1
 * Description: Definition of expensiveFunc
 */

#include"expensiveFunc.h"

void expensiveFunc(int nms){
	time_t begin, end, interval;
	begin = clock();
	do{
		end = clock();
		interval = (end - begin);
	} while((double)interval/CLOCKS_PER_SEC < (double)nms);
}
