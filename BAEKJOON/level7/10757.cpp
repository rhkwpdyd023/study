#include <iostream>
#include <string>
using namespace std;

int main(){

    string A, B, answer;

    cin >> A >> B;

    int carry = 0;
    int Asize = A.length();
    int Bsize = B.length();

    while (Asize > 0 || Bsize > 0){
        int A1 = 0;
        if(Asize > 0){
            A1 = A[--Asize] - '0';
        }
        
        int B1 = 0;
        if(Bsize > 0){
            B1 = B[--Bsize] - '0';
        }

        int current = A1 + B1 + carry;
        carry = current / 10;
        current %= 10;
        char ccarry = current + '0';
        answer += ccarry;
    }

    if(carry > 0){
        answer += carry +'0';
    }

    for(int i=answer.length()-1;i>=0;i--){
        cout << answer[i];
    }
    
    return 0;

}