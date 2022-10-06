#include <iostream>
using namespace std;

int main() {

    string dog;
	cout << "현재 dog 변수의 길이는 " << dog.length() << "입니다." << endl;

	dog = "Navi";
	cout << dog << "! 정말 이쁜 이름이네요!" << endl;
	
	cout << "현재 dog 변수의 길이는 " << dog.length() << "입니다." << endl;
	cout << "강아지 이름의 첫 글자는 바로 " << dog[0] << "입니다.";
	return 0;
    
}