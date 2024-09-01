/*#include<iostream>
using namespace std;
int longsubstrbrute(string s)
{
    int n=s.size();
    int maxi=0;
    string res;
    for(int i=0;i<n;i++)
    {
        int hash[256]={0};
        res="";
        for(int j=i;j<n;j++)
        {
            res+=s[j];
            if(hash[s[j]]==1)
            {
                break;
            }
            maxi=max(maxi,j-i+1);
            hash[s[j]]++;
        }
        
    }
    cout<<res<<endl;
    return maxi;
}
int main()
{
    string s;
    cin>>s;
    cout<<longsubstrbrute(s);
}

#include<iostream>
using namespace std;
int longsub(string a)
{
    int n=a.size();
    int maxi=0;
    string longsubstr;
    for(int i=0;i<n;i++)
    {
        int hash[256]={0};
        string res;
        for(int j=i;j<n;j++)
        {
            if(hash[a[j]]>0)
            {
                break;
            }
            res+=a[j];
            hash[a[j]]++;
            if(res.size()>longsubstr.size())
            {
                longsubstr=res;
            }
            maxi=max(maxi,j-i+1);
            
        }
    }
    cout<<longsubstr<<endl;
    return maxi;
}
int main()
{
    string a;
    cin>>a;
    cout<<longsub(a);
}*/

#include<iostream>
using namespace std;
int longsub(string a)
{
    int n= a.size();
    string longsubstr;
    int maxi=0;
    
    for(int i=0;i<n;i++)
    {
        int hash[256]={0};
        string res;
        for(int j=i;j<n;j++)
        {
            if(hash[a[j]]>0)
            {
                break;
            }
            res+=a[j];
            hash[a[j]]++;
            if(res.size()>longsubstr.size())
            {
                longsubstr=res;
            }
            maxi=max(maxi,j-i+1);
        }
    }
    cout<<longsubstr<<endl;
    return maxi;
}
int main()
{
    string a;
    cin>>a;
    cout<<longsub(a);
    return 0;
}