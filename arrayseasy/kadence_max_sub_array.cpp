#include<iostream>
using namespace std;
void maxsubarray(int arr[],int n)
{
    int sum=0;
    int maxi=0;
    int start=-1;
    int end=-1;
    for(int i=0;i<n;i++)
    {
        if(sum==0)
        {
            start=i;
        }
        sum=sum+arr[i];
        
        if(sum<0)
        {
            sum=0;
        }
        if(maxi<sum)
        {
            maxi=sum;
            end=i;
        }
    }
    cout<<"the maximum subarray :"<<maxi<<endl;
    cout<<"start :"<<start<<endl;
    cout<<"end : "<<end<<endl;
    return;
}
int main()
{
    int arr[8]={1,2,3,-1,-3,6,7,-9};
    int arr1[5]={4,3,1,5,6};
    int nums[9]={-2,1,-3,4,-1,2,1,-5,4};
    maxsubarray(arr,8);
    cout<<endl;
    maxsubarray(arr1,5);
    maxsubarray(nums,9);
    
}