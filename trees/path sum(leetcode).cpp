/*112. Path Sum
Easy

Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

Note: A leaf is a node with no children.

Example:

Given the below binary tree and sum = 22,

      5
     / \
    4   8
   /   / \
  11  13  4
 /  \      \
7    2      1

return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.
*/
class Solution {
public:
    bool pathhelper(TreeNode* root,int target,int sum)
    {
        if(root==NULL)
            return false;
        if(root->left==NULL && root->right==NULL)
        {
            if((sum+root->val)==target)
            return true;
        }
        if(pathhelper(root->left,target,sum+root->val))
            return true;
        if(pathhelper(root->right,target,sum+root->val))
            return true;
        
        return false;
    }
    bool hasPathSum(TreeNode* root, int sum) {
        return pathhelper(root,sum,0);
    }
};