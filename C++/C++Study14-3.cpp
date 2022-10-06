#include <iostream>
using namespace std;

int main() {

    string str1 = "C++ is ";
	string str2 = "Cool! and funny!";
	string str3;
	
	str3 = str1 + str2;		// 문자열 결합 연산	
	cout << str3 << endl;
	str1 += str2;			// 문자열 추가 연산 
	cout << str1;
	return 0;
    
}