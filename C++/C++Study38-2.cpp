#include <iostream>
#include <iterator>
#include <list>
using namespace std;

int main(){

    list<int> ls = {10, 20, 30};
	copy(ls.rbegin(), ls.rend(), ostream_iterator<int>(cout, " "));
	return 0;
    
}