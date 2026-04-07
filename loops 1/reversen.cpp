#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    // n, n-1, n-2, n-3 ... 3 2 1
    for(int i=n; i>=1; i--){
        cout<<i<<endl;
    }
}