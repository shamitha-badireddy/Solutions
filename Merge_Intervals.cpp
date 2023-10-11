#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& n) 
    {
        if (n.size() <= 1) {
            return n; 
        }

        vector<vector<int>> result;
        sort(n.begin(), n.end()); 
        
        int start = n[0][0];
        int end = n[0][1];

        for (int i = 1; i < n.size(); i++)
        {
            if (n[i][0] <= end) {
                end = max(end, n[i][1]); 
            }
            else {
                result.push_back({start, end}); 
                start = n[i][0];
                end = n[i][1];
            }
        }

        result.push_back({start, end});
        
        return result;
    }
};

int main()
{
}