#include <iostream>
using namespace std;

int main() {
    cout << fixed;          // 소수점의 자릿수를 고정해서 표현함.
    cout.precision(20);     // 소수점의 자릿수를 20으로 설정함.

    float num01 = 3.1415926535897932;       // float 타입의 유효 자릿수는 소수점 6자리
    cout << "변수 num01에 저장된 값은 " << num01 << "입니다." << endl;

    double num02 = 3.1415926535897932;      // double 타입의 유효 자릿수는 소수점 16자리
    cout << "변수 num02에 저장된 값은 " << num02 << "입니다." << endl;
    return 0;
}