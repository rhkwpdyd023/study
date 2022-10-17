#include <iostream>
using namespace std;

static int var; // 내부 연결을 가지는 정적 변수

void Local();

int main(){

    cout << "변수 var의 초기값은 " << var <<"입니다." << endl;
	int i = 5;
	int var = 10; // 자동 변수 선언 
	cout << "main() 함수 내의 자동 변수 var의 값은 " << var <<"입니다." << endl;
	
    if (i < 10){
		Local();
		cout << "현재 변수 var의 값은 " << var << "입니다." << endl; // 자동 변수에 접근 
	}
	
	cout << "더 이상 main() 함수에서는 정적 변수 var에 접근할 수가 없습니다." << endl;
	return 0;

}

void Local(){
    var = 20; // 정적 변수의 값 변경
	cout << "Local() 함수 내에서 접근한 정적 변수 var의 값은 " << var << "입니다." << endl;
}