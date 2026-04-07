#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    for(int i = 1; i <= q.size(); i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}

void reverse(queue<int>& q){
    stack<int> st;
    // empty the queue into stack
    while(q.size()){
        st.push(q.front());
        q.pop();
    }
    // empty the stack into queue
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverse(q);
    display(q);
    reverse(q);
    display(q);
}