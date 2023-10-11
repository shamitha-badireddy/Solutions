#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        unordered_set<int> mySet;
        for(auto x : nums)
        {
            if(mySet.find(x) == mySet.end())mySet.insert(x);
            else mySet.erase(x);
        }
        auto it = mySet.begin();
        return *it;
    }
};
/*
    class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int ans = 0;
        for(auto x : nums)
        {
            ans^=x;
        }
        return ans;
    }
};
*/
int main()
{
}