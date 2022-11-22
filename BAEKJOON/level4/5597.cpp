#include <iostream>
using namespace std;

int main(){

    int num;
    int arr[31] = {0,};

    for(int i=1;i<=28;i++){
        cin >> num;
        arr[num] = 1;
    }

    for(int j=1;j<=30;j++){
        if(arr[j]==0){
            cout << j << endl;
        }
    }

    return 0;

}