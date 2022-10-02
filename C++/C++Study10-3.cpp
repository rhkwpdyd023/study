#include <iostream>
using namespace std;

int main() {

    int sum = 0;
	int grade[3] = {85, 65, 90};	// grade[0], grade[1], grade[2]만 선언 및 초기화 
	grade[3] = 100;					// grade[3]를 선언하지 않고 초기화 진행 
	
	for (int i = 0; i < 4; i++)		// grade[3]도 수식에 포함 
	{
		sum += grade[i];			// 인덱스를 이용한 배열의 접근 
	}
	
	cout << "국영수 과목 총 점수 합계는 " << sum << "점이고, 평균 점수는 " << (double)sum/3 <<"점입니다.";
	return 0;
    
}