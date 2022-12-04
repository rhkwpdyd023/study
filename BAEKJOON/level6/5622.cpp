#include <iostream>
#include <string>
using namespace std;

int main(){

    string word;
    int sec = 0;

    cin >> word;

    for(int i=0;i<word.length();i++){
        if(word[i] == 'A' || word[i] == 'B' || word[i] == 'C'){
            sec = sec + 3;
        }
        if(word[i] == 'D' || word[i] == 'E' || word[i] == 'F'){
            sec = sec + 4;
        }
        if(word[i] == 'G' || word[i] == 'H' || word[i] == 'I'){
            sec = sec + 5;
        }
        if(word[i] == 'J' || word[i] == 'K' || word[i] == 'L'){
            sec = sec + 6;
        }
        if(word[i] == 'M' || word[i] == 'N' || word[i] == 'O'){
            sec = sec + 7;
        }
        if(word[i] == 'P' || word[i] == 'Q' || word[i] == 'R' || word[i] == 'S'){
            sec = sec + 8;
        }
        if(word[i] == 'T' || word[i] == 'U' || word[i] == 'V'){
            sec = sec + 9;
        }
        if(word[i] == 'W' || word[i] == 'X' || word[i] == 'Y' || word[i] == 'Z'){
            sec = sec + 10;
        }
    }

    cout << sec << endl;

    return 0;
    
}