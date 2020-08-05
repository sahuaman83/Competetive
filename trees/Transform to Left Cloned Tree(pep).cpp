class Solution {
public:
    TreeNode* getLeftCloned(TreeNode* root) {
        if(root==NULL)
            return NULL;
        
        TreeNode* lct=getLeftCloned(root->left);
        TreeNode* rct=getLeftCloned(root->right);
        
        TreeNode* newNode=new TreeNode(root->data);
        newNode->left=lct;
        newNode->right=NULL;
        root->right=rct;
        root->left=newNode;
        
        return root;
        
    }
};