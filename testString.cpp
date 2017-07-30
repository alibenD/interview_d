#include<string>
#include<iostream>

using namespace std;

int main(){
	string str, test;
	test = getline(cin, str);
	cout << "str is: " << str << endl;
	cout << "test is:" << test << endl;
	cout << "the char number: " << str.size() << endl;
	return 0;
}
