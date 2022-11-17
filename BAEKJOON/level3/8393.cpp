#include <iostream>
using namespace std;

int main(){

    int n, result;
    result = 0;

    cin >> n;

    for(int i=0; i <= n; i++){
        result += i;
    }

    cout << result << endl;

    return 0;

}