#include <iostream>
using namespace std;

int main(){

    int N, num, v;
    int arr[201] = {};

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> num;
        arr[num + 100] += 1;
    }

    cin >> v;

    cout << arr[v + 100] << endl;

    return 0;

}