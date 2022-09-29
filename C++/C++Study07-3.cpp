#include <iostream>
using namespace std;

int main() {

    int num = 3;
	
	if (num < 5) {
		cout << "입력하신 수는 5보다 작습니다." << endl;
    }

	else {
		if (num == 5) {
			cout << "입력하신 수는 5입니다." << endl;
		}

		else {
			cout << "입력하신 수는 5보다 큽니다." << endl;
		}
	}
	return 0;
}