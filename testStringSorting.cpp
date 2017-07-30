#include<iostream>
#include<string>

#include"stringSorting.h"
using namespace std;
int main(void){
	string strSelect, strBubble, strIn;
	cin >> strIn;
	strSelect = strIn;
	strBubble = strIn;
	stringSorting(strSelect);
	cout << "The result of selection: " ;
	cout << strSelect << endl;
	cout << "The result of bubble: ";
	stringSortingBubble(strBubble);
	cout << strBubble << endl;
	return 0;
}
