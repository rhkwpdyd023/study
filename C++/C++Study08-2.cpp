#include <iostream>
using namespace std;

int main() {

    int i = 0, num = 5;
	
	while (i < num)
	{
		cout << "while 문이 현재 " << i + 1 << " 번째 반복 실행중입니다." << endl;
		i++; // 이 부분을 삭제하면 무한 루프에 빠지게 됨 
	}
	cout << "while 문이 종료된 후 변수 i의 값은 " << i << "입니다." << endl;
	return 0;
    
}