#include<iostream>
using namespace std;

int main(){

    int arr[9][9];
    int max, mx, my;
    max = 0;
    mx = 0; 
    my = 0;

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> arr[i][j];
            if(arr[i][j] > max){
                max = arr[i][j];
                mx = i;
                my = j;
            }
        }
    }

    cout << max << endl;
    cout << mx + 1 << " " << my + 1 << endl;

    return 0;

}