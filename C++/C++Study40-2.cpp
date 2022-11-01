#include <iostream>
#include <iterator>
#include <forward_list>
using namespace std;

int main(){

    forward_list<int> fls01 = {10, 20, 400, 30};	// forward_list 객체의 선언 및 초기화 
	forward_list<int> fls02 = {40, 50};
	forward_list<int>::iterator itr;
	
	fls01.remove(400);				// 값이 400인 모든 요소를 삭제함.
	cout << "현재 순방향 리스트의 모든 요소는 다음과 같습니다 :" << endl;
	copy(fls01.begin(), fls01.end(), ostream_iterator<int>(cout, " "));
	cout << endl; 
	
	itr = fls01.begin();			// fls01의 첫 번째 요소를 가리키도록 반복자를 초기화함. 
	fls01.splice_after(itr, fls02);	// fls02의 모든 요소를 fls01의 첫 번째 요소 다음에 삽입함. 
	cout << "fls01 : "; 
	copy(fls01.begin(), fls01.end(), ostream_iterator<int>(cout, " "));
	cout << endl << "fls02 : "; 
	copy(fls02.begin(), fls02.end(), ostream_iterator<int>(cout, " "));
	return 0;
    
}