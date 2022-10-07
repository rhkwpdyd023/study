#include <iostream>
#include <string>
using namespace std;

int main() {

    string name, subject;

    cout << "자신의 이름을 적어주세요 : ";
    getline(cin, name);
    cout << "가장 자신있는 과목을 적어주세요 : ";
    getline(cin, subject);

    cout << name << "님이 가장 자신있어 하는 과목은 바로" << subject << "입니다!";

}