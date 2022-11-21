#include <iostream>
using namespace std;

int main(){

    int num, max, count, maxcount;
    max = 0;
    count = 0;
    maxcount = 0;

    for(int i=0; i<9; i++){
        count += 1;
        cin >> num;
        
        if(num > max){
            max = num;
            maxcount = count;
        }
    }

    cout << max << endl;
    cout << maxcount << endl;

    return 0;
    
}