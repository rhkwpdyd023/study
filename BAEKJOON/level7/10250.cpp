#include <iostream>
using namespace std;

int main(){

    int T, H, W, N, floor, room;
    floor = 0;
    room = 0;

    cin >> T;

    for(int i=0;i<T;i++){
        cin >> H >> W >> N;
        
        floor = N % H;
        if(floor == 0){
            floor = H;
        }
        room = (N - 1) / H + 1;
        cout << (floor * 100) + room << endl;
    }

    return 0;
    
}