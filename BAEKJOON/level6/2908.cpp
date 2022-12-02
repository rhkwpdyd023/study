#include <iostream>
#include <string>
using namespace std;

int main(){

    int num1, num2, max;
    max = 0;

    cin >> num1 >> num2;

    num1 = ((num1 % 10) * 100) + (((num1 / 10) % 10) * 10) + (num1 / 100);
    num2 = ((num2 % 10) * 100) + (((num2 / 10) % 10) * 10) + (num2 / 100);

    if(num1 > num2){
        max = num1;
    }

    else{
        max = num2;
    }

    cout << max << endl;

    return 0;

}