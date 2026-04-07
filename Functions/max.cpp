#include<iostream>
using namespace std;
int maxthree(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else return c; //function ends after the return statement and any lines below it arent executed
}

int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<maxthree(a,b,c);
}