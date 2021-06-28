/*Given inorder and postorder traversal of a tree, construct the binary tree.

Note:
You may assume that duplicates do not exist in the tree.

For example, given

inorder = [9,3,15,20,7]
postorder = [9,15,7,20,3]

Return the following binary tree:

    3
   / \
  9  20
    /  \
   15   7
*/
class Solution {
public:
    TreeNode* buildTreehelper(vector<int> p, vector<int> i,int inos, int inoe, int pos, int poe)
    {
        if(inos>inoe)
        return NULL;
        
        int rootData=p[poe];
        int rootIndex=-1;
        for(int j=inos;j<=inoe;j++)
        {
            if(i[j]==rootData)
            {
                rootIndex=j;
                break;
            }
        }
        int linos=inos;
        int linoe=rootIndex-1;
        int rinos=rootIndex+1;
        int rinoe=inoe;
        int rpoe=poe-1;
        int rpos=rpoe-rinoe+rinos;
        int lpos=pos;
        int lpoe=rpos-1;
        
         TreeNode * root = new TreeNode(rootData);
        root->left= buildTreehelper(p,i,linos,linoe,lpos,lpoe);
        root->right= buildTreehelper(p,i,rinos,rinoe,rpos,rpoe);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& i, vector<int>& p) {
        int size=p.size();
        return buildTreehelper(p,i,0,size-1,0,size-1);
    }
};