#include <iostream>
using namespace std;

int main() {

    cout << "       char형 데이터에 할당되는 메모리의 크기는  " << sizeof(char) << " 바이트입니다." << endl;
	cout << "      short형 데이터에 할당되는 메모리의 크기는  " << sizeof(short) << " 바이트입니다." << endl;
	cout << "        int형 데이터에 할당되는 메모리의 크기는  " << sizeof(int) << " 바이트입니다." << endl;
	cout << "       long형 데이터에 할당되는 메모리의 크기는  " << sizeof(long) << " 바이트입니다." << endl;
	cout << "  long long형 데이터에 할당되는 메모리의 크기는  " << sizeof(long long) << " 바이트입니다." << endl;
	cout << "      float형 데이터에 할당되는 메모리의 크기는  " << sizeof(float) << " 바이트입니다." << endl;
	cout << "     double형 데이터에 할당되는 메모리의 크기는  " << sizeof(double) << " 바이트입니다." << endl;
	cout << "long double형 데이터에 할당되는 메모리의 크기는 " << sizeof(long double) << " 바이트입니다.";
	return 0;
    
}