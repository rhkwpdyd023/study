#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int N, avg, cen, many, ran, count;
    int arr[500000];
    double sum;

    sum = 0;
    count = 0;

    cin >> N;

    for(int i=1;i<=N;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + N);

    avg = sum / N;
    cen = arr[(N / 2) + 1];
    ran = arr[N] - arr[1];

    cout << avg << endl;
    cout << cen << endl;
    cout << many << endl;
    cout << ran << endl;

}