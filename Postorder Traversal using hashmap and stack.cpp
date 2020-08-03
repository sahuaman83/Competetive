void postOrder(Node* root)
{
    stack<Node*> s;
    unordered_map<Node*,int> m;
    s.push(root);
    
    while(!s.empty())
    {
        Node* temp=s.top();
        if(temp==NULL)
        {
        s.pop();
        continue;
        }
        if(m[temp]==0)
        s.push(temp->left);
        else
        if(m[temp]==1)
        s.push(temp->right);
        else
        if(m[temp]==2)
        cout<<temp->data<<" ";
        else
        s.pop();
        
        m[temp]++;
        
    }


}
