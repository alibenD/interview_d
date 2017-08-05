/* FileName: testFigureScreen.cpp
 * Created Date: 2017.7.31
 * Author: Aliben
 * Version: 0.0.1
 * Description: A test for figureScreen module
 */

#include<iostream>
#include<sstream>
#include"figureScreen.h"

using namespace std;
int main(){
	string str = "Hello Aliben";
	string tStr1 = "Total: ";
	double tDou = 2.78;
	int tInt = 222;
	stringstream ss;
	screenFigure *scrFig = new screenFigure();
	scrFig->initScr();
//	scrFig->moveToYX(2,1);
//	scrFig->printString("Hello Dorabot.");
//
//	scrFig->moveToYX(5,1);
//	scrFig->printString("Progress Bar:");
//	
//	scrFig->moveToYX(6,1);
//	tStr1 = tStr1 + to_string(tInt) + ", current: " + to_string(tDou);
//	scrFig->printString(tStr1);
//	ss << tStr1 << tDou << tInt << endl;
//	ss >> tStr1;	
//	scrFig->printString(tStr1);
	scrFig->moveToYX(2,1);
	scrFig->printString("********************************************************");
	scrFig->moveToYX(3,1);
	scrFig->printString("* Program Name: String Sorting                         *");
	scrFig->moveToYX(4,1);
	scrFig->printString("* Author      : Aliben, Hu                             *");
	scrFig->moveToYX(5,1);
	scrFig->printString("* Features    :                                        *");
	scrFig->moveToYX(6,1);
	scrFig->printString("* 1. Default char set(Unicode) includes A-Z, a-z, 0-9. *");
	scrFig->moveToYX(7,1);
	scrFig->printString("*    Unicode                                           *");
	scrFig->moveToYX(8,1);
	scrFig->printString("* 2. Output a random string into a file.               *");
	scrFig->moveToYX(9,1);
	scrFig->printString("********************************************************");

	scrFig->moveToYX(11,1);
	scrFig->printString("Total: User-specified, current: Sorting Position");
	scrFig->refreshScr();
	scrFig->sleepScr(10);
	scrFig->close();
	return 0;
}
