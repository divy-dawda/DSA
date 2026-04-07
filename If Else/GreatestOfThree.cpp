#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter three number: ";
    cin>>x>>y>>z;
    if (x>y && x>z)
    {
        cout<<x<<" is the greatest number.";
    }
    if (y>x && y>z)
    {
        cout<<y<<" is the greatest number.";
    }
    if (z>y && z>x)
    {
        cout<<z<<" is the greatest number.";
    }
}