#include <iostream>
using namespace std;

int main(){

    int H, M, T;

    cin >> H >> M;
    cin >> T;

    H += T / 60;
    M += T % 60;

    if(M >= 60){
        H += 1;
        M -= 60;
    }

    if(H >= 24){
        H -= 24;
    }

    cout << H << " " << M << endl;
 
    return 0;

}