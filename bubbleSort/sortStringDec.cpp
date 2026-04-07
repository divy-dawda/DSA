#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "AZYZXBYDXJK";
    string s = "";
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'X'){
            s.push_back(str[i]);
        }
    }

    // BUBBLE SORT
    for(int i = 0; i < s.size()-1; i++){
        bool flag = true;
        for(int j = 0; j < s.size()-1-i; j++){
            if(s[j] > s[j+1]) {
                swap(s[j], s[j+1]);
                flag = false;
            }
        }
        if(flag == true){
            break;
        }
    }
    cout<<s;
}