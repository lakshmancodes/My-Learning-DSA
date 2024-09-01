//rotate an array
/*
#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> &arr,int k,int l)
{
    int k=k%l;
    vector<int> temp;
    for(int i=l-k;i<l;i++)
    {
        temp.push_back(arr[i]);
    }
    for(int i=0;i<l-k;i++)
    {
        temp.push_back(arr[i]);
    }
    for(int i=0;i<l;i++)
    {
        cout<<temp[i]<<" ";
    }
}
int main()
{
    vector<int> arr={1,2,3,4,5,6,7};
    int len=arr.size();
    int k;
    cin>>k;
    rotate(arr,k,len);
}
//rotate an array optimal approach
tc-O(2n)
sc-o(1);

//find the missing number
#include<iostream>
#include<vector>
using namespace std;
void findmissing(int arr[],int n)
{
    vector<int> hash(n+1,0);
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=0;i<)
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
    findmissing(arr,n);
}

// find the missing number using XOR MAXOPTIMAL
#include <iostream>
#include <vector>
using namespace std;
int findmissing(vector<int> &arr, int n)
{
    int xor1 = 0;
    int xor2 = 0;
    for (int i = 1; i <= n; i++)
    {
        xor1 = xor1 ^ i;
    }

    for (int i = 1; i < n; i++)
    {
        xor2 = xor2 ^ arr[i];
    }
    return (xor1 ^ xor2);
}
int main()
{
    int n = 5;
    vector<int> arr = {1, 2, 4, 5};
    cout<<findmissing(arr, n);
}*/
