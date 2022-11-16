#include <iostream>
using namespace std;

int main(){

    int x, y, z;

    cin>> x >> y >> z;

    if(x == y && x == z){
        cout << 10000 + (x * 1000) << endl;
    }
    
    else if(x == y || x == z){
        cout << 1000 + (x * 100) << endl;
    }

    else if(y == x || y == z){
        cout << 1000 + (y * 100) << endl;
    }

    else{
        if(x > y && x > z)
            cout << x * 100 << endl;
         
        else if(y > x && y > z)
            cout << y * 100 << endl;
        
        else
            cout << z * 100 << endl;
    }

    return 0;

}