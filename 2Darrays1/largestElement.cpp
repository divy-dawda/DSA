#include<iostream>
using namespace std;
int main(){
    // finding largest element
    int arr[3][3] = {1,22,3,4,15,6,17,8,39};
    int max = arr[0][0];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j]>max) max = arr[i][j];
        }
    }
    cout<<max<<endl;
    // finding second largest element
    int secmax = arr[0][0];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j]<max && arr[i][j]>secmax) secmax = arr[i][j];
        }
    }
    cout<<secmax;
}