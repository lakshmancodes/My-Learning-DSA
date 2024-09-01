/*#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.emplace(100);
}*/
#include<iostream>
#include<stack>
#include<pair>
bool comp(pair<int,int> p1, pair<int,int> p2)
{
    if(p1.second<p2.second){return true;}
    if(p1.second>p2.second){return false;}
    //if they are same

    if(p1.first>p2.first){return true;}
    return false;

}
using namespace std;
int main()
{
    pair<int,int> arr[]={{1,2},{2,1},{4,1}};
    arr.sort(a,a+n,comp);//comp is competitor
}