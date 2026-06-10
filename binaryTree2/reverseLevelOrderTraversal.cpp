#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Node{
    public:
        int val;
        Node *left, *right;
        Node(int x){
            val = x;
            left = right = nullptr;
        }
};
vector<vector<int>> reverseLevelOrderTraversal(Node *root) {
    //code Here
    if(root == NULL) return {};
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty()){
            int n = q.size();
            vector<int> temp;
            while(n){
                Node* node = q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->right) q.push(node->right);
                if(node->left) q.push(node->left);
                n--;
            }
            ans.push_back(temp);
        }
    return ans;
}
int main() {
    Node *root = nullptr;
    
    root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<vector<int>> ans = reverseLevelOrderTraversal(root);
    for(auto i: ans){
        cout<<"[";
        for(auto j:i){
            cout<<j<<" ";
        }
        cout << "]\n";
    }
}