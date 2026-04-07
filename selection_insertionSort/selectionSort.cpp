#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[] = {5,4,3,2,1};
    int n = 5;
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(int i = 0; i < n-1; i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j = i; j < n; j++){
            if(min>arr[j]){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[mindx], arr[i]);
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
}