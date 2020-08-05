struct BinaryTreeNode* removeLeaves(struct BinaryTreeNode* root) {
    if (root != NULL)
    {
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        else
        {
            root->left = removeLeaves(root->left);
            root->right = removeLeaves(root->right);
        }
    }
    return root;
}