#include <iostream>
using namespace std;

int main(){

    int N, score, M;
    double arr[1000];
    M = 0;
    double average = 0;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> score;
        arr[i] = score;
        if(score > M){
            M = score;
        }
    }

    for(int j=0; j<N; j++){
        average = average + ((arr[j] / M) * 100);
    }

    cout << average / N << endl;

    return 0;

}