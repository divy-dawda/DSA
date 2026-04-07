#include<iostream>
using namespace std;
int main() {
    // USING BINARY SEARCH
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int n = 9;
    int low = 0;
    int high = n-1;
    int x = 21;
    bool flag = false;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == x) {
            cout<<arr[mid-1];
            flag = true;
            break;
        }
        else if(arr[mid] < x) low = mid+1;
        else high = mid - 1;
    }

    if(flag == false){
        cout<<arr[high];
    }

    // USING LINEAR SEARCH
    // int arr[] = {1,2,4,5,9,15,18,21,24};
    // bool flag = false;
    // int n = 9;
    // int x = 13;
    // for(int i = 0; i < n; i++){
    //     if(arr[i] > x){
    //         cout<<"The lower bound of "<<x<<" is "<<arr[i-1];
    //         flag = true;
    //         break;
    //     }
    // }

    // if(flag = false){
    //     cout<<"No lower bound found.";
    // }
}