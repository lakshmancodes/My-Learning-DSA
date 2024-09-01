/*#include <iostream>
#include <map>
using namespace std;
int maxsubarray(int arr[], int size, int target)
{
    /*map<int,int> mpp;
    int sum=0;
    int len=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
        if(sum==target)
        {
            len=max(len,i+1);
        }
        int diff= sum-target;
        if(mpp.find(diff)!=mpp.end())
        {
            int mlen= i-mpp[diff];
            len=max(len,mlen);
        }
        mpp
    }

    map<int, int> mpp;
    int mlen = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        if (sum == target)
        {
            mlen = max(mlen, i + 1);
        }
        int diff = sum - target;
        if (mpp.find(diff) != mpp.end())
        {
            mlen = max(mlen, i - mpp[diff]);
        }
        mpp[sum]=i;
    }
    return mlen;
}
int main()
{
    int arr[10] = {10, 5, 2, 7, 1, 9};
    int arr1[3]={-1, 2, 3};
    int size = 6;
    int target;
    cout << "enter the target :" << endl;
    cin >> target;
    cout<<maxsubarray(arr, size, target)<<" ";
}

#include <iostream>
#include <map>
using namespace std;
int maxsubarray(int arr[], int n, int target)
{
    int sum=0;
    int maxlen=0;
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum==target)
        {
            maxlen=max(maxlen,i+1);
        }
        int diff=sum-target;
        if(mpp.find(diff)!=mpp.end())
        {
            maxlen=max(maxlen,i-mpp[diff]);
        }
        //if the array contains zero we are not supposed to add the map so
        if(mpp.find(sum)==mpp.end())
        {
            mpp[sum]=i;
        }
    }
    return maxlen;
}
int main()
{
    int n = 12;
    int arr[12] = {1, 2, 3, -1, 0, 1, 1, 1, 1, 4, 2, 3};
    int target;
    cin>>target;
    cout<<maxsubarray(arr, n, target);
}

//maxsubarray using two pointer approach

#include<iostream>
using namespace std;

int maxsubarray(int arr[],int n,int target)
{
    int right,left;
    right=0;
    left=0;
    int mlen=0;
    int sum=arr[0];
    while(right<n)
    {
        while(left<=right && sum>target)
        {
            sum=sum-arr[left];
            left++;
        }
        if(sum==target)
        {
            mlen=max(mlen,right-left+1);
        }
        right++;
        sum=sum+arr[right];
    }
    return mlen;
}*/

#include <iostream>
#include <map>
using namespace std;
/*
int maxsubarray(int arr[], int n, int target)
{
    int maxlen = 0;
    int sum = 0;
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum == target)
        {
            maxlen = max(maxlen, i + 1);
        }
        int diff = sum - target;
        if (mpp.find(diff) != mpp.end())
        {
            maxlen = max(maxlen, i - mpp[diff]);
        }
        if (mpp.find(sum) == mpp.end())
        {
            mpp[sum] = i;
        }

    }
    return maxlen;
}
int maxsubarray(int arr[],int n,int target)
{
    int left=0;
    int right=0;
    int sum=arr[0];
    int maxlen=0;
    while(right<n)
    {
        while(left<=right && sum>target)
        {
            sum=sum-arr[left];
            left++;
        }
        if(sum==target)
        {
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        sum=sum+arr[right];
    }
    return maxlen;
}
int maxsubarray(int arr[], int n, int target)
{
    int left = 0;
    int right = 0;
    int sum = arr[0];
    int maxlen = 0;
    while (right < n)
    {
        while (left <= right && sum > target)
        {
            sum = sum - arr[left];
            left++;
        }
        if (sum == target)
        {
            maxlen = max(maxlen, right - left + 1);
        }
        right++;
        sum = sum + arr[right];
    }
    return maxlen;
}
int main()
{

    int n = 12;
    int arr[12] = {1, 2, 3, 0, 0, 1, 1, 1, 1, 4, 2, 3};
    int target;
    cin >> target;
    cout << maxsubarray(arr, n, target);
}*/

#include <iostream>
#include <vector>
using namespace std;
void makerow(vector<vector<int>> &matr,int n,int col)
{
    for(int i=0;i<n;i++)
    {
        matr[col][i]=-1;
    }
    return;
}
void makecol(vector<vector<int>> & matr,int m,int row)
{
    for(int i=0;i<m;i++)
    {
        matr[i][row]=-1;
    }
}
void setmatrzero(vector<vector<int>> & matr,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matr[i][j]==0)
            {
                makerow(matr,n,i);
                makecol(matr,m,j);
            }
        }
    }
}
int main()
{
    vector<vector<int>> matr;
    int n, m;
    cout << "enter the no.of rows :" << endl;
    cin >> n;
    cout << "enter the num of columns:" << endl;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int ele;
            cin>>ele;
            matr[i][j]=ele;
        }
    }
    setmatrzero(matr,n,m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<matr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}