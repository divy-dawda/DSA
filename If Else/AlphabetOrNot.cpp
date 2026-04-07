#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    //ASCII value of a to z = 97 to 122
    //ASCII value of A to Z = 65 to 90
    int ascii = (int)ch;
    if ((ascii>=97 && ascii<=122 || ascii>=65 && ascii<=90))
    {
        cout<<"The character is an alphabet";
    }
    else
    {
        cout<<"The character is not an alphabet";
    }
}