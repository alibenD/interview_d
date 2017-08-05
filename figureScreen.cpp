/* FileName: figureScreen.cpp
 * Created Date: 2017.7.31
 * Author: Aliben
 * Version: 0.0.1
 * Date: 2017.7.31
 * Description: Definition of functions regarding controlling screen
 */

#include"figureScreen.h"
#include<iostream>

void screenFigure::initScr(){
	window = initscr();
}

void screenFigure::refreshScr(){
	refresh();
}

void screenFigure::clearScr(){
	clear();
}

void screenFigure::moveToYX(int y, int x){
	move(y, x);
}

void screenFigure::printString(std::string str){
	const char *pStr = str.c_str();
	printw("%s", pStr);
}

void screenFigure::printStringTest(){
	printw("%s", "test");
}

void screenFigure::sleepScr(int second){
	sleep(second);
}

void screenFigure::close(){
	endwin();
}

// Definition of class info

void info::updatePositionStatusBar(int y, int x){
	statusBarX = x;
	statusBarY = y;
}

int info::getPositionStatusBarX(){
	return statusBarX;
}

int info::getPositionStatusBarY(){
	return statusBarY;
}

