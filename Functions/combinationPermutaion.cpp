#include<iostream>
using namespace std;
// int main(){
//     int n,r;
//     cin>>n>>r;
//     int nfact=1;
//     for(int i=2; i<=n; i++){
//         nfact*=i;
//     }
//     int rfact=1;
//     for(int i=2; i<=r; i++){
//         rfact*=i;
//     }
//     int nrfact=1;
//     for(int i=1; i<=n-r; i++){
//         nrfact*=i;
//     }
//     int ncr = nfact/(rfact * nrfact);
//     cout<<ncr;
// }

int fact(int x){
    int f=1;
    for(int i=2; i<=x; i++){
        f *= i;
    }
    return f;
}

int combination(int n, int r){
    int ncr = fact(n)/(fact(r)*fact(n-r)); //the fact() fucntion here gets called and the values of n and r is calculated
    return ncr;
}

int permutation(int n, int r){
    int npr = fact(n)/fact(n-r);
    return npr;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int r;
    cout<<"Enter r: ";
    cin>>r;
    int ncr = combination(n,r);
    int npr = permutation(n,r);
    cout<<ncr<<endl<<npr;
}