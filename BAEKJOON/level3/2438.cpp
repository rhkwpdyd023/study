#include <iostream>
using namespace std;

int main(){

    int N;

    cin >> N;

    for(int i=1; i<=N; i++){
        for(int x=1; x<=i; x++){
        cout << "*";
        } cout << endl;
    }

    return 0;

}