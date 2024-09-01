#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        //using hashing 
        int maxx=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            maxx=max(maxx,nums[i]);
        }
        vector<int> hash(maxx+1,0);
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        for(int i=0;i<=maxx;i++)
        {
            if(hash[i]==1)
            {
                return i;
            }
        }
        return -1;
    }
};