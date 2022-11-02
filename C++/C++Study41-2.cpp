#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main(){

    map<string, int> mp;
	mp.insert(pair<string, int>("국어", 80));	// 익명의 pair 객체를 생성하여 추가함. 
	mp["수학"] = 100;							// 첨자 연산자를 이용하여 추가함. 
	
	cout << "현재 맵의 모든 요소는 다음과 같습니다." << endl;
	map<string, int>::iterator it;
	for(it = mp.begin(); it != mp.end(); it++){
		cout << it->first << " : " << it->second << endl;
	}
	return 0;

}