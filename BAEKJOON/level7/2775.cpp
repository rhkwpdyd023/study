#include <iostream>
using namespace std;

int main(){
    
    int T, k, n;
    int arr[15][15] = {0, };

    for(int i=0;i<15;i++){
            arr[0][i] = i;
        }
        for(int i=1;i<15;i++){
            for(int j=1;j<15;j++){
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
            }
        }

    cin >> T;

    for(int i=0;i<T;i++){
        cin >> k >> n;
        cout << arr[k][n] << endl;
    }

    return 0;

}