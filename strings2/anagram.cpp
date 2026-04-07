#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    string s;
    string t;
    cout<<"Enter two strings: ";
    cin>>s;
    cin>>t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s == t){
        cout<<true;
    }
    else cout<<false;
}