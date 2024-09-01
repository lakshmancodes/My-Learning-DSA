// stack operations using array
/*
#include<iostream>
using namespace std;

class Stack
{
    int top;
    int size;
    int *arr;
public:
    Stack()
    {
        top=-1;
        size=10;
        arr= new int[size];
    }
    void push(int data)
    {
        top++;
        arr[top]=data;
    }
    int Pop()
    {
        int ele=arr[top];
        top--;
        return ele;
    }
    int Top()
    {
        return arr[top];
    }
    int Size()
    {
        return top+1;
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
    cout<<s.Top()<<endl;
    cout<<s.Size()<<endl;
    cout<<s.Pop()<<endl;
    cout<<s.Size()<<endl;
    cout<<s.Top();
}

// stack operations using linkedlist

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};
class linkedlist
{
public:
    Node *top;
    int size;
    linkedlist()
    {
        top = NULL;
        size = 0;
    }
    void push(int data)
    {
        Node *new_node = new Node(data);
        new_node->next = top;
        top = new_node;
        size++;
    }
    int Pop()
    {
        int ele = top->data;
        Node *temp = top;
        top = top->next;
        delete temp;
        size--;
        return ele;
    }
    int Top()
    {
        return top->data;
    }
    int Size()
    {
        return size;
    }
};
int main()
{
    linkedlist s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout << s.Top() << endl;
    cout << s.Size() << endl;
    cout << s.Pop() << endl;
    cout << s.Size() << endl;
    cout << s.Top();
}
// stack using queue

#include <iostream>
#include <queue>
using namespace std;
struct Stack
{
    int size = 0;
    queue<int> q;
    void Push(int data)
    {
        q.push(data);
        size++;
        for (int i = 0; i < q.size() - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    int Pop()
    {
        int ele=q.front();
        q.pop();
        size--;
        return ele;
    }
    int Size()
    {
        return size;
    }
    int Top()
    {
        return q.front();
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
    cout << s.Top() << endl;
    cout << s.Size() << endl;
    cout << s.Pop() << endl;
    cout << s.Size() << endl;
    cout << s.Top();
    return 0;
}

// MINSTACK Brute Force approach

#include <iostream>
#include <map>
#include<stack>
using namespace std;
class Stack
{
public:
    void Push(int x)
    {
        int min;
        stack< pair<int, int>> st;
        if (st.empty())
        {
            min = x;
        }
        else
        {
            min= std::min(st.top().second,x);
        }
        st.push({x,min});
    }

};
int main()
{
    Stack s;
    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Push(40);
}

//minstack optimal approach

#include<iostream>
#include<stack>
using namespace std;
class Stack
{
public:
    long long mini;
    stack<int> st;

    void push(int data)
    {
        long long val=data;
        if(st.empty())
        {
            st.push(data);
            mini=data;
        }
        else
        {
            if(mini>st.top())
            {
                st.push((2*val*1ll)-mini);
                mini=val;
            }
            else
            {
                st.push(val);
                mini=val;
            }
        }
    }

    int Pop()
    {
        long long ele= st.top();
        if(st.empty())
        {
            return -1;
        }
        else
        {
            if(mini>st.top())
            {
                mini=
                return mini;
            }
        }
    }

};
int main()
{
    Stack s;
    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Push(40);
}

//minstack optimal approach

#include<iostream>
#include<stack>
using namespace std;
class Stack
{
public:
    long long min;
    stack<long long> st;
    void Push(long long data)
    {
        long long val= data;
        if(st.empty())
        {
            min=val;
            st.push(data);
        }
        else
        {
            if(min>val)
            {
                st.push((2*val*1ll)-min);
                min=val;
            }
            else
            {
                st.push(val);
            }
        }
    }
    int Pop()
    {
        long long ele=st.top();
        if(st.empty())
        {
            return -1;
        }
        else
        {
            if(min>ele)
            {
                int nmin=min;
                min=(2*min*1ll)-ele;
                st.pop();
                return nmin;
            }
            int ele=st.top();
            st.pop();
            return ele;
        }
    }
    int Top()
    {
        int elem=st.top();
        if(st.empty())
        {
            return -1;
        }
        else
        {
            if(min>elem)
            {
                return min;
            }
            return elem;
        }
    }
    int getmin()
    {
        return min;
    }

};
int main()
{
    Stack s;
    s.Push(-2);
    s.Push(0);
    s.Push(3);
    cout<<s.getmin()<<endl;
    cout<<s.Top()<<endl;
    cout<<s.getmin()<<endl;
    s.Push(4);
    cout<<s.Top()<<endl;
    cout<<s.Pop()<<endl;
    cout<<s.Top()<<endl;
    cout<<s.getmin()<<endl;
}


//code for valid Parenthesis

#include<iostream>
#include<stack>
using namespace std;
bool validparen(string a)
{
    for(auto it: a)
    {
        stack<char> st;
        if(it=='(' or it=='[' or it=='{')
        {
           st.push(it);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
            char asd=st.top();
            st.pop();
            if(asd=='(' and it==')' or asd=='{' and it=='}' or asd=='[' and it==']')
            {
                continue;
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}
int main()
{
    string a;
    cout<<"enter the string :";
    cin>>a;
    if(validparen(a)==true)
    {
        cout<<"the string "<<a<<" is a valid string "<<endl;
    }
    else
    {
        cout<<"the string "<<a<<" is a not a valid string "<<endl;
    }
}

//implement queue using arrays
#include<iostream>
using namespace std;
class Queue
{
public:
    int size ;
    int *arr;
    int front;
    int rear;
    int cnt;

    Queue()
    {

    }
    void Push(int data)
    {
        if(cnt<size)
        {
            arr[rear % size]=data;
            cnt++;
            rear++;
        }
        else
        {
            cout<<"the queue is full !"<<endl;
        }

    }

};
int main()
{
    Queue s;
    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Push(40);
    s.Push(50);
    cout << s.Top() << endl;
    cout << s.Size() << endl;
    cout << s.Pop() << endl;
    cout << s.Size() << endl;
    cout << s.Top();
    return 0;
}
//reverse
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int temp=a;

    int rev=0;
    while(a>0)
    {
        int last=a%10;
        a=a/10;
        rev=(rev*10)+last;
    }
    cout<<rev<<endl;
    if(rev==temp)
    {
        cout<<"PALINDROME"<<endl;
    }
    else
    {
        cout<<"not a palindrome"<<endl;
    }

}

// IMPLEMENT QUEUE USING ARRAYS

#include <iostream>
using namespace std;
class Queue
{
public:
    int front;
    int count;
    int rear;
    int size;
    int *arr;
    Queue()
    {
        count = 0;
        size = 5;
        arr = new int[size];
        rear=0;
        front=0;
    }
    void push(int data)
    {
        if(count<size)
        {
            arr[front%size]=data;
            count++;
            front++;
        }
        else
        {
            cout<<"SORRY QUEUE is FULL"<<endl;
        }
    }
    int Pop()
    {
        int ele= arr[rear];
        rear++;
        count--;
        return ele;
    }
    int Size()
    {
        return count;
    }
    int Top()
    {
        return arr[rear];
    }
    void printall()
    {
        for(int i=0;i<count;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    Queue q;
    q.push(10);
    q.push(50);
    q.push(100);
    q.push(150);
    q.push(200);
   
  
    cout << "TOP :"<<q.Top() << endl;
    cout << "POP :"<<q.Pop() << endl;
    cout << "SIZE :" <<q.Size() << endl;

    q.push(1000);
    cout <<"SIZE:"<< q.Size() << endl;
    cout <<"TOP :"<< q.Top() << endl;
    q.printall();
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    int ssum=(n*(n+1))/2;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"missing num :"<<ssum-sum<<endl;
}
#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=arr[j];
            }
        }
        //swap
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-2;j>=i;j--)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //selectionsort(arr,n);
    bubblesort(arr,n);
    cout<<"the new array after sorting "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;

int pascaltri(int n,int m)
{
    int res=1;
    for(int i=0;i<m;i++)
    {
        res=res * (n-i);
        res=res / (i+1);
    }
    return res;
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<pascaltri(n-1,m-1);
}

#include<iostream>
using namespace std;
int pascalval(int n,int m)
{
    int res=1;
    for(int i=0;i<m;i++)
    {
        res=res *(n-i);
        res=res/(i+1);
    }
    return res;
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<pascalval(n-1,m-1);
}*/
//better way to print a pascal triangle

#include<iostream>
using namespace std;
int funcr(int n,int r)
{
    int res=1;
    for(int i=0;i<r;i++)
    {
        res=res *(n-i);
        res=res /(i+1);
    }
    return res;
}
void funcrr(int n)
{
    int res=1;
    cout<<res<<" ";
    for(int i=1;i<=n;i++)
    {
        res=res *(n-i);
        res=res /(i+1);
        cout<<res<<" ";
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    /*for(int i=1;i<=n;i++)
    {
        cout<<funcr(n-1,i-1)<<" ";
    }*/
    funcrr(n-1);
    return 0;
}