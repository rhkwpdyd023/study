#include <iostream>
#include <string>
using namespace std;

int main(){

    int result, max;
    string word;
    int num[26] = {0, };
    result = 0;
    max = 0;

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
        if(max < num[i]){
            max = num[i];
            result = i;
        }
    }

    for(int i=0;i<26;i++){
        if(result == i){
            continue;
        }
        if(max == num[i]){
            cout << "?" << endl;
            return 0;
        }
    }

    cout << (char)(result+65) << endl;
    
    return 0;

}
