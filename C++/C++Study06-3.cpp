#include <iostream>
using namespace std;

int main() {

    int num1 = 11;
	int num2 = 10;
	int result;
	
	result = (num1 < num2) ? num1 : num2;
	
	cout << "둘 중에 더 작은수는 " << result << "입니다.";
	return 0;
    
}