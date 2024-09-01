#include <iostream>
#include<vector>
using namespace std;
void arrange(int arr[],int n)
{
    int start=0;
    int stop=1;
    vector<int> newvec(n,0);
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            newvec[stop]=arr[i];
            stop +=2;
        }
        else
        {
            newvec[start]=arr[i];
            start +=2;
        }
    }
}
int main()
{
    int arr[18] = { 28, -41, 22, -8, -37, 46, 35, -9, 18, -6, 19, -26, -37, -10, -9, 15, 14, 31 };
    arrange(arr,18);
}