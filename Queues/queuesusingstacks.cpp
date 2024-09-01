/*#include <iostream>
#include <stack>
using namespace std;

class Queue
{
    stack<int> input, output;

public:
    void Push(int data)
    {
        while (input.empty() == false)
        {
            output.push(input.top());
            input.pop();
        }
        input.push(data);
        while (!output.empty())
        {
            input.push(output.top());
            output.pop();
        }
    }
    int Pop()
    {
        if (input.empty())
        {
            cout << "Stack is empty";
            exit(0);
        }

        int ele = input.top();
        input.pop();
        return ele;
    }
    int Top()
    {
        if (input.empty())
        {
            cout << "Stack is empty";
            exit(0);
        }
        return input.top();
    }
    int Size()
    {
        if (input.empty())
        {
            cout << "Stack is empty";
            exit(0);
        }
        return input.size();
    }
};
int main()
{
    Queue q;
    q.Push(10);
    q.Push(20);
    q.Push(30);
    q.Push(40);
    q.Push(50);
    cout << q.Top() << endl;
    cout << q.Pop() << endl;
    cout << q.Size() << endl;

    q.Push(100);
    cout << q.Size() << endl;
    cout << q.Top() << endl;
    //q.printall();
}*/

//implement queues using stacks

#include<iostream>
#include<stack>
using namespace std;
class Queue
{
    stack<int> input,output;

public: 
    void Push(int data)
    {
        while(input.empty()==false)
        {
            output.push(input.top());
            input.pop();
        }
        input.push(data);
        while(output.empty()==false)
        {
            input.push(output.top());
            output.pop();
        }
    }
    int Pop()
    {
        int ele=input.top();
        input.pop();
        return ele;
    }
    int Top()
    {
        int ele=input.top();
        return ele;
    }
    int Size()
    {
        return input.size();
    }
    // void printall()
    // {
    //     for(int i=0;i<input.size();i++)
    //     {
    //         cout<<arr.
    //     }
    // }

};

int main()
{
    Queue q;
    q.Push(10);
    q.Push(20);
    q.Push(30);
    q.Push(40);
    q.Push(50);
    cout << q.Top() << endl;
    cout << q.Pop() << endl;
    cout << q.Size() << endl;

    q.Push(100);
    cout << q.Size() << endl;
    cout << q.Top() << endl;
    //q.printall();
    return 0;
}

