#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> shortestToChar(string s, char c) 
    {
        vector<int> ch;
        vector<int> res;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==c) 
            {
                ch.push_back(i);
            }
        }
        for(int i=0;i<s.size();i++)
        {
            int ans = INT_MAX;
            for(auto x : ch)
            {
                ans = min(ans,abs(i-x));
            }
            res.push_back(ans);
        }
        return res;
        
    }
};
int main()
{
}