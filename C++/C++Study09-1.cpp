#include <iostream>
using namespace std;

int main() {

    int num = 3;
	
	for (int i = 0; i < num; i++) // 변수 i는 이 for 문이 종료되면 같이 소멸됨. 
	{
		cout << "첫 번째 for 문이 " << i + 1 << " 번째 반복 수행중입니다." << endl;
	}
	cout << endl;
	
	for (int i = 0; i < num; i++) // 따라서 변수 i를 다시 선언해도 괜찮음.
	{
		cout << "두 번째 for 문이 " << i + 1 << " 번째 반복 수행중입니다." << endl;
	}
	return 0;
    
}