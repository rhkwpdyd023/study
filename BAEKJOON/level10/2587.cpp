#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int arr[101];
    int sum = 0;

    for(int i=0;i<5;i++){
        cin >> arr[i];
    }

    sort(arr, arr + 5);

    for(int i=0;i<5;i++){
        sum += arr[i];
    }

    cout << sum / 5 << endl;
    cout << arr[2] << endl;

    return 0;

}