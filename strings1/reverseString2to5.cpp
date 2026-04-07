#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    string str;
    cout<<"Enter a string of length greater than 5: ";
    getline(cin, str);
    reverse(str.begin()+1, str.begin()+5);
    cout<<str;
}