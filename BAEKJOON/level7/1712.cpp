#include <iostream>
using namespace std;

int main(){

    int base, cost, price, bep;

    cin >> base >> cost >> price;

    if(cost >= price){
        bep = -1;
    }
    else {
        bep = base / (price - cost) + 1;
    }

    cout << bep << endl;

    return 0;

}