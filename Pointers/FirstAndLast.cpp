#include<iostream>
using namespace std;

void digit(int n, int *ptr1, int *ptr2){
    *ptr2 = n%10; //last digit
    while(n>9){
        n /= 10;
    }
    *ptr1 = n;
    return;
}

int main(){
    int n;
    cin>>n;
    int firstDigit, lastDigit;
    int *ptr1 = &firstDigit;
    int *ptr2 = &lastDigit;
    digit(n, ptr1, ptr2);
    cout<<firstDigit<<" "<<lastDigit;
}