#include <iostream>
using namespace std;

int main() {
    int num = 2147483647;
    cout << "변수 num에 저장된 값은 " << num << "입니다." << endl;

    num = 2147483648;
    cout << "변수 num에 저장된 값은 " << num << "입니다." << endl;
    return 0;
}