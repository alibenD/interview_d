#include <typeinfo>
#include <iostream>
#include <string>
 
/*
 * citation: http://blog.csdn.net/suxinpingtao51/article/details/8166617
 * citation: https://zhidao.baidu.com/question/621015879472525572.html by user "hky_bd2010"
 */


class someClass { };
 
int main(int argc, char* argv[]) {
    int a,aa;
	double b;
	float c;
	char d;
	std::string e,ee;
    someClass f;
    std::cout<<"a is of type: "<<typeid(a).name()<<std::endl; // Output 'a is of type int'
    std::cout<<"b is of type: "<<typeid(b).name()<<std::endl; // Output 'b is of type someClass'
    std::cout<<"c is of type: "<<typeid(c).name()<<std::endl; // Output 'a is of type int'
    std::cout<<"d is of type: "<<typeid(d).name()<<std::endl; // Output 'b is of type someClass'
    std::cout<<"e is of type: "<<typeid(e).name()<<std::endl; // Output 'a is of type int'
    std::cout<<"f is of type: "<<typeid(f).name()<<std::endl; // Output 'b is of type someClass'
	if(typeid(a).name() != typeid(b).name()){
		std::cout<< "Different" << std::endl;
	}
   	if (typeid(e).name() == typeid(ee).name()){
		std::cout<< "The same" << std::endl;
	}
    return 0;
}
