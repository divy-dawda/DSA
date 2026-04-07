#include<iostream>
#include<vector>
using namespace std;
void display(int arr[], int n, int idx){ // to print array
    if(idx == n) return;
    cout<<arr[idx]<<" ";
    display(arr, n, idx+1);
}

void display2(vector<int>& v, int idx){ // to print vector
    if(idx == v.size()) return;
    cout<<v[idx]<<" ";
    display2(v, idx+1);
}

int main(){
    int arr[] = {5, 12, 65, 2, 8, 72, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        v[i] = arr[i];
    }
    display2(v, 0);
}