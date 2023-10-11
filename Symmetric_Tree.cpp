#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     
  };
class Solution {
public:
    bool isSymmetricHelper(TreeNode* leftNode, TreeNode* rightNode){
        if(leftNode==NULL && rightNode==NULL) return true;
        if(leftNode==NULL || rightNode==NULL || leftNode->val != rightNode->val) return false;
        
        return isSymmetricHelper(leftNode->left, rightNode->right) && isSymmetricHelper(leftNode->right, rightNode->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return isSymmetricHelper(root->left, root->right);
    }
};
int main()
{
}