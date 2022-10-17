#include <iostream>
using namespace std;

void Local();
void StaticVar();

int main(){

    for (int i = 0; i < 3; i++){
		Local();
		StaticVar();
	}
	return 0;

}

void Local(){
	int count = 1;
	cout << "Local() 함수가 " << count << " 번째 호출되었습니다." << endl;
	count++;
}

void StaticVar(){
	static int static_count = 1; // 연결을 가지지 않는 정적 변수
	cout << "StaticVar() 함수가 " << static_count << " 번째 호출되었습니다." << endl;
	static_count++;
}