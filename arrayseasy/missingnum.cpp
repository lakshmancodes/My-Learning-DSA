//there are different methods to find  a missing number in a sorted set of array elements

//brute force approach
/*
#include<iostream>
#include<vector>
using namespace std;
int findmissing(vector<int> & arr)
{
    for(int i=1;i<=arr.size();i++)
    {
        int flag=0;
        for(int j=0;j<arr.size();j++)
        {
            if(arr[j]==i)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    vector<int> arr ={1,4,5,2};
    cout<<findmissing(arr);
}
//better approach using hashing 

#include<iostream>
#include<vector>
using namespace std;
int findmissing(vector<int> &arr,int n)
{
    vector<int> hash(n,0);
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(hash[i]==0)
        {
            return i;
        }
    }
    return 0;

}
int main()
{
    vector<int> arr ={1,4,5,2};
    int n=arr.size();
    cout<<findmissing(arr,n);
}

//optimal approach using sum

#include<iostream>
using namespace std;
int main()
{
    int arr[4]={1,4,5,2};
    int sum=0;
    int n=5;
    int ssum=0;
    sum=(n*(n+1))/2;
    for(int i=0;i<n;i++)
    {
        ssum=ssum+arr[i];
    }
    int num=sum-ssum;
    cout<<num<<" is the missing number"<<endl;
}

//promax optimal approach is using xor opertion
#include<iostream>
using namespace std;
int main()
{
    int arr[4]={0,1,2,4};
    int xor1=0;
    int xor2=0;
    for(int i=0;i<4;i++)
    {
        xor1=xor1 ^i;
        xor2=xor2 ^ arr[i];
    }
    xor1=xor1^4;
    int result=xor1 ^ xor2;
    cout<<result<<" is the missing number";
}


#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,6,8,9,10};
    for(int i=1;i<=10;i++)
    {
        int flag=0;
        for(int j=0;j<10;j++)
        {
            if(arr[j]==i)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<i<<endl;
        }
    }

}

#include<iostream>
#include<vector>
using namespace std;
void missingnum(vector<int> &arr,int n)
{
    int sizee=0;
    vector<int> result;
    for(int i=0;i<arr.size();i++)
    {
        sizee=max(sizee,arr[i]);
    }
    vector<int> hash(sizee,0);
    for(int i=0;i<arr.size();i++)
    {
        hash[arr[i]]++;
    }
    for(int i=0;i<sizee;i++)
    {
        if(hash[i]==0)
        {
            result.push_back(i);
        }
    }
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return;

}
int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    missingnum(arr,n);
}*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> missingnum(int arr[],int n)
{
    vector<int> res;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
    }
    int xor1=0;
    int xor2=0;
    for(int i=0;i<maxi;i++)
    {
        xor1=xor1 ^ (i+1);
        xor2= xor2 ^ arr[i];
    }
    xor1= xor1^n;
    int ans= xor1 ^ xor2;
    res.push_back(ans);
    return res;

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
    vector<int> ans= missingnum(arr,n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}