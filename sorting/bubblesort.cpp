#include<iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    for(int i=n-1;i>=0;i--)
    {

        if(arr[i]>arr[i+1])
        {
            //swap
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
int main()
{
    int arr[5]={5,4,3,2,1};
    int n=5;
    bubblesort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        return 0;
    }
}