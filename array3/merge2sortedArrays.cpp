#include<iostream>
using namespace std;
#include<vector>

void display(vector<int> &v){
    for(int i = 0;i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> mergeSort(vector<int> &v, vector<int> &v2){
    int n = v.size();
    int m = v2.size();
    vector<int> v3(m+n);
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<=n-1 && j<=m-1){
        if(v[i]<v2[j]){
            v3[k] = v[i];
            i++;
            // k++;
        }
        else{ // v2[j]<v[i]
            v3[k] = v2[j];
            j++;
            // k++;
        }
        k++; // because 'k' is being incremented in both if and else so we dont need to write k++ in both the conditions and write it in the end instead.
        // for remaining elements
        if(i==n){ // 'v' ke saare elements utha chuka hu
            while(j<=m-1){
                v3[k] = v2[j];
                k++;
                j++;
            }
        }
        if(j==m){ // 'v2' ke saare elements utha chuka hu
            while(i<=n-1){
                v3[k] = v[i];
                k++;
                i++;
            }
        }
    }
    return v3;
}

int main(){
    vector<int> v;
    v.push_back (1);
    v.push_back (4);
    v.push_back (5);
    v.push_back (8);

    vector<int> v2;
    v2.push_back (2);
    v2.push_back (3);
    v2.push_back (6);
    v2.push_back (7);
    v2.push_back (10);
    v2.push_back (12);

    cout<<"Array 1: ";
    display(v);
    cout<<"Array 2: ";
    display(v2);
    vector<int> v3 = mergeSort(v,v2);
    cout<<"Merged array: ";
    display(v3);
}