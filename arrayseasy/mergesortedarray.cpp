/*#include<iostream>
#include<vector>
using namespace std;
void brutemerge(int arr1[],int arr2[],int n,int m)
{
    int arr[n+m];
    int left=0;
    int right=0;
    int ind=0;
    while(left<n && right<m)
    {
        if(arr1[left]<=arr2[right])
        {
            arr[ind]=arr1[left];
            left++;
            ind++;
        }
        else 
        {
            arr[ind]=arr2[right];
            right++;
            ind++;
        }
    }
    while(left < n)
    {
        arr[ind++]=arr1[left++];
     
    }
    while(right< m)
    {
        arr[ind++]=arr2[right++];
    }
    for(int i=0;i<n+m;i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
    
}
int main()
{
    int arr1[4]={1,3,5,7};
    int arr2[5]={0,2,6,8,9};
    brutemerge(arr1,arr2,4,5);
}*/
void brutemergearr(int arr1[],int arr2[],int m,int n)
{
    int left=0,right=0,ind=0;
    int arr[n+m];
    while(left<m && right< n)
    {
        if(arr1[left]<=arr2[right])
        {
            arr[ind++]=arr1[left++];
        }
        else
        {
            arr[ind++]=arr2[right++];
        }
    }
    while(left<m)
    {
        arr[ind++]=arr1[left++];
    }
    while(right<n)
    {
        arr[ind++]=arr2[right++];
    }
    for(int i=0;i<n+m;i++)
    {
        if(i<m)
        {
            arr1[i]=arr[i];
        }
        else
        {
            arr2[i-m]=arr[i];
        }
    }
    return;
}
#include<iostream>
using namespace std; 
int main()
{
    int arr1[4]={1,3,5,7};
    int arr2[5]={0,2,6,8,9};
    brutemergearr(arr1,arr2,4,5);
    cout<<"I AM PRINTIng arr1"<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<arr1[i]<< " ";
    }
    cout<<endl;
    cout<<"the second array will be "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}

//now let's try doing without using an extra space while merging

#include<iostream>
using namespace std;
int main()
{
    int arr1[4]={1,3,5,7};
    int arr2[5]={0,2,6,8,9};
    bettermergearr(arr1,arr2,4,5);
}