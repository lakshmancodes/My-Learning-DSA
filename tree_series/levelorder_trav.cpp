/*#include<iostream>
#include<vector>
#include<queue>
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
void levelorder(vector<vector<int>>arr,Node*root)
{
    vector<vector<int>> smallds;
    queue<Node*> q;
    if(root==nullptr)
    {
        return;
    }
    q.push(root);
    int size=q.size();
    vector<int> level;
    while(!q.empty())
    {

        for(int i=0;i<size;i++)
        {
            Node *new_node= q.front();
            q.pop();
            if(new_node->left!=nullptr)
            {
                q.push(new_node->left);
            }
            else if(new_node->right!=nullptr)
            {
                q.push(new_node->right);
            }
            level.push_back(new_node->data);
        }
    }
    smallds.push_back(level);
}
vector<vector<int>> levelorder(Node *root)
{
    vector<vector<int>> res;
    levelorder(res,root);
}
void printVector(const vector<int>& vec) {
    // Iterate through the
    // vector and print each element
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
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
    vector<vector<int>> res=levelorder(root);
    for (const vector<int>& level : res)
    {
        printVector(level);
    }
}
#include <iostream>
#include <vector>
#include <queue>
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
vector<vector<int>> levelorder(Node *root)
{
    vector<vector<int>> ans;
    queue<Node*> q;
    if(root==nullptr)
    {
        return ans;
    }
    q.push(root);
    while(!q.empty())
    {
        vector<int> temp;
        int size= q.size();
        for(int i=0;i<size;i++)
        {
            Node *newnode = q.front();
            q.pop();
            if(newnode->left!=nullptr)
            {
                q.push(newnode->left);
            }
            if(newnode->right!=nullptr)
            {
                q.push(newnode->right);
            }
            temp.push_back(newnode->data);
        }
        ans.push_back(temp);
    }
    return ans;
}
void printvec(vector<int> &arr)
{
    for(auto it : arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
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
    vector<vector<int>> ress = levelorder(root);
    //display the output
    for( vector<int> level : ress)
    {
        printvec(level);
    }
}

#include <iostream>
#include <vector>
#include <queue>
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
vector<vector<int>> levelorder(Node *root)
{
    vector<vector<int>> res;
    queue<Node *> q;
    q.push(root);
    if (root == nullptr)
    {
        return res;
    }
    while (!q.empty())
    {
        vector<int> ans;
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *newnode = q.front();
            q.pop();
            if (newnode->left != nullptr)
            {
                q.push(root->left);
            }
            if (newnode->right != nullptr)
            {
                q.push(root->right);
            }
            ans.push_back(root->data);
        }
        res.push_back(ans);
    }
    return res;
}
void printvector(vector<int> &arr)
{
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
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
    vector<vector<int>> res = levelorder(root);
    for (vector<int> ress : res)
    {
        printvector(ress);
    }
    return 0;
}*/
#include <iostream>
#include <queue>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        left = nullptr;
        right = nullptr;
        data = val;
    }
};
vector<vector<int>> levelorder(Node *root)
{
    vector<vector<int>> res;
    if (root == nullptr)
    {
        return;
    }
    queue<Node *> q;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> sub;
        for (int i = 0; i < size; i++)
        {
            Node *newnode = q.front();
            q.pop();
            if (newnode->left != nullptr)
            {
                q.push(newnode->left);
            }
            if (newnode->right!=nullptr)
            {
                q.push(newnode->right);
            }
            sub.push_back(newnode->data);
        }
        res.push_back(sub);
    }
    return res;
}
void printvect(vector<int> ans)
{
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
    return;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    vector<vector<int>> res = levelorder(root);
    for(vector<int> an :res)
    {
        printvect(an);
    }
    return 0;
}