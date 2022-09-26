#include <iostream>
using namespace std;

int main() {

    int num1 = 8;
	int num2 = 8;
	int num3 = 8;
	
	num1 = num1 + 5;
	num2 += 5;
	num3 =+ 5;
	
	cout << "-  연산자에 의한 결괏값은 " << num1 << "입니다." << endl;
	cout << "+= 연산자에 의한 결괏값은 " << num2 << "입니다." << endl;
	cout << "=+ 연산자에 의한 결괏값은 " << num3 << "입니다.";
	return 0;
    
}