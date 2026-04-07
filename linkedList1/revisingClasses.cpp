#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float percentage;
    Student(string name, int rno, float percentage){
        this->name = name;
        this->rno = rno;
        this->percentage = percentage;
    }
};
int main(){
    Student s("Divya Dawda", 46, 78.3);
    cout<<s.name<<endl;
}