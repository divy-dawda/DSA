#include<iostream>
using namespace std;
int main() {
    // USING BINARY SEARCH
    int arr[] = {1,2,2,3,3,3,3,3,4,4,4,5,5,9};
    int n = 14;
    int low = 0;
    int high = n-1;
    int x = 2;
    bool flag = false;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == x) {
            if(arr[mid-1] != x){
                cout<<mid;
                flag = true;
                break;
            }
            else {
                high = mid - 1;
            }
        }
        else if(arr[mid] < x) low = mid+1;
        else high = mid - 1;
    }

    if(flag == false){
        cout<<-1;
    }
}