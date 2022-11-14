#include <iostream>
using namespace std;

int main(){

    int A, B, C;
    int r1, r2, r3, r4;

    cin >> A >> B >> C;

    r1 = (A + B) % C;
    r2 = ((A % C) + (B % C)) % C;
    r3 = (A * B) % C;
    r4 = ((A % C) * (B % C)) % C;

    cout << r1 << endl;
    cout << r2 << endl;
    cout << r3 << endl;
    cout << r4 << endl;

}