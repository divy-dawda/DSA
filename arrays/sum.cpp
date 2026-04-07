#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elemnts of the array: ";
    for(int i=0; i<=size-1; i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<=size-1; i++){
        sum += arr[i];
    }
    cout<<sum;
}