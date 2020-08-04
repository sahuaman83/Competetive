class Solution {
  vector<string> ans;  
public:
    void pathhelper(TreeNode* root,string s,int target)
    {
        if(root==NULL)
            return;
        if(root->val==target)
        {
            s+=to_string(root->val);
            ans.push_back(s);
        }
        pathhelper(root->left,s+to_string(root->val)+"->",target);
        pathhelper(root->right,s+to_string(root->val)+"->",target);
        
    }
    vector<string> binaryTreePaths(TreeNode* root,int target) {
        pathhelper(root,"",target);
        return ans;
        
    }
};