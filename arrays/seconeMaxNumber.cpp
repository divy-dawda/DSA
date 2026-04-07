#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    int smax = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(arr[i] != max && smax < arr[i]){
            smax = arr[i];
        }
    }
    cout<<"The maximum value out of all the elements in the array is "<<max<<endl;
    cout<<"The second maximum value out of all the elements in the array is "<<smax;
}