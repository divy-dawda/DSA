#include<iostream>
#include<sstream>
using namespace std;
int main() {
    string str = "divya dawda is a B.Tech student.";
    stringstream ss(str);
    string temp;

    while (ss>>temp) {
        cout<<temp<<endl;
    }
}