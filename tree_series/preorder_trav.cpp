/*#include<iostream>
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
void pre_order(vector<int> & arr,Node *root)
{
    if(root==nullptr)
    {
        return;
    }
    arr.push_back(root->data);
    pre_order(arr,root->left);
    pre_order(arr,root->right);
}
vector<int> pre_order(Node *root)
{
    vector<int> arr;
    pre_order(arr,root);
    return arr;
}
int main()
{
    Node *root = new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    vector<int> result=pre_order(root);
    for(auto it: result)
    {
        cout<<it<<" ";
    }
    return 0;
}*/
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
void preorder(Node *root,vector<int> &arr)
{
    if(root==nullptr)
    {
        return;
    }
    arr.push_back(root->data);
    preorder(root->left,arr);
    preorder(root->right,arr);
}
vector<int> pre_order(Node *root)
{
    vector<int> arr;
    preorder(root,arr);
    return arr;
}
int main()
{
    Node *root = new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left=new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    vector<int> result=pre_order(root);
    for(auto it:result)
    {
        cout<<it<<" ";
    }
    return 0;
}
/*#include<iostream>
#include<vector>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};

void preorder(Node *root,vector<int> ans)
{
    if(root==nullptr)
    {
        return;
    }
    ans.push_back(root->data);
    preorder(root->left,ans);
    preorder(root->right,ans);
}
int main()
{
    Node *root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    vector<int> res;
    preorder(root,res);
    for(auto it: res)
    {
        cout<<it<<" ";
    }
    return 0;
}*/