#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // a 2d array is like a matrix
    // rows -> 3 
    // columns -> 3
    for(int i=0; i<=2; i++){ // i is for rows
        for(int j=0; j<=2; j++){ // j is for columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}