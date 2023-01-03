#include <iostream>
#include <string>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
	cin.tie(0);

    int T, count, l ,r;
    string S;

    cin >> T;

    for(int i=0;i<T;i++){

        cin >> S;

        count = 0;
        l = 0;
        r = S.length() - 1;
        bool flag = true;
        for(; l<=r;l++,r--){
            count++;

            if(S[l] != S[r]){
                flag = false;
                break;
            }
        }
        cout<< (flag ? 1 : 0) << " " << (flag && S.length() % 2 == 0 ? count + 1 : count) << endl;
    }

    return 0;

}