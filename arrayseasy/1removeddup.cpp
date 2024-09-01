/*#include<iostream>
#include<set>
#include<vector>
using namespace std;
int removedup(int arr[],int n)
{
    set<int> st;
    for(int i=0;i<n;i++)
    {
        st.insert(arr[i]);
    }
    int ele=0;
    vector<int> arrs(st.size());
    for(auto it: st)
    {
        arrs[ele]=it;
        ele++;
    }
    for(auto it: arrs)
    {
        cout<<it<<" ";
    }
    return ele;
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
    cout<< removedup(arr,n)<<endl ;

}

#include <iostream>
#include <set>
#include <vector>
using namespace std;
void finddup(int arr[], int n)
{
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    int i = 0;
    vector<int> new_arr(st.size());
    for (auto it : st)
    {
        new_arr[i] = it;
        i++;
    }
    cout << "array after removing the duplicates " << endl;
    for (int i = 0; i < st.size(); i++)
    {
        cout << new_arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    finddup(arr, n);

    return 0;
}*/

#include<iostream>
#include<set>
using namespace std;
void removedup(int arr[],int n){
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto it: st){
        cout<<it<<" ";
    }
    return ;
}
int main()
{
    int arr[5]={1,2,3,1,2};
    removedup(arr,5);
    return 0;
}