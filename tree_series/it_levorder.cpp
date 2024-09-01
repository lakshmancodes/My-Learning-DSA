#include<iostream>
#include<stack>
#include<vector>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node  *right;
    Node(int val)
    {
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
vector<int> itpreorder(Node *root)
{
    vector<int> res;
    stack<Node *> st;
    if(root==nullptr)
    {
        return res;
    }
    st.push(root);
    while(!st.empty())
    {
        Node *newnode=st.top();
        st.pop();
        if(newnode->right!=nullptr)
        {
            st.push(newnode->right);
        }
        if(newnode->left!=nullptr)
        {
            st.push(newnode->left);
        }
        res.push_back(newnode->data);
    }

    return res;
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
    vector<int> res= itpreorder(root);
    for(int it: res)
    {
        cout<<it<<" ";
    }
    return 0;
}