#include<iostream>
#include<string>
using namespace std;
void generate(string str, int n){
    if(str.length() == n){
        cout<<str<<endl;
        return;
    }
    generate(str + '0', n);
    if(str.size() == 0 || str[str.length() - 1] == '0') {
        generate(str + '1', n);
    }
}
int main(){
    int n = 2;
    generate("", n);
}