#include <iostream>
using namespace std;

int main() {

    int i;
	int num = 5;
	
	for (i = 0; i < num; i++)
	{
		cout << "for 문이 현재 " << i + 1 << " 번째 반복 수행중입니다." << endl;
	}
	cout << "for 문이 종료된 후 변수 i의 값은 " << i << "입니다." << endl;
	return 0;
    
}