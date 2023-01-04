#include <iostream>
using namespace std;

void star(int x, int y, int num){
    if((x / num) % 3 == 1 && (y / num) % 3 == 1){
        cout << " ";
    }
    else{
        if(num == 1){
            cout << "*";
        }
        else star(x, y, num / 3);
    }
}

int main(){
    int N;
    
    cin >> N;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            star(i,j,N/3);
        }
        cout << endl;
    }

    return 0;

}