// implement stack using queue
// in queue ww have front and in stack we have top
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Stack
{
    queue<int> q;

public:
    void push(int x)
    {
        int s = q.size();
        q.push(x);
        for (int i = 0; i < s; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    int Pop()
    {
        int n = q.front();
        q.pop();
        return n;
    }
    int Top()
    {
        return q.front();
    }
    int Size()
    {
        return q.size();
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout << "Top of the stack: " << s.Top() << endl;
    cout << "Size of the stack before removing element: " << s.Size() << endl;
    cout << "The deleted element is: " << s.Pop() << endl;
    cout << "Top of the stack after removing element: " << s.Top() << endl;
    cout << "Size of the stack after removing element: " << s.Size();
    return 0;
}

#include<iostream>
#include<queue>
using namespace std;
class Stack
{
    queue<int> q;
public:
    void Push(int data)
    {
        int s=q.size();
        q.push(data);
        for(int i=0;i<s;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    int Top()
    {
        return q.front();
    }
    int Pop()
    {
        int ele=q.front();
        q.pop();
        return ele;
    }
    int Size()
    {
        return q.size();
    }
};
int main()
{
    Stack s;
    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Push(40);
    s.Push(50);
    cout << "Top of the stack: " << s.Top() << endl;
    cout << "Size of the stack before removing element: " << s.Size() << endl;
    cout << "The deleted element is: " << s.Pop() << endl;
    cout << "Top of the stack after removing element: " << s.Top() << endl;
    cout << "Size of the stack after removing element: " << s.Size();
}

#include<iostream>
#include<queue>
using namespace std;

class Stack
{
    queue<int> q;
public:
    void Push(int data)
    {
        q.push(data);
        for(int i=0;i<q.size()-1;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    int Pop()
    {
        int ele=q.front();
        q.pop();
        return ele;
    }
    int Top()
    {
        return q.front();
    }
    int Size()
    {
        return q.size();
    }
};

int main()
{
    Stack s;
    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Push(40);
    cout<<s.Pop()<<endl;
    cout<<s.Top()<<endl;
    cout<<s.Size()<<endl;
    cout<<s.Pop()<<endl;
    s.Push(100);
    cout<<s.Top()<<endl;
    cout<<s.Size()<<endl;
}*/

#include <iostream>
#include <queue>
using namespace std;
class stack
{
public:
    queue<int> q;
    int front;
    int rear;
    int top;
    int qsize = 0;
    void Push(int new_data)
    {
        q.push(new_data);
        qsize++;
        int siz = q.size();
        for (int i = 0; i < q.size() - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    int Pop()
    {
        int ele = q.front();
        q.pop();
        qsize--;
        return ele;
    }
    int Size()
    {
        cout<<"the size of the queue is ->"<<qsize<<endl;
        return q.size();
    }

    int Top()
    {
        return q.front();
    }
};
int main()
{
    stack s;
    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Push(40);
    cout << s.Pop() << endl;
    cout << s.Top() << endl;
    cout << s.Size() << endl;
    cout << s.Pop() << endl;
    s.Push(100);
    cout << s.Top() << endl;
    cout << s.Size() << endl;
}