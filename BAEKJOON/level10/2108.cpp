#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
vector <int> arr;

int main(){ 

    int N, sum, num, avg, cen, many, many_val, ran, count;
    int number[8001] = {0, };

    sum = 0;
    many = -9999;

    bool not_first = false;

    cin >> N;

    for(int i=0;i<N;i++){
        cin >> num;
        arr.push_back(num);
        sum += num;
        number[num + 4000]++;
    }

    sort(arr.begin(), arr.end());

    for(int i=0;i<8001;i++){
        if(number[i] == 0){
            continue;
        }
        if(number[i] == many){
            if(not_first){
                many_val = i - 4000;
                not_first = false;
            }
        }
        if(number[i] > many){
            many = number[i];
            many_val = i - 4000;
            not_first = true;
        }
    }
    
    avg = round((float) sum / N);
    cen = arr[arr.size() / 2];
    ran = arr.back() - arr.front();

    cout << avg << endl;
    cout << cen << endl;
    cout << many << endl;
    cout << ran << endl;
    
}