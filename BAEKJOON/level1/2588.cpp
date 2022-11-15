#include <iostream>
using namespace std;

int main(){

    int a, b;
    int A, B, C, sum;
 

    cin >> a ;
    cin >> b ;

    A = a * (b % 10);
    B = a * (b / 10 % 10);
    C = a * (b / 100);
    sum = A + (B * 10) + (C * 100);

    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    cout << sum << endl;

    return 0;

}