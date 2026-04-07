#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore leftover newline
    char str[n + 1];
    cin.getline(str, n + 1);

    cout << str << endl;

    for(int i = 0; str[i] != '\0'; i++){
        if(i % 2 == 0){
            str[i] = 'a';
        }
    }
    cout << str << endl;
}