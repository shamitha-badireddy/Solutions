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

    bool dfs(TreeNode* root,vector<int> &v)
    {
        if(root == NULL)return true;
        if(root->left == NULL && root->right == NULL)
        {
            v.push_back(root->val);
            cout<<root->val<<endl;
            return true;
        }
        if(dfs(root->left,v))root->left = NULL;
        if(dfs(root->right,v))root->right = NULL;
        return false;

    }

    vector<int> removeLeaves(TreeNode* root)
    {
        vector<int> v;
        dfs(root,v);
        return v;
    }
    vector<vector<int>> findLeaves(TreeNode* root)
    {
        if(root == NULL)return {};
        vector<vector<int>> ans;
        while(root->left != NULL || root->right != NULL)
        {
            ans.push_back(removeLeaves(root));

        }
        return ans;

    }
};
int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    root->right->left=new TreeNode(6);
    root->right->right=new TreeNode(7);
    vector<vector<int>> x;
    solution a;
    x = a.findLeaves(root);
    for(auto y : x)
    {
        cout<<"[";
        for(auto z : y)
        {
            cout<<z<<" ";
        }
        cout<<"]";
    }
}