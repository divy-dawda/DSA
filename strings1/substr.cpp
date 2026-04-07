#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    string str;
    cout<<"Enter a string of even length: ";
    getline(cin, str);
    int n = str.length() / 2;
    cout<< str.substr(n);
}