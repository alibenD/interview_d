/********************************************************************************* 
  *Copyright(C), Aliben
  *FileName:  statusBar.h// FileName 
  *Author:  Aliben// Author Name
  *Version:  0.0.1// Version
  *Date:  2017.7.31// Finished Date
  *Description: Head file of statusBar.cpp, which print a process/status bar in terminal 
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

#ifndef __STATUS_BAR_H_
#define __STATUS_BAR_H_

void getInfoCPU();
void getInfoMemory();
void getSystemUsedMemory();
void getProcessUsedMemory();
#endif //__STATUS_BAR_H_
