/* FileName: io.h
 * Created Date: 2017.8.5
 * Author: Aliben, Hu
 * Version: 0.0.1
 * Description: Functions for basic I/O
 */

#ifndef __IO_H_
#define __IO_H_
#include<fstream>
#include<string>
#include<iostream>

void writeTxt(std::string PATH, std::string &str);
void readTxt(std::string PATH, std::string &str);

#endif
