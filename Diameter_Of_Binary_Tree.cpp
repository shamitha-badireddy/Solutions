#include<bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
  };
 
class Solution {
public:

    int height(TreeNode* root)
    {
        if(root == NULL)return 0;
        return max(height(root->left),height(root->right))+1;
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        if(root == NULL)return 0;
        int currDiameter = height(root->left)+height(root->right);
        return max(currDiameter,max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)));
    }
};
int main()
{
}