#include <iostream>
#include <vector>
#include <stack>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
vector<int> itpreorder(Node *root)
{
    stack<Node*> st;
    vector<int> ans;
    if(root==nullptr)
    {
        return ans;
    }
    st.push(root);
    while(!st.empty())
    {
        Node *newnode= st.top();
        st.pop();
        if(newnode->right!=nullptr)
        {
            st.push(newnode->right);
        }
        if(newnode->left!=nullptr)
        {
            st.push(newnode->left);
        }
    }
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    vector<int> res = itpreorder(root);
}