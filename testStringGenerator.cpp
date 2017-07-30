#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
#include"stringGenerator.h"
using namespace std;

int main(void){
	unsigned long long length = stringLengthSet();
	string str;
	srand((unsigned)time(NULL));	// Set a seed with system time
//	cout << "In main, length is " << length << endl;
	stringGenerator(length, str);
	cout << "The string:" << str << " END"<< endl;
	cout << "The length of the string:" << str.size() << endl;
	return 0;
}
