#include <iostream>
#include <string>
using namespace std;

int main(){

    int N, count;
    string word;

    cin >> N;

    count = N;

    for(int i=0;i<N;i++){
        cin >> word;

        for(int j=0;j<word.length();j++){
            if(word[j] != word[j+1]){
                for(int k=j+1;k<word.length();k++){
                    if(word[j] == word[k]){
                        count --;
                        goto loop;
                    }
                }
            }
        }
        loop:;
    }

    cout << count << endl;

    return 0;

}