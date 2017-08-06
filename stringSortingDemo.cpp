/* FileName: stringSortingDemo.cpp
 * Created Date: 2017.8.5
 * Author: Aliben, Hu
 * Version: 0.0.1
 * Description: Demo for string sorting including char-based UI and I/O operation
 */

#include"stringGenerator.h"
#include"stringSorting.h"
#include"timer.h"
#include"figureScreen.h"
#include"statusBar.h"
#include"io.h"
#include"color.h"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	string randomStr, readStr;
	system("clear");

	unsigned long long length = stringLengthSet();	// Set length via user input
	srand((unsigned)time(NULL));	// Set random seed
	stringGenerator(length, randomStr);
	cout << "The size of random string: " << sizeof(randomStr) << "Byte" << endl;
	writeTxt("./randomString.txt", randomStr);
//	cout << YELLOW << "Write randomStr into " << "./randomString.txt - DONE!" << RESET << endl;
	readTxt("./randomString.txt", readStr);


	string sortedString = readStr;
	cout << YELLOW << "Sorting begins" << endl;
	timerMs *timer = new timerMs();
	timer->start();
	stringSorting(sortedString);
	timer->stop();
	cout << "Sorting down, total time: " << timer->transInterval2ms() << RESET << endl;
//	cout << "The sorted string:" << endl << RED << sortedString << RESET << endl;
	writeTxt("./sortedString.txt", sortedString);

//	ofstream outfile;
//	outfile.open("./randomString.txt");
//	outfile << randomStr << endl;
//	outfile.close();
	
//	readTxt("./randomString.txt", readStr);
//	cout << "The read result: " << readStr << endl;

//	screenFigure *scrFig = new screenFigure();	// Figure using the framework of curses
//	scrFig->initScr();
	return 0;
}
