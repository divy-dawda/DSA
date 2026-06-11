#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 16;
    int mask = 0;
    while(mask < n){
        mask = (mask << 1) | 1;
    }
    int result = n ^ mask;
    cout << result << endl;
}