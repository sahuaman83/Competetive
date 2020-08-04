/*113. Path Sum II
Medium

Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.

Note: A leaf is a node with no children.

Example:

Given the below binary tree and sum = 22,

      5
     / \
    4   8
   /   / \
  11  13  4
 /  \    / \
7    2  5   1

Return:

[
   [5,4,11,2],
   [5,8,4,5]
]

*/
class Solution {
    vector<vector<int>> ans;
public:
    void pathhelper(TreeNode* root,vector<int> v,int target,int sum)
    {
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
        {
            if((sum+root->val)==target)
            {
                v.push_back(root->val);
                ans.push_back(v);
            }
            
            return;
        }
        v.push_back(root->val);
        pathhelper(root->left,v,target,sum+root->val);
        pathhelper(root->right,v,target,sum+root->val);
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> v;
        pathhelper(root,v,sum,0);
        return ans;
    }
};