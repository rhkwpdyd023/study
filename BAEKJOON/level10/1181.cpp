#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){

    vector<string> word[51];
    int N;
    string s;
    
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> s;
        word[s.length()].push_back(s);
    }

    for(int i=0;i<51;i++){
        sort(word[i].begin(), word[i].end());
        word[i].erase(unique(word[i].begin(), word[i].end()), word[i].end());

        for(int j=0;j<word[i].size();j++){
            cout << word[i][j] << endl;
        }
    }

    return 0;

}

