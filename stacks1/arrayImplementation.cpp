#include<iostream>
using namespace std;
class Stack{
public:
    int arr[5];
    int idx = -1;
    void push(int val){
        if(idx == sizeof(arr)/sizeof(arr[0])-1){
            cout<<"Stack is full!"<<endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx == -1){
            cout<<"Stack is empty!"<<endl;
            return;
        }
        idx--;
    }
    void top(){
        if(idx == -1){
            cout<<"Stack is empty!"<<endl;
            return;
        }
        cout<<arr[idx]<<endl;
    }
    int size(){
        return idx+1;
    }
};
int main(){
    Stack st;
    st.top();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.top();
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    st.top();
}