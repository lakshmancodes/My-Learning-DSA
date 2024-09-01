#include<iostream>
#include<vector>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
void postorder(vector<int> &ress,Node *root)
{
    if(root==nullptr)
    {
        return;
    }
    postorder(ress,root->left);
    postorder(ress,root->right);
    ress.push_back(root->data);
}
vector<int> postorder(Node *root)
{
    vector<int>ress;
    postorder(ress,root);
    return ress;
}
int main()
{
    Node *root = new Node(10);
    root->left= new Node(20);
    root->right= new Node(30);
    root->left->left = new Node(40);
    root->left->right= new Node(50);
    root->right->left=new Node(60);
    vector<int> res=postorder(root);
    for(auto it : res)
    {
        cout<<it<<" ";
    }
    return 0;
}