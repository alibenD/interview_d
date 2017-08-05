/********************************************************************************* 
  *Copyright(C), Aliben
  *FileName:  figureScreen.h// FileName 
  *Author:  Aliben// Author Name
  *Version:  0.0.1// Version
  *Date:  2017.7.31// Finished Date
  *Description: Head file of figureScreen.cpp, which control the position of a cursor and clear screen 
                //与其他模块或函数的接口、输出值、取值范围、 
                //含义及参数间的控制、顺序、独立及依赖关系 
  *Others:  //其他内容说明 
  *Function List:  //主要函数列表，每条记录应包含函数名及功能简要说明 
     1.………… 
     2.………… 
  *History:  //修改历史记录列表，每条修改记录应包含修改日期、修改者及修改内容简介 
     1.Date: 
       Author: 
       Modification: 
     2.………… 
**********************************************************************************/ 

#ifndef __FIGURE_SCREEN_H_
#define __FIGURE_SCREEN_H_
#include<stdio.h>
#include<unistd.h>
#include<curses.h>
#include<string>

class screenFigure;
class info;

class screenFigure{
	public:
		void initScr();
		void refreshScr();
		void clearScr();
		void moveUp();
		void moveDown();
		void moveLeft();
		void moveRight();
		void moveToYX(int y, int x);
		void printString(std::string str);
		void printStringTest();
		void sleepScr(int second);
		void close();

	private:
		WINDOW *window;
};

class info{
	public:
		void readTotalMem();
		void readUsedMem();
		void readIdleMem();
		void readUsedCPU();

		void updatePositionStatusBar(int y, int x);

		int getPositionStatusBar();
		int getPositionStatusBarX();
		int getPositionStatusBarY();
		int getProgress();
	private:
		int totalMem;
		int usedMem;
		int idleMem;
		int usedCPU;
		
		int statusBarX, statusBarY;
		int total, current;	// the length of string, and position where the string being sorted
};
#endif //__FIGURE_SCREEN_H_

