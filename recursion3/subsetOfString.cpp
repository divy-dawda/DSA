#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subset(string ans, string original, int idx, int n, vector<string>& s){
    if(idx == n){
        s.push_back(ans);
        return;
    }
    char ch = original[idx];
    subset(ans+ch, original, idx+1, n, s);
    subset(ans, original, idx+1, n, s);
}
int main(){
    string str = "abc";
    vector<string> s;
    subset("", str, 0, str.size(), s);
    for(string ele : s){
        cout<<ele<<endl;
    }
}