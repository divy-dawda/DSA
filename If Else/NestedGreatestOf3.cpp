#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter three number: ";
    cin>>x>>y>>z;
    if(x>y){
        if(x>z){
            cout<<x<<" is the greatest";
        }
    }
    if(y>x){
        if(y>z){
            cout<<y<<" is the greatest";
        }
    }
    if(z>y){
        if(z>x){
            cout<<z<<" is the greatest";
        }
    }
}