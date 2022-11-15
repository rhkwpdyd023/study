#include <iostream>
using namespace std;

int main(){

    int k, q, r, b, kn, p;
    int hk, hq, hr, hb, hkn, hp;

    cin >> k >> q >> r >> b >> kn >> p;

    hk = 1 - k;
    hq = 1 - q;
    hr = 2 - r;
    hb = 2 - b;
    hkn = 2 - kn;
    hp = 8 - p;

    cout << hk << " " << hq << " " << hr << " " << hb << " " << hkn << " " << hp << endl;

    return 0;

}