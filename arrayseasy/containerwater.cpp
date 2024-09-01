/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[9]={1,8,6,2,5,4,8,3,7};
    int maxi=0;
    int area=0;
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<9;j++)
        {
            area=(j-i)*(min(arr[j],arr[i]));
            maxi=max(maxi,area);
        }
    }
    cout<<maxi<<" is the maximum area the water can be trapped "<<endl;
    return 0;
}*/

#include<iostream>
using namespace std;
int trapwater(int arr[], int n)
{
    int left=0;
    int right=n-1;
    int area=0;
    int maxi=0;
    while(left<=right)
    {
        if(arr[left]<arr[right])
        {
            area=(right-left)*(min(arr[left],arr[right]));
            maxi=max(area,maxi);
            left++;
        }
        else if(arr[right]<=arr[left])
        {
            area=(right-left)*(min(arr[left],arr[right]));
            maxi=max(area,maxi);
            right--;
        }
    }
    return maxi;
}
int main()
{
    //int arr[9]={1,8,6,2,5,4,8,3,7};
    int arr[2]={1,1};
    cout<<trapwater(arr,2);
}