#include <iostream>
using namespace std;

int main() {

    int num1 = 8;
	int num2 = 8;
	int result1, result2;
		
	result1 = --num1 + 5;
	result2 = num2-- + 5;
	
	cout << "전위 감소 연산자에 의한 결괏값은 " << result1 << "이고, 변수의 값은 " << num1 << "로 변했습니다.";
	cout << endl;
	cout << "후위 감소 연산자에 의한 결괏값은 " << result2 << "이고, 변수의 값은 " << num2 << "로 변했습니다.";
	return 0;

}