#include<bits/stdc++.h>
using namespace std;
int countSetBits(int n){
    int count = 0;
    while(n > 0){
        count++;
        n = n & (n - 1);
    }
    return count;
}

int main(){
    // set bits are the bits that are = 1, bits that are set to 0 are called off bits
    int n = 45;
    cout << __builtin_popcount(n) << endl; // built in function for counting set bits
    cout << countSetBits(n) << endl;
}