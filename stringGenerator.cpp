#include <iostream>
#include "stringGenerator.h"
#include "color.h"
#include <random>

using namespace std;

unsigned long long stringLengthSet(void){
 	unsigned long long strLength;
	cout << "Please key an integer as length of a random string(Max:" << ULLONG_MAX << "): "; 
	cin >> strLength;
	if(advanceLengthBoundary(strLength, ULLONG_MAX)){
		cout << "The input exceeds the boundary, and the length is set with the boundary."<< endl;
	}
	cin.clear();	// Clean the buff of istream;
	cin.sync();

	while(strLength == 0){
		cout << "The input is invalid, please key an available integer." << endl;
		cout << "Key a length again: ";
		cin.clear();	// Clean the buff of istream;
		cin.ignore(1024,'\n');
		cin >> strLength;
	}
	cout << "The length of a random string is " << strLength << endl;
	return strLength;
}

bool advanceLengthBoundary(unsigned long long length, unsigned long long maxLength){
	bool result = length >= maxLength? true: false;
//	cout << length << " "<< endl << maxLength << endl;
	return result;
}

int stringGenerator(unsigned long long stringLength, string &str){
	cout << "The string length: " << stringLength << endl;
	unsigned char tmp;
	for(unsigned long long cursor=0; cursor != stringLength; ++cursor){
		tmp =  (unsigned char)(rand()%94 + 32);
		str += tmp;
//		cout << (int)tmp << " ";
//		str += (unsigned char)(rand()%107 + 20);
//		cout << tmp << endl;  // Display generated randomly characters one by one
	}
	cout << "The generated random string: " << endl << BLUE <<  str << RESET << endl << endl;
	return 0;
}

