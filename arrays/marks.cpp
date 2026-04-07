#include<iostream>
using namespace std;
int main(){
    int marks[5];
    cout<<"Enter marks of 5 students: ";
    for(int i = 0; i<=4; i++){
        cin>>marks[i];
    }
    for(int i=0; i<=4; i++){
        if(marks[i]<35) cout<<i<<" ";
    }
}