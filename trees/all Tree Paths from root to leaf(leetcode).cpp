/*Given a binary tree, return all root-to-leaf paths.

Note: A leaf is a node with no children.

Example:

Input:

   1
 /   \
2     3
 \
  5

Output: ["1->2->5", "1->3"]

Explanation: All root-to-leaf paths are: 1->2->5, 1->3
*/
class Solution {
  vector<string> ans;  
public:
    void pathhelper(TreeNode* root,string s)
    {
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
        {
            s+=to_string(root->val);
            ans.push_back(s);
        }
        pathhelper(root->left,s+to_string(root->val)+"->");
        pathhelper(root->right,s+to_string(root->val)+"->");
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        pathhelper(root,"");
        return ans;
        
    }
};