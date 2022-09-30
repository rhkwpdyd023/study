#include <iostream>
using namespace std;

int main() {

    char ch = 'C';

	switch (ch) {
		
        case 'a':
		case 'A':
			cout << "이 학생의 학점은 A입니다." << endl;
			break;

		case 'b':
		case 'B':
			cout << "이 학생의 학점은 B입니다." << endl;
			break;
		
        case 'c':
		case 'C':
			cout << "이 학생의 학점은 C입니다." << endl;
			break;
		
        case 'd':
		case 'D':
			cout << "이 학생의 학점은 D입니다." << endl;
			break;
		
        case 'f':
		case 'F':
			cout << "이 학생의 학점은 F입니다." << endl;
			break;
		
        default:
			cout << "학점을 정확히 입력해 주세요!(A, B, C, D, F)" << endl;
			break;
	}
	return 0;
    
}