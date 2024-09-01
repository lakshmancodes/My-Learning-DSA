/*#include <iostream>
#include <stack>
using namespace std;
class Stack
{
public:
    stack<pair<int, int>> st;
    void Push(int data)
    {
        int mini;
        if (st.empty())
        {
            mini = data;
        }
        else
        {
            mini = std::min(st.top().second, data);
        }
        st.push({data, mini});
    }
    int minstack()
    {
        return st.top().second;
    }
};

int main()
{
    Stack s;
    s.Push(10);
    s.Push(20);
    s.Push(100);
    s.Push(5);
    s.Push(20);
    cout<<s.minstack()<<endl;
}
class Stack
{
public:
    stack<int> st;
    int mini = INT_MAX;
    void Push(int x)
    {
        if (st.empty())
        {
            st.push(x);
            mini = x;
        }
        else
        {
            if (st.top() > mini)
            {
                st.push(x);
            }
            else
            {
                st.push(2 * x - mini);
                mini = x;
            }
        }
    }
    int Pop()
    {
        if (st.top() < mini)
        {
            int nmini = mini;
            mini = ((2 * mini) - st.top());
            st.pop();
            return nmini;
        }
        else
        {
            int ele = st.top();
            st.pop();
            return ele;
        }
    }
    int minstack()
    {
        return mini;
    }
};
int main()
{
    Stack s;
    s.Push(10);
    s.Push(20);
    s.Push(100);
    s.Push(5);
    s.Push(20);
    cout << s.minstack() << endl;
}

#include <iostream>
#include <stack>
using namespace std;
class Stack
{
public:
    long mini = INT_MAX;
    stack<long long> st;
    void Push(int data)
    {
        if (st.empty())
        {
            st.push(data);
            mini = data;
        }
        else
        {
            if (st.top() < mini)
            {
                st.push((2 * 1ll * data) - mini);
                mini = data;
            }
            st.push(data);
        }
    }
    int getmin()
    {
        return mini;
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
            return st.top();
        }
    }
    int Pop()
    {
        int ele=st.top();
        if(st.top()<mini)
        {
            int re=mini;
            mini= (2*mini*1ll)-ele;
            st.pop();
            return re;
        }
        else
        {
            st.pop();
            return ele;
        }
    }
};
int main()
{
    Stack s;
    s.Push(-2);
    s.Push(0);
    s.Push(3);
    cout << s.getmin() << endl;
    cout << s.Top() << endl;
    cout << s.getmin() << endl;
    s.Push(4);
    cout << s.Top() << endl;
    cout << s.Pop() << endl;
    cout << s.Top() << endl;
    cout << s.getmin() << endl;
}

#include<iostream>
#include<map>
using namespace std;
int maxsubarray(int arr[],int n,int target)
{
    map<int,int> mpp;
    int sum=0;
    int mlen=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum==target)
        {
            mlen=max(mlen,i+1);
        }
        int diff=sum-target;
        if(mpp.find(diff)!=mpp.end())
        {
            mlen=max(mlen,i-mpp[diff]);
        }
        //if the sum is aldready there then don't reupdate
        if(mpp.find(sum)!=mpp.end())
        {
            mpp[sum]=i;
        }

    }
    return mlen;
}
int main()
{
    int arr[6]={10, 5, 2, 7, 1, 9};
    int tar;
    cin>>tar;
    cout<<"maxsubarray: "<<maxsubarray(arr,6,tar);
    return 0;
}*/

#include<iostream>
using namespace std;
bool ls(int arr[],int n)
{
    bool ans=false;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==n)
        {
            ans=true;
        }
    }
    return ans;
}
void longseq(int arr[], int n)
{
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        int cnt=1;
        int x=arr[i];
        while(ls(arr,x+1)==true)
        {
            x=x+1;
            cnt++;
            maxi=max(cnt,maxi);
        }
    }
    cout<<maxi<<endl;
    return;
}
int main()
{
    int arr[10]={1,2,2,1,1,1,3,4,5,6};
    longseq(arr,10);
    return 0;
}