#include <iostream>
using namespace std;

int main(){

    int N, A, count;
    count = 0;

    cin >> N;

    A = N;

    while (1){
        count = count + 1;
        A = ((A % 10) * 10) + ((A / 10 + A % 10) % 10); 

        if(N == A){
            break;
        }
    }

    cout << count << endl;

    return 0;

}