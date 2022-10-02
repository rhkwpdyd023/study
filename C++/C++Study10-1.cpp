#include <iostream>
using namespace std;

int main() {

    int sum = 0;
	int grade[3];	// 길이가 3인 int형 배열 선언 
	
	// 인덱스를 이용한 배열의 초기화
	grade[0] = 85;	// 국어 점수 
	grade[1] = 65;	// 영어 점수 
	grade[2] = 90;	// 수학 점수 
	
	for (int i = 0; i < 3; i++)
	{
		sum += grade[i];	// 인덱스를 이용한 배열로의 접근 
	}
	
	cout << "국영수 과목 총 점수 합계는 " << sum << "점이고, 평균 점수는 " << (double)sum/3 <<"점입니다.";
	return 0;
    
}