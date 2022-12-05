#include <iostream>
#include <string>
using namespace std;

int main(){

    string word;
    int count = 0;

    cin >> word;

    for(int i=0;i<word.length();i++){
        count ++;
        if(word[i] == '=' && word[i-1] == 'c'){
            count --;
        }
        if(word[i] == '-' && word[i-1] == 'c'){
            count --;
        }
        if(word[i] == '=' && word[i-1] == 'z' && word[i-2] == 'd'){
            count = count - 2;
        }
        if(word[i] == '-' && word[i-1] == 'd'){
            count --;
        }
        if(word[i] == 'j' && word[i-1] == 'l'){
            count --;
        }
        if(word[i] == 'j' && word[i-1] == 'n'){
            count --;
        }
        if(word[i] == '=' && word[i-1] == 's'){
            count --;
        }
        if(word[i] == '=' && word[i-1] == 'z'){
            count --;
            if(word[i-2] == 'd'){
                count ++;
            }
        }
    }

    cout << count << endl;

    return 0;

}