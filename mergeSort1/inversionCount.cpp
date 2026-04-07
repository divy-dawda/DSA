#include<iostream>
#include<vector>
using namespace std;
int inversion(vector<int>& a, vector<int>& b){
    int count = 0;
    int i = 0;
    int j = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] > b[j]){
            count += (a.size() - i);
            j++;
        }
        else i++;
    }
    return count;
}
void merge(vector<int>& a, vector<int>& b, vector<int>& result){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] < b[j]){
            result[k++] = a[i++];
        }
        else{ // b[j] <= a[i]
            result[k++] = b[j++];
        }
    }

    if(i == a.size()){
        while(j < b.size()){
            result[k++] = b[j++];
        }
    }

    if(j == b.size()) while(i < a.size()) result[k++] = a[i++];
}

int mergeSort(vector<int>& v){
    int count = 0;
    int n = v.size();
    if(n == 1) return 0;
    int n1 = n / 2;
    int n2 = n - n / 2;
    vector<int> a(n1), b(n2);
    for(int i = 0; i < n1; i++) {
        a[i] = v[i];
    }
    for(int i = 0; i < n2; i++) {
        b[i] = v[i+n1];
    }

    // magic aka recursion
    count += mergeSort(a);
    count += mergeSort(b);

    // counting of inversions
    count += inversion(a,b);

    // merge
    merge(a, b, v);
    a.clear();
    b.clear();
    return count;
}

int main(){
    int arr[] = {5,1,3,0,4,9,6};
    // int arr[] = {5, 1, 8, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr+n);
    // for(int i = 0; i < n-1; i++){
    //     for(int j = i+1; j < n; j++){
    //         if(v[i] > v[j]) count++;
    //     }
    // }
    cout<<mergeSort(v)<<endl;
}