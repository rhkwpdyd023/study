#include <iostream>
#include <string>
using namespace std;

struct  Name{
    /* data */
    string first;
	string last;
};

struct Friends{
    /* data */
    Name first_name;
	string address;
	string job;
};

int main() {

    Friends hong = {
		{ "길동", "홍" },
		"서울시 강남구 역삼동",
		"학생"
	};
	
	cout << hong.address << endl << endl;
	cout << hong.first_name.last << hong.first_name.first << "에게," << endl;
	cout << "그동안 잘 지냈니? 아직도 " << hong.job << "이니?" << endl;
	cout << "다음에 꼭 한번 보자." << endl << "잘 지내.";
	return 0;
    
}