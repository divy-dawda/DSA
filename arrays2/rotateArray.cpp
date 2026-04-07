#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> &a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reversePart(int i, int j, vector<int> &a){
    while(i<=j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    return;
}
// in this question the value of k can be larger than n which will cause a problem thats why we are using this if statement
int main(){
    int k;
    cout<<"Enter value of k: ";
    cin>>k;
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);

    display(v);
    int n = v.size();
    if(k>n) k = k % n;
    reversePart(0, n-k-1, v);
    reversePart(n-k, n-1, v);
    reversePart(0, n-1, v);
    display(v);
}