#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class solution
{
    public:
        double ans =0;

        pair<int,int> dfs(TreeNode* root)
        {
            if(root==NULL) return {0,0};
            auto left = dfs(root->left);
            auto right = dfs(root->right);
            int sum = left.first + right.first + root->val;
            int count = left.second + right.second + 1;
            ans = max(ans,(double)sum/count);
            return {sum,count};
        }
        double maximumAverageSubtree(TreeNode* root)
        {
            dfs(root);
            return ans;
        }
};
int main()
{
}