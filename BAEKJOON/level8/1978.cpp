#include <iostream>
using namespace std;

int main(){
    int N, result, num, count;
    result = 0;
    count = 0;

    cin >> N;

    for(int i=0;i<N;i++){
        cin >> num;
        for(int j=1;j<=num;j++){
            if(num % j == 0){
                count ++;
            }
        }
        if(count == 2){
            result ++;
        }
        count = 0;
    }

    cout << result << endl;

    return 0;

}