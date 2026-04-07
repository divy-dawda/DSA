#include<iostream>
#include<vector>
using namespace std;
void removeDigit(int arr[], int n, int idx, vector<int>& v){
    if(idx == n){
        for(int i = 0; i < v.size(); i++){
            cout<<v[i]<<" ";
        }
        return;
    }
    int digit = arr[idx];
    if(digit == 1) removeDigit(arr, n, idx + 1, v);
    else{
        v.push_back(digit);
        removeDigit(arr, n, idx + 1, v);
    }
}

int main(){
    int arr[] = {4,1,6,8,3,9,1,10,4,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    removeDigit(arr, n, 0, v);
}