#include<iostream>
using namespace std;
int maxprofit(int arr[], int n)
{
    int profit=0;
    int mini=arr[0];
    for(int i=1;i<n;i++)
    {
        mini=min(mini,arr[i]);
        profit=max(profit,arr[i]-mini);
    }
    return profit;
}
int main()
{
    int arr[6]={7,1,5,3,6,4};
    cout<<maxprofit(arr,6)<<endl;
}