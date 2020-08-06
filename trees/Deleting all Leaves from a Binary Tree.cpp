struct BinaryTreeNode* removeLeaves(struct BinaryTreeNode* root) {
    if (root == NULL)
        return NULL;
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL; //sending itself as NULL
        }
            BinaryTreeNode* lt= removeLeaves(root->left);
            BinaryTreeNode* rt= removeLeaves(root->right);
            root->left=lt;
            root->right=rt;
    return root;
}