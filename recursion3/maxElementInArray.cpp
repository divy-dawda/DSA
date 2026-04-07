#include<iostream>
// #include<climits>
using namespace std;
// void maxElement(int arr[], int n, int idx, int max, int index){
//     if(idx == n){
//         cout<<max<<" at index "<<index;
//         return;
//     }
//     if(arr[idx]>max){
//         max = arr[idx];
//         index = idx;
//     }
//     maxElement(arr, n, idx+1, max, index);
// }

int maxElement(int arr[], int n, int idx){
    if(idx == n) return INT_MIN;
    return max(arr[idx], maxElement(arr, n, idx+1));
}

int main(){
    int arr[] = {5, 12, 65, 2, 81, 72, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    // maxElement(arr, n, 0, INT_MIN, 0);
    cout<<maxElement(arr, n, 0);
}