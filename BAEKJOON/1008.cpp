#include <iostream>>
using namespace std;

int main(){

    double a, b;

    cin >> a;
    cin >> b;

    cout << fixed;
    cout.precision(15);

    cout << a/b << endl;

    return 0;

}