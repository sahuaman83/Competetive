vector<int> vec;
void helpprintSibling(Node* root)
{
    if(root==NULL)
    return;
    
    if(root->left!=NULL && root->right==NULL)
    vec.push_back(root->left->data);
    
    if(root->left==NULL && root->right!=NULL)
    vec.push_back(root->right->data);
    
   helpprintSibling(root->left);
   helpprintSibling(root->right);
}
void printSibling(Node* root)
{
    helpprintSibling(root);
    if(vec.size()==0)
    cout<<-1;
    else
    {
    sort(vec.begin(),vec.end());
    for(auto x:vec)
    cout<<x<<" ";
    }
    vec.clear();
}