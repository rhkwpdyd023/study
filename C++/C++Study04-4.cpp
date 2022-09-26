#include <iostream>
using namespace std;

int main() {

    int x = 10;
    int y = x-- + 5 + --x;

	cout << "변수 x의 값은 " << x<< "이고, 변수 y의 값은 " << y << "로 변했습니다.";
	return 0;
    
}