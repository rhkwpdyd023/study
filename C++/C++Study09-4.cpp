#include <iostream>
using namespace std;

int main() {

    int num = 1, sum = 0;
	int end_num = 10;
	
	while (1) // 무한 루프 
	{
		sum += num;
		if (num == end_num)
		{
			break;
		}
		num++;
	}
	
	cout << "1부터 " << end_num << "까지 더한 값은 " << sum << "입니다.";
	return 0;
    
}