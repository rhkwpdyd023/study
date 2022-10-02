#include <iostream>
using namespace std;

int main() {

    int sum = 0;
	int grade[3] = {85, 65, 90};	// 길이가 3인 int형 배열의 선언과 동시에 초기화
		
	for (int i = 0; i < 3; i++)
	{
		sum += grade[i];			// 인덱스를 이용한 배열의 접근 
	}
	
	cout << "국영수 과목 총 점수 합계는 " << sum << "점이고, 평균 점수는 " << (double)sum/3 <<"점입니다.";
	return 0;
    
}