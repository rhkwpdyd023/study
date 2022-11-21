#include <iostream>
using namespace std;

int main(){

    int N, input, min, max;
    min = 1000001;
    max = -1000001;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> input;

        if(input < min){
            min = input;
        }

        if(input > max){
            max = input;
        }
    }

    cout << min << " " << max << endl;

    return 0;

}