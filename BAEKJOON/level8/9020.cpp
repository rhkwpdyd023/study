#include <iostream>
using namespace std;

int main(){

	cin.tie(0);

    int T, n, a1, a2, count;

    cin >> T;

    for(int i=0;i<T;i++){
        a1 = 0;
        a2 = 0;
        count = 0;

        cin >> n;

        a1 = n / 2;
        a2 = n - a1;

        while (a1 > 0){
            for(int j=2; j<a1-1;j++){
                if(a1 % j == 0 || a2 % j == 0){
                    count ++;
                }
            }

            if(count >= 1){
                a1 --;
                a2 ++;
                count = 0;
            }
            else{
                break;
            }
        }
        cout << a1 << " " << a2 << endl;
    }

    return 0;

}