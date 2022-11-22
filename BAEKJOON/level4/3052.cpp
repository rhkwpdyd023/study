#include <iostream>
using namespace std;

int main(){
    
    int arr[42] = {};
    int num, r;
    int count = 0;

    for(int i=0;i<10;i++){
        cin >> num;
        r = num % 42;
        arr[r] = 1;
    }

    for(int j=0;j<42;j++){
        count += arr[j];
    }

    cout << count << endl;

    return 0;

}