/*1. You are given a partially written BinaryTree class.
2. You are given an element.
3. You are required to complete the body of find and nodeToRoot function. The functions are expected to 
3.1. find -> return true or false depending on if the data is found in binary tree.
3.2. nodeToRoot -> returns the path from node (correspoding to data) to root in form of an arraylist (root being the last element)
4. Input iand Output is managed for you. 

15
50 25 12 n n 37 n n 75 62 n n 87 n n
70

Sample Output

false
[]
*/


vector<int> vec;
bool pathexist(TreeNode* root,int data)
    {
        if(root==NULL)
            return false;
        if(root->val==data)
        {
            vec.push_back(root->val);
            return true;
        }
        
        bool lp=pathexist(root->left,data)
        if(lp)
        {
            vec.push_back(root->left->val);
            return true;
        }
        
        bool rp=pathexist(root->right,data)
        if(rp)
        {
            vec.push_back(root->right->val);
            return true;
        }
        
        return false; //if not any above then that node not exist s how can the path exist.
    }