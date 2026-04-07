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
    bool flag=false;
    int x;
    cout<<"Enter the element you want to search: ";
    cin>>x;
    int loc;
    for(int i=0; i<=n-1; i++){
        if(arr[i] == x){ 
            flag = true;
            loc = i;
            break;
        }
    }
    if(flag == true) cout<<"Element found at location "<<loc;
    else cout<<"Element not found.";
}