#include<iostream>
#include<vector>
using namespace std;
int main(){
    // here the 3 is row size
    // 4 is column size
    // and if we right anything in the place of 2
    // it will become the initial value of every element in the vector
    vector< vector<int> > v(3,vector<int> (4,2));
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            // because I have set the initial value to 2, all the element's value is 2
            cout<<v[2][2]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<v.size()<<endl; // for row size
    cout<<v[0].size(); // for column size
}