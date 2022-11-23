#include <iostream>
#include <string.h>
using namespace std;

int main(){

    int T, sum, bonus;
    char arr[81] = {0, };
    sum = 0;
    bonus = 0;

    cin >> T;

    for(int i=0; i<T; i++){
        cin >> arr;

        for(int j=0; j<80; j++){
            if(arr[j] == 0){
                bonus = 0;
                break;
            }
            if(arr[j] == 'O'){
                bonus = bonus + 1;
                sum = sum + bonus;
            } 
            else{
                bonus = 0;
            }
        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;

}