
//selection sort

#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        //swapping
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1-1;j>=0;j--)
        {
            if(arr[j]>arr[j+1])
            {
                //swap
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void insertionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            //swap

            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}
int main()
{
    int n;
    cout<<"enter the size of the array :"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //selectionsort(arr,n);
    //bubblesort(arr,n);
    insertionsort(arr,n);
    cout<<"array after performing selection sort "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}


#include<iostream>
#include<vector>
using namespace std;
void mergee(vector<int> &arr,int low,int mid,int high)

{
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left <=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
}
void mergesort(vector<int> & arr, int low,int high)
{
    if(low>=high)
    {
        return;
    }
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    mergee(arr,low,mid,high);
}
int main()
{
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n=arr.size();
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

