#include <iostream>
using namespace std;

void Swap(int&, int&);

int main(){

    int num1 = 3, num2 = 7;
	cout << "변경 전 num1의 값은 " << num1 << "이며, num2의 값은 " << num2 << "입니다." << endl;
	Swap(num1, num2);
	cout << "변경 후 num1의 값은 " << num1 << "이며, num2의 값은 " << num2 << "입니다." << endl;
	return 0;

}

void Swap(int& x, int & y){

    int temp;
	
	temp = x;
	x = y;
	y = temp;
    
}