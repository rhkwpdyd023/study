#include <iostream>
#include <string>
using namespace std;

int main(){

    int count;
    string word;

    count = 0;

    cin >> word;

    if(word[0] != ' '){
        count ++;
    }

    for (int i=1; i<word.length();i++) {
		if(word[i-1] == ' ' && word[i] != ' '){
			count ++;
        }
	}

    cout << count << endl;

    return 0;

}