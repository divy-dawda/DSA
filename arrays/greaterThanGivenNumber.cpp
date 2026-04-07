#include<iostream>
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
    int x;
    cout<<"Enter an element: ";
    cin>>x;
    int count=0;
    for(int i=0; i<=n-1; i++){
        if(x<arr[i]){
            count++;            
        }
    }
    cout<<count;
}