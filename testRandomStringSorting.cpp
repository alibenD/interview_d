/* FileName: testRandomStringSorting.cpp
 * Created Date: 2017.7.30
 * Author: Aliben(Kaiwen, Hu)
 * Description: Test for sorting a random string
 * Version: 0.0.1
 */

#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
#include"stringGenerator.h"
#include"stringSorting.h"

using namespace std;

int main(void){
	unsigned long long length = stringLengthSet();
	string str;
	srand((unsigned)time(NULL));
	stringGenerator(length, str);
	cout << "The string before sorting:\n" << str << endl << endl;
	stringSortingBubble(str);
	cout << "The string after sorting:\n" << str << endl;
	return 0;
}
