#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "C++ programming";
	
	cout << "문자열 str의 length는 " << str.length() << "입니다." << endl;
	cout << "문자열 str의 capacity는 " << str.capacity() << "입니다." << endl;
	cout << "문자열 str의 max_size는 " << str.max_size() << "입니다.";
	return 0;
    
}