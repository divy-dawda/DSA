#include<iostream>
#include<string>
using namespace std;
void generate(string str, int open, int close, int n){
    if(close == n){
        cout<<str<<endl;
        return;
    }
    if(open < n) generate(str+'(', open+1, close, n);
    if(close < open) generate(str+')', open, close+1, n);
}
int main(){
    int n = 3;
    generate("", 0, 0, n);
}