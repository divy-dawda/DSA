#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    // int temp=a;  // swapping using 3rd variable
    // a=b;
    // b=temp;
    // cout<<a<<" "<<b;

    //swap without 3rd variable
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<a<<" "<<b;
}

//functions wont work in swapping because of the scope of variables