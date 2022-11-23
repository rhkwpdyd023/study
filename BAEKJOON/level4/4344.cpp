#include <iostream>
using namespace std;

int main(){

    int C, N, cnt;
    int score[1000];
    double avg;

    cin >> C;

    for(int i=0; i<C; i++){
        cin >> N;
        avg = 0.00;

        for(int j=0; j<N; j++){
            cin >> score[j];
            avg = avg + score[j];
        }
        avg = avg / N;
        cnt = 0;

        for(int j=0; j<N; j++){
            if(score[j] > avg){
                cnt = cnt + 1;
            }
        }
        cout << fixed;
        cout.precision(3);
        cout << 100.0 * (double)cnt / N << "%" << endl;
    }

    return 0;

}