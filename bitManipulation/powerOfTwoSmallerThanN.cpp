#include<bits/stdc++.h>
using namespace std;
int powerOfTwo(int n){
    int result = 0;
    // while(n > 0){
    //     result = n;
    //     n = n & (n - 1);
    // }
    // return result;

    while(result < n){
        result = (result << 1) | 1;
    }
    result++;
    // return result / 2;
    return result >> 1; // right shift by 1 means dividing by 2
}

int main(){
    int n = 10;
    cout << powerOfTwo(n) << endl;
}