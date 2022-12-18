#include<iostream>
using namespace std;

int main(){

    int a[100][100];
    int b[100][100];
    int N, M;

    cin >> N >> M;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            cin >> a[i][j];
        }
    }

    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            cin >> b[i][j];
        }
    }

    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            cout << a[i][j] + b[i][j] << " ";
        } 
        cout << endl;
    }

    return 0;

}