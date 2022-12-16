#include <iostream>
using namespace std;

int main(){

    int N, count;
    int arr[300000];
    
    while(1){

        count = 0;
        
        cin >> N;

        for(int i=0;i<=2*N;i++){
            arr[i] = 0;
        }

        if(N == 0){
            break;
        }

        for(int i=2;i<=2*N;i++){
            if(arr[i] == 0){
                arr[i] = 0;
            }
            for(int j=i+i;j<=2*N;j+=i){
                if(arr[j] != 1){
                    arr[j] = 1;
                }
            }
        }

        for(int i=N+1;i<=2*N;i++){
            if(arr[i] == 0){
                count ++;
            }
        }

        cout << count << endl;

    }

    return 0;

}