#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> set;
    set.insert(1);
    set.insert(2);
    set.insert(3);
    set.insert(4);
    set.insert(5);
    set.insert(1); // this wont be added to the set as set only contains unique values
    cout<<set.size()<<endl; // prints 5 kyuki ek element ek baar hi add hoyega

    // set.find() -> it searches in the set, and if it is not found then it returns the last element
    int target = 41;
    if(set.find(target) != set.end()){
        cout<<"exists"<<endl;
    }
    else cout<<"doesn't exist"<<endl;

    set.erase(2);
    
    for(int element : set){
        cout<<element<<" ";
    }
    cout<<endl;
}