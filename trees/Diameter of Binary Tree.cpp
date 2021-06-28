pair<int,int> caldia(TreeNode* root)
{
    if(root==NULL)
    {
       pair<int,int> p;
        p.first=0;
        p.second=0;
        return p;
    }
    pair<int,int> ldh=caldia(root->left);
    pair<int,int> rdh=caldia(root->right);
    
    int lh=ldh.first;
    int rh=rdh.first;
    int ld=ldh.second;
    int rd=rdh.second;
    
    int height=1+max(lh,rh);
    int diameter=max(lh+rh,max(ld,rd));
    
    pair<int,int> p;
    p.first=height;
    p.second=diameter;
    
    return p;
    
    
}
    int diameterOfBinaryTree(TreeNode* root) {
       return caldia(root).second;
            
    }
};