#include <iostream>
using namespace std;

int main() {

    int num = 2;

	switch (num)
	{
		case 1:
			cout << "입력하신 수는 1입니다." << endl;
			break;

		case 2:
			cout << "입력하신 수는 2입니다." << endl;
			break;

		case 3:
			cout << "입력하신 수는 3입니다." << endl;
			break;

		case 4:
			cout << "입력하신 수는 4입니다." << endl;
			break;

		case 5:
			cout << "입력하신 수는 5입니다." << endl;
			break;

		default:
			cout << "1부터 5까지의 수만 입력해 주세요!" << endl;
			break;
	}

	return 0;
    
}