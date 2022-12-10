#include <iostream>
using namespace std;

int main(){

    int N, count;

    count = 0;

    cin >> N;

    while(N >= 0){
        if(N % 5 == 0){
            count += (N / 5);
            cout << count << endl;

            return 0;
        }
        else{
            count ++;
            N -= 3;
        }
    }

    cout << "-1" << endl;

}