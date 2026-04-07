#include<iostream>
using namespace std;
int stair(int n){
    if(n == 0) return 1;
    if(n < 0) return 0;
    return stair(n-1) + stair(n-2) + stair(n-3); // if 3 jumps are allowed
    // return stair(n-1) + stair(n-2); if 2 jumps are allowed
}
int main(){
    cout<<stair(4);
}