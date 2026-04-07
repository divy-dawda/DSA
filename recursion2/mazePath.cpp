#include<iostream>
using namespace std;
int maze(int sc,int sr,int ec,int er){ // this uses 4 variables
    if(sc > ec || sr > er) return 0;
    if(sc == ec && sr == er) return 1;
    int rightWays = maze(sc + 1, sr, ec, er); 
    int downWays = maze(sc, sr + 1, ec, er);
    return rightWays + downWays;
}

int maze2(int sc, int sr){ // this only uses 2 variables so this function is better
    if(sc < 1 || sr < 1) return 0;
    if(sc == 1 && sr == 1) return 1;
    int rightWays = maze2(sc - 1, sr);
    int downWays = maze2(sc, sr - 1);
    return rightWays + downWays;
}

void pathway(int sc,int sr,/*int ec,int er,*/ string s){ // to print pathways
    // if(sc > ec || sr > er) return;
    // if(sc == ec && sr == er){
    //     cout<<s<<endl;
    //     return;
    // }
    // pathway(sc + 1, sr, ec, er, s + 'D');
    // pathway(sc, sr + 1, ec, er, s + 'R');
    if(sc < 1 || sr < 1) return;
    if(sc == 1 && sr == 1){
        cout<<s<<endl;
        return;
    }
    pathway(sc - 1, sr, s + 'D');
    pathway(sc, sr - 1, s + 'R');
}

int main(){
    cout<<maze2(3,3)<<endl;
    pathway(3,3,"");
}