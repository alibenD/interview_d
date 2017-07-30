/* FileName: stringSorting.cpp
 * Created Date: 2017.7.28
 * Author: Kaiwen Hu
 * Description: Definition of sorting functions
 * Version: 0.0.1
 */

#include<string>
#include<iostream>
#include"stringSorting.h"

using namespace std;

int stringSorting(string &str){
	string tmpStr(str);
	string::iterator outsideIt;
	string::iterator insideIt;
	auto tmpChar = tmpStr[0];
	for(outsideIt = tmpStr.begin(); outsideIt != tmpStr.end(); ++outsideIt){
		for(insideIt = outsideIt+1; insideIt != tmpStr.end(); ++insideIt){
			if(*insideIt < *outsideIt){
				tmpChar = *outsideIt;
				*outsideIt = *insideIt;
				*insideIt = tmpChar;
			}
		}
	}
	str = tmpStr;
	return 0;
}


int stringSortingBubble(string &str){
	string::iterator outsideIt;
	string::iterator insideIt;
	auto tmpChar = str[0];

	for(outsideIt = str.begin(); outsideIt+1 != str.end(); ++outsideIt){
		for(insideIt = str.end()-1; insideIt != outsideIt; --insideIt){
			if(*insideIt < *(insideIt-1)){
				tmpChar = *insideIt;
				*insideIt = *(insideIt-1);
				*(insideIt-1) = tmpChar;
			}
		}
	}
	return 0;
}
