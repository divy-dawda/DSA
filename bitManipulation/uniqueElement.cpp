#include<bits/stdc++.h>
using namespace std;
int main(){
    int res = 0;
    int arr[] = {4, 4, 1, 3, 2, 3, 5, 1, 2};
    for(int x : arr){
        res = res ^ x;
    }
    cout << res << endl;
}