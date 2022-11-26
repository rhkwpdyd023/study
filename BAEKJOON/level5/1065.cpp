#include <iostream>
using namespace std;

int arithmetic(int num){
    int count = 0;

    if(num < 100){
        return num;
    }

    else{
        count = 99;

        for(int i=100;i<=num;i++){
            int hund = i / 100;
            int ten = (i / 10) % 10;
            int one = i % 10;

            if((hund - ten) == (ten - one)){
            count++;
            }
        }
    }
    return count;
}

int main(){

    int N, result;

    cin >> N;

    result = arithmetic(N);

    cout << result << endl;

    return 0;
    
}