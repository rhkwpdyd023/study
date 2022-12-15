#include <iostream>
using namespace std;

int main(){

    int N, count;
    int arr[246913] = {0, };
    count = 0;

    arr[0] = 1; 
    arr[1] = 1;

    cin >> N;

    for(int i=2;i<246913/i;i++){
        if(arr[i] == 1){
            continue;
        }
        for(int j=i*i;j<246913;j+=i){
            if(j % i == 0){
                arr[j] = 1;
            }
        }
    }
    
    while(N != 0){
        count = 0;
        for(int i=N+1;i<=N*2;i++){
            if(arr[i] == 0){
                count ++;
            }
            cout << count << endl;
            cin >> N;
        }
    }

    return 0;

}