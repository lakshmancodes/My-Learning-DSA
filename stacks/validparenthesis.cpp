/*#include<iostream>
#include<stack>
using namespace std;
bool validparenthesis(string a)
{
    stack<char> s;

    for(auto it: a)
    {
        if(it=='('||it=='['||it=='{')
        {
            s.push(it);
        }
        else
        {
            if(s.empty())
            {
                return false;
            }
            char val=s.top();
            s.pop();
            if((val=='(' and it==')')or (val=='[' and it==']')or (val=='{' and it=='}'))
            {
                continue;
            }
            else
            {
                return false;
            }
        }
    }

    return s.empty();
}
int main()
{
    string a="()[{}()]";
    string b="{)({[[{)()}]]})}";
    if(validparenthesis(b))
    {
        cout<<" the string "<<b <<" is a valid string"<<endl;
    }
    else
    {
        cout<<" the string "<<b <<" is not a valid string"<<endl;
    }
}

#include<iostream>
#include<stack>
using namespace std;
bool checkval(string a)
{
    stack<char> s;
    for(auto it:a)
    {
        if(it=='('||it=='['||it=='{')
        {
            s.push(it);
        }
        else
        {
            if(s.empty())
            {
                return false;
            }
            char val= s.top();
            s.pop();
            if(val==')'&& it=='(' or val==']' && it=='[' or val=='}' && val=='{' )
            {
                continue;
            }
        }
    }
    return s.empty();
}
int main()
{
    string a;
    cout<<"ENTER THE STRING :"<<endl;
    cin>> a;
    if(checkval(a))
    {
        cout<<a<<" is a valid string "<<endl;
    }
    else
    {
        cout<<"Not a valid string"<<endl;
    }

}

#include<iostream>
using namespace std;
void anagram(string a,string b)
{
    
}
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    anagram(a,b);
}

#include<iostream>
using namespace std;
int carrys(int a ,int b)
{
    int cnt=0;
    int carry=0;
    while(a>0 || b>0)
    {
        int c1=a%10;
        int c2=b%10;
        
        int sum=c1+c2+carry;
        if(sum>9)
        {
            cnt++;
            carry=1;
        }
        else
        {
            carry=0;
        }
        a=a/10;
        b=b/10;
    }
    return cnt; 
}
int main()
{
    int a,b;
    cout<<"input a:";
    cin>>a;
    cout<<"\ninput b :";
    cin>>b;
    cout<<carrys(a,b);
    return 0;
}*/
#include<iostream>
#include<stack>
using namespace std;
bool validparenth(string a)
{
    stack<char> st;
    for(auto it : a)
    {
        if(it=='(' ||it=='{'||it=='[')
        {
            st.push(it);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
            else
            {
                char ab=st.top();
                st.pop();
                if(ab=='(' && it==')' || ab=='{' && it=='}' || ab=='[' && it==']')
                {
                    continue;
                }
            }
        }

    }
    return st.empty();
}
int main()
{
    string a;
    cout<<"enter a string "<<endl;
    cin>>a;
    bool res= validparenth(a);
    if(res==true)
    {
        cout<<"it is a valid string "<<a;
    }
    else
    {
        cout<<"it is not a valid string"<<a;
    }
}
