#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

// void sort01(vector<int> &v){
//     int noz=0;
//     int noo=0;
//     int n = v.size();
//     for(int i=0; i<n; i++){
//         if(v[i]==0) noz++;
//         else noo++;
//     }
//     for(int i=0; i<n; i++){
//         if(i<noz) v[i]=0;
//         else v[i]=1;
//     }
// }

void sort(vector<int>& v){
    int n=v.size();
    int i=0;
    int j=n-1;
    // while(i<j){
    //     if(v[i]==0) i++;
    //     if(v[j]==1) j--;
    //     if(i>j) break;
    //     if(v[i] == 1 && v[j] == 0){
    //         v[i]=0;
    //         v[j]=1;
    //         i++;
    //         j--;
    //     }
    // }

    while (i < j) { // THIS IS CHATGPT METHOD
        if (v[i] == 0) {
            i++; // Move `i` forward if the current element is already 0
        } else if (v[j] == 1) {
            j--; // Move `j` backward if the current element is already 1
        } else {
            // Swap if v[i] == 1 and v[j] == 0
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}

int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    display(v);
    sort(v);
    display(v);
    
}