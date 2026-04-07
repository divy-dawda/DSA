#include<iostream>
#include<string>
using namespace std;
int main() {
    string arr[] = {"0123", "0023", "456", "00182", "009405", "2901"};
    int index = 0;
    int max = stoi(arr[0]);
    string maxString = arr[0];
    for(int i = 0; i <= 5; i++) {
        int x = stoi(arr[i]);
        if(max < x) {
            index = i;
            max = x; // this will remove the leading 0s
            maxString = arr[i]; // this stores the actual string with the leading 0s.
        }
    }
    cout<<maxString<<" was found at the index "<<index; // so i can either print int or string depending if i want leading 0s or not.
}