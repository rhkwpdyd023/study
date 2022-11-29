#include <iostream>
#include <string>
using namespace std;

int main(){

    int count;
    string word;
    int num[26];
    count = 0;

    cin >> word;

    for(int i=0;i<word.length();i++){
        if(word[i] < 97){
            num[word[i] - 65] ++;
        }
        else{
            num[word[i] - 97] ++;
        }
    }

    for(int i=0;i<26;i++){
        if()
    }
}
