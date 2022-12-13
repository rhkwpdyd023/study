#include <iostream>
using namespace std;

int main(){

    int M, N, sum, min, count;
    sum = 0;
    min = 0;
    count = 0;

    cin >> M >> N;

    for(int i=M;i<=N;i++){
        for(int j=1;j<=i;j++){
            if(i % j == 0){
                count ++;
            }
        }
        if(count == 2){
            if(min == 0){
                min = i;
            }
            sum += i;
        }
        count = 0;
    }
    
    if(min == 0){
        cout << "-1" << endl;
    }
    
    else{
        cout << sum << endl;
        cout << min << endl;
    }

    return 0;

}