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

    vector<int> a;
    void leafNodes(TreeNode* root)
    {
        if(root== NULL)return;
        if(root->left == NULL && root->right == NULL)
        {
            a.push_back(root->val);
            return;
        }
        leafNodes(root->left);
        leafNodes(root->right);
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        a.clear();
        leafNodes(root1);
        vector<int> x = a;

        a.clear();
        leafNodes(root2);
        vector<int> y=a;
        
        return x==y;
        
    }
};
int main()
{
}