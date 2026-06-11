#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(string& binary){
    int n = binary.size();
    int result = 0;
    for(int i = n - 1; i >= 0; i--){
        char ch = binary[i];
        int num = ch - '0';
        result = result + num * (1 << (n - i - 1)); // multiplication with 2 can be mimicked by left shift 1 (<< 1)
    }
    return result;
}

string decimalToBinary(int num){
    string result = "";
    while(num > 0){
        if(num % 2 == 0){
            result = '0' + result;
        }
        else{
            result = '1' + result;
        }
        // num /= 2; 
        // division by 2 can be mimicked right shift 1 (>> 1)
        num = num >> 1;
    }
    return result;
}

int main(){
    string str = "001011";
    cout << binaryToDecimal(str) << endl;
    cout << decimalToBinary(19) << endl;
}