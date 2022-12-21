#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int N, k, x;
    int arr[1001];

    cin >> N >> k;

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    sort(arr, arr + N, greater<>());

    cout << arr[k - 1] << endl;

    return 0;

}