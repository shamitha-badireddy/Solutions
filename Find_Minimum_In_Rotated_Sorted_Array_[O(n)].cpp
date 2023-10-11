#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
        int findMin(vector<int>& nums)
        {
            for(int i=nums.size()-1;i>=1;i++)
            {
                if(nums[i-1]>nums[i])return nums[i];
            }
            return nums[0];
        }
};
int main()
{
}