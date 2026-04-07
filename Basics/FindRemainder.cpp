#include<iostream>
using namespace std;
int main(){
    int a = 9; //a is dividend
    int b = 3; //b is divisor
    int q = a/b; //q is qoutient
    int r; //r is remainder 
    // a = (b*q) + r
    r = a - (b*q);
    cout<<r;
}