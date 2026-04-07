#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    string str = to_string(n);
    cout<<"The number of digits in the number are: "<<str.size();
}