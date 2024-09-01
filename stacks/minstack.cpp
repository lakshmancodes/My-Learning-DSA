/*#include <iostream>
#include <stack>
using namespace std;
class minstack
{
public:
    stack<pair<int,int>> st;
    void Push(int x)
    {
        int min;
        if (st.empty())
        {
            min = x;
        }
        else
        {
            min = std::min(st.top().second, x);
        }
        st.push({x, min});
    }
};
int main()
{
    minstack s;
    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Push(5);
}
#include <iostream>
#include <stack>
using namespace std;

class Minstack
{
    stack<long> st;
    long long mini;

public:
    Minstack()
    {
        while (st.empty() == false)
        {
            st.pop();
            mini = INT_MAX;
        }
    }

    void Push(int data)
    {
        long long val=data;
        if(st.empty()==true)
        {
            mini=val;
            st.push(data);
        }
        else
        {
            if(st.top()<mini)
            {
                st.push((2*val)-mini);
                mini=data;
            }
            else
            {
                st.push(data);
                mini=data;
            }
        }
    }
    int Pop()
    {
        long long ele=st.top();
        st.pop();
        if(mini>ele)
        {
            mini= (2*mini)-ele;
            return mini;
        }
    }
    int Top()
    {
        if(st.empty())
        {
            return -1;
        }
        long long ele=st.top();
        if(ele<mini)
        {
            return ele;
        }
        return mini;
    }
    int getmin()
    {
        return mini;
    }
};
int main()
{
    Minstack s;
    s.Push(-2);
    s.Push(0);
    s.Push(-3);
    cout<<s.getmin()<<endl;
    cout<<s.Top()<<endl;
    cout<<s.getmin()<<endl;
    s.Push(4);
    cout<<s.Pop()<<endl;
    cout<<s.getmin()<<endl;
}*/

#include<iostream>
#include<stack>
using namespace std;
class Minstack
{
    stack<long> st;
public:
    long long mini;
    void Push(int data)
    {
        long long val=data;
        if(st.empty())
        {
            st.push(data);
            mini=val;
        }
        else
        {
            if(mini>val)
            {
                st.push((2*val*1ll)-mini);
                mini=val;
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
            return -1 ;
        }
        if(ele<mini)
        {
            int nmin=mini;
            mini= ((2*mini)-ele);
            st.pop();
            return nmin;
        }
        int elem=st.top();
        st.pop();
        return elem;
    }
    int Top()
    {
        if(st.empty())
        {
            return -1;
        }
        else
        {
            if(st.top()<mini)
            {
                return mini;
            }
            else
            {
                return st.top();
            }
        }
    }
    int getmin()
    {
        return mini;
    }
};
int main()
{
    Minstack s;
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