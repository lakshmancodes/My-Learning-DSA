#include<iostream>
using namespace std;
int secondlar(int arrp[])
{
    int min=INT_MAX;
    int lar=arrp[0];
    int slar;
    for(int i=1;i<9;i++)
    {
        if(arrp[i]>lar)
        {
            slar=lar;
            lar=arrp[i];
        }
        else if(arrp[i]<lar && slar< arrp[i])
        {
            slar=arrp[i];
        }
    }
    return slar;
}
int main()
{
    int arr[9]={1,2,3,4,4,42,29,10,11};
    cout<<secondlar(arr);
}