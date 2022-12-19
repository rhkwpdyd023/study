#include <iostream>
using namespace std;

int main(){

    int T, x, y, count;
    int arr[101][101];
    count = 0;

    cin >> T;

    for(int i=0;i<T;i++){
        cin >> x >> y;
        for(int j=x;j<x+10;j++){
            for(int k=y;k<y+10;k++){
                if(arr[j][k] == 1){
                    continue;
                }
                arr[j][k] = 1;
                count ++;
            }
        }
    }

    cout << count << endl;

    return 0;

}