
//bruteforce approach to find 
/*#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int sum;
    cin>>sum;
    for(int i=0;i<5;i++)
    {
        for(int j=1;j<5;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}

#include<iostream>
#include<map>
using namespace std;
int main()
{
    int arr[5]={1,4,2,3,5};
    map<int,int> mpp;
    int n=5;
    int tar;
    cin>>tar;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==tar)
        {
            cout<<i<<endl;
            cnt++;
        }
        else
        {
            int diff= tar-arr[i];
            if(mpp.find(diff)!=mpp.end())
            {
                cout<<i<<" "<<diff<<endl;
                cnt++;
            }
            mpp[arr[i]]=i;
            
        }
    }
    if(cnt==0)
        {
            cout<<" -1, -1"<<endl;
        }

}
/*void bettertwosum(int arr[], int n, int target)
{
    map<int, int> mpp;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int complement = target - num;
        if (mpp.find(complement) != mpp.end())
        {
            cout << mpp[complement] << " " << i << endl;
            cnt++;
        }
        mpp[arr[i]] = i;
    }
    if (cnt == 0)
    {
        cout << "better -> -1,-1" << endl;
    }
}*/

#include<iostream>
using namespace std;
int main()
{

}
