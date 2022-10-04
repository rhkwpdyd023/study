#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int arr_col_len, arr_row_len;
	//int arr[3][] = {
	int arr[][4] = {
		{10, 20},
		{30, 40, 50, 60},
		{0, 0, 70, 80}
	};
	
	arr_col_len = sizeof(arr[0]) / sizeof(arr[0][0]);				// 2차원 배열의 열의 길이를 계산함 
	arr_row_len = (sizeof(arr) / arr_col_len) / sizeof(arr[0][0]);	// 2차원 배열의 행의 길이를 계산함 
			
	cout << "arr의 배열 요소의 값" << endl;
	for (int i = 0; i < arr_row_len; i++)
	{
		for (int j = 0; j < arr_col_len; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	return 0;
    
}