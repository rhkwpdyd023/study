#include <iostream>
using namespace std;

union ShareData{
    /* data */
    unsigned char a;
	unsigned short b;
	unsigned int c;
};

int main() {

    ShareData var;
	var.c = 0x12345678;
	
	cout << hex;
	cout << var.a << endl;
	cout << var.b << endl;
	cout << var.c;
	return 0;

}