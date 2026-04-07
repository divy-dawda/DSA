#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void inserAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = NULL;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIndex(int idx, int val){
        if(idx < 0 || idx > size) cout<<"Invalid Index."<<endl;
        else if(idx == 0) inserAtHead(val);
        else if(idx == size) insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i = 1; i < idx; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    int getAtIndex(int idx){
        if(idx < 0 || idx >= size){
            cout<<"Invalid index. ";
            return -1;
        }
        else if(idx == 0) return head->val;
        else if(idx == size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i = 1; i <= idx; i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty."<<endl;
            return;
        }
        head = head->next;
        size--;
    }

    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty."<<endl;
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIndex(int idx){
        if(size==0){
            cout<<"List is empty."<<endl;
            return;
        }
        if(idx >= size || idx < 0){
            cout<<"Invalid index.";
            return;
        }
        if(idx == 0) return deleteAtHead();
        else if(idx == size-1) return deleteAtTail();
        else{
            Node* temp = head;
            for(int i = 1; i <= idx-1; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList ll;
    ll.insertAtTail(10);
    ll.display();
    ll.insertAtTail(20);
    ll.display();
    ll.inserAtHead(30);
    ll.display();
    ll.inserAtHead(40);
    ll.display();
    ll.insertAtIndex(2, 50);
    ll.display();
    cout<<ll.getAtIndex(2)<<endl;
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIndex(1);
    ll.display();
}