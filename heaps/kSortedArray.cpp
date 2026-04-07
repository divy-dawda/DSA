#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {6, 5, 3, 2, 8, 10, 9};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        pq.push(arr[i]);
        if(pq.size() > k){
            ans.push_back(pq.top()); // ans = 2, 3, 5, 6
            pq.pop();
        }
    }

    while(pq.size()){ // for the elements left in the heap after previous loop ends
        ans.push_back(pq.top()); // ans = 2, 3, 5, 6, 8, 9, 10
        pq.pop();
    }

    for(int num : ans){
        cout<<num<<" ";
    }
}