class Solution {
public:
    void helpvertical(TreeNode* root,int hd,map<int,vector<int> > &m)
    {
        if(root==NULL)
        return;
        
        m[hd].push_back(root->val);
        
        helpvertical(root->left,hd-1,m);
        helpvertical(root->right,hd+1,m);
        
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<int> > m;
        int hd=0;
        helpvertical(root,hd,m);
        
        vector<vector<int>> ans;
        for(auto x:m)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};