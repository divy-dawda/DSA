#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter marks: ";
    cin>>n;
    if(n>=90){
        cout<<"Excellent";
    }
    else if (n>=81)
    {
        cout<<"Very good";
    }
    else if(n>=71){
        cout<<"good";
    }
    else if(n>=61){
        cout<<"Can do better";
    }
    else if(n>=51){
        cout<<"Average";
    }
    else if(n>=41){
        cout<<"Below average";
    }
    else{
        cout<<"fail";
    }
}