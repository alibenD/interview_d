/* FileName: io.cpp
 * Created Date: 2017.8.5
 * Author: Aliben, Hu
 * Version: 0.0.1
 * Description: Definition of functions for basic I/O
 */

#include"io.h"
#include"color.h"

void writeTxt(std::string PATH, std::string &str){
	std::ofstream outfile;
	outfile.open(PATH);
	if(!outfile.is_open()){
		std::cout << "Error open file: " << PATH << std::endl;
		exit(1);
	}	
	outfile << str << std::endl;
	outfile.close();
}

void readTxt(std::string PATH, std::string &str){
	std::ifstream infile;
	infile.open(PATH.data());	
	if(!infile.is_open()){
		std::cout << "Error open file: " << PATH << std::endl;
		exit(1);
	}

	std::string tStr;
	while(getline(infile,tStr)){
		str+=tStr;
//		std::cout << tStr << std::endl;
	}
	std::cout << "The file content from " << "'" << PATH << "'"<< std::endl << BLUE << str << RESET << std::endl;
}
