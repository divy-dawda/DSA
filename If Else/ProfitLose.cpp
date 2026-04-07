#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"Enter cost price: ";
    cin>>x;
    cout<<"Enter selling price: ";
    cin>>y;
    if (x>y)
    {
        cout<<"The seller incurred a loss of "<<x - y<<" Rupees";
    }
    else
    {
        cout<<"The seller made a profit of "<<y - x<<" Rupees";
    }
}