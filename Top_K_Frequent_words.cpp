#include<bits/stdc++.h>
using namespace std;
class solution
{
    static bool comparator(pair<string,int> p1,pair<string,int> p2)
    {
        if(p1.second>p2.second || (p1.second == p2.second && p1.first<p2.first))
        {
            return true;
        }
        return false;
    }
    vector<string> topKFrequent(vector<string> &words,int k)
    {
        unordered_map<string,int> mp;

        for(int i=0;i<words.size();i++)
        {
            mp[words[i]]++;
        }
        vector<pair<string,int>> v;
        for(auto it = mp.begin();it != mp.end();it++)
        {
            v.push_back({it->first,it->second});
        }
        sort(v.begin(),v.end(),comparator);
        vector<string> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
int main()
{
}