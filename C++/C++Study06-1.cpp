#include <iostream>
using namespace std;

int main() {

    int num1 = 3;
	int num2 = -7;
	bool result1, result2;
		
	result1 = (num1 > 0) && (num1 < 5);
	result2 = (num2 < 0) || (num2 > 10);
			
	cout << "&& 연산자에 의한 결괏값은 " << result1 << "입니다." << endl;
	cout << "|| 연산자에 의한 결괏값은 " << result2 << "입니다." << endl;
	cout << " ! 연산자에 의한 결괏값은 " << !result2 << "입니다." << endl;
	return 0;
    
}