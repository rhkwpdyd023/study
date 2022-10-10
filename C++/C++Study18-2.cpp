#include <iostream>
using namespace std;

struct TypeSize{
    /* data */
    char a;
	int b;
	double c;
};

int main() {

    cout << "구조체 TypeSize의 각 멤버의 크기는 다음과 같습니다." << endl;
	cout << sizeof(char) << ", " << sizeof(int) << ", " << sizeof(double) << endl << endl;
	
	cout << "구조체 TypeSize의 크기는 다음과 같습니다." << endl;
	cout << sizeof(TypeSize);
	return 0;
    
}