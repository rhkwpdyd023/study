#include <iostream>
using namespace std;

int main() {

    int except_num = 2;
	
	for (int i = 0; i <= 100; i++)
	{
		if (i % except_num == 0)
		{
			continue;
		}
		cout << i << endl;
	}
	return 0;
    
}