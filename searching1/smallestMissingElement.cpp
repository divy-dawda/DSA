#include<iostream>
using namespace std;
int main() {
    int arr[] = {0,1,2,3,4,7,8,11,15};
    int n = 9;
    // USING LINEAR SEARCH
    // for(int i = 0; i < n; i++){
    //     if(arr[i] != i){
    //         cout<<i<<" is missing.";
    //         break;
    //     }
    // }

    // USING BINARY SEARCH
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low <= high) {
        int mid = low + (high - low)/2;
        if(arr[mid] == mid) low = mid + 1;
        else {
            ans = mid;
            high = mid - 1;
        }
    }
    cout<<ans;
}