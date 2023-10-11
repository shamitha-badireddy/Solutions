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
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        queue<TreeNode*> q;
        vector<vector<int>> v;
        vector<int> u;
        if(root==NULL)return v;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();
            if(node!=NULL)
            {
                if(node->left != NULL)q.push(node->left);
                if(node->right != NULL)q.push(node->right);
                u.push_back(node->val);
            }
            else if(node==NULL)
            {
                if(!q.empty())
                {
                    q.push(NULL);
                }
                v.push_back(u);
                u.clear();
            }
        }
        return v;
    }
};
int main()
{
}