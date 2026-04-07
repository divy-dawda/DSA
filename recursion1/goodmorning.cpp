#include<iostream>
using namespace std;
void mrng(int n){
    if(n==0) return;
    cout<<"Good morning!"<<endl;
    mrng(n-1);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    mrng(n);
}