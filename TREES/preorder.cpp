#include<iostream>
#include<vector>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int new_val){
        data=new_val;
        left=nullptr;
        right=nullptr;
    }
};
void preorder(Node* root,vector<int> &ans){
    if(root==nullptr)
    {
        return;
    }
    ans.push_back(root->data);
    preorder(root->left,ans);
    preorder(root->right,ans);
}
vector<int> pre_order(Node *root)
{
    vector<int> arr;
    preorder(root,arr);
    return arr;
}
int main()
{
    Node* root = new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    vector<int> ans= pre_order(root);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}