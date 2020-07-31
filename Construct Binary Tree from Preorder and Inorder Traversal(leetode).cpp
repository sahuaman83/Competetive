/**


Given preorder and inorder traversal of a tree, construct the binary tree.

Note:
You may assume that duplicates do not exist in the tree.

For example, given

preorder = [3,9,20,15,7]
inorder = [9,3,15,20,7]

Return the following binary tree:

    3
   / \
  9  20
    /  \
   15   7


 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTreehelper(vector<int> p, vector<int> i,int inos, int inoe, int pres, int pree)
    {
        if(inos>inoe)
            return NULL;
        
        int rootData=p[pres];
        
        int rootIndex=-1;
        // inorder mein root find kr rhe
        for(int j=inos;j<=inoe;j++)
        {
            if(i[j]==rootData)
            {
                rootIndex=j;
                break;
            }
        }
        
        int linos= inos;
        int linoe= rootIndex-1;
        int lpres= pres+1;
        int lpree= linoe-linos+lpres;
        int rinos= rootIndex+1;
        int rinoe= inoe;
        int rpres= lpree+1;
        int rpree= pree;
        
        //recursively building tree
        TreeNode * root = new TreeNode(rootData);
        root->left= buildTreehelper(p,i,linos,linoe,lpres,lpree);
        root->right= buildTreehelper(p,i,rinos,rinoe,rpres,rpree);
        
        return root;
        
    }
    TreeNode* buildTree(vector<int>& p, vector<int>& i) {
            int size=p.size();
        return buildTreehelper(p,i,0,size-1,0,size-1);
    }
};	