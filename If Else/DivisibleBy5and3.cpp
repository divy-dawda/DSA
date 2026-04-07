#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int x;
    cin>>x;
    if (x%5==0 && x%3==0)
    {
        cout<<"The number is divisible by 5 and 3.";
    }
    else
    {
        cout<<"The number is not divisible by 5 and 3";
    }
}