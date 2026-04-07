#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // u need not mention the size
    // while inserting / input do not use []
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);

    // if u want to update / access
    v[0] = 88;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" "<<endl;

    // to check size and capacity of vector
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
}