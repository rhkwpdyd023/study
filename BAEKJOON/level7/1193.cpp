#include <iostream>
using namespace std;

int main(){

    int X, i;

    cin >> X;

    i = 1;

	while(X > i) {
		X -= i;
		i++;
	}

	if(i % 2 == 1){
		cout << i + 1 - X << "/" << X << endl;
    }
	else{
		cout << X << "/" << i + 1 - X << endl;
    }

    return 0;

}