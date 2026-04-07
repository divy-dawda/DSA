#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){ // CREATING A CONSTRUCTOR LETS ME INITIALIZE THE VALUE IN THE SAME LINE WHEN I DECLARE A VARIABLE.
        this->val = val;
        this->next = NULL;
    }
};

int main(){
    Node a(10);
    // a.val = 10; IF I DONT CREATE A PARAMETARIZED CONSTRUCTOR I WILL HAVE TO SET THE VALUES LIKE THIS.
    Node b(20);
    //b.val = 20;
    Node c(30);
    // c.val = 30;
    Node d(40);
    // d.val = 40;

    // making ll
    a.next = &b;
    b.next = &c;
    c.next = &d;
    // d.next = NULL; NO NEED TO WRITE THIS ANYMORE IF I SET THE DEFAULT VALUE FOR ALL NODES TO NULL IN THE CONSTRUCTOR.

    a.next -> val = 100; //changes the value of b to 40.
    cout<<(a.next)->val<<endl;

    // printing value of d by only using a.
    cout<<(((a.next) -> next) -> next) -> val<<endl;

    // printing entire ll using loop
    Node temp = a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }
}