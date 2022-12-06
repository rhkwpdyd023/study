#include <iostream>
using namespace std;

int main(){

    int N, space, count, answer;

    space = 1;
    count = 6;
    answer = 1;

    cin >> N;
    
    while (1){
        if(space >= N){
            break;
        }
        space += count;
        count += 6;
        answer++;
    }

    cout << answer << endl;

    return 0;
    
}