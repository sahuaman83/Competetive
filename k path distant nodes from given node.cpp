class solver
{
private:
   vector <int> ans;
   vector <Node*> path; 
public:
    bool pathexist(Node* root,int data)
    {
        if(root==NULL)
            return false;
        if(root->data==data)
        {
            path.push_back(root);
            return true;
        }
        
        bool lp=pathexist(root->left,data);
        if(lp)
        {
            path.push_back(root);
            return true;
        }
        
        bool rp=pathexist(root->right,data);
        if(rp)
        {
            path.push_back(root);
            return true;
        }
        
        return false;
    }
    
    void printKdistance(Node *root, int k,Node* blocker)
    {
        if(root==NULL || k<0 || root==blocker)
        return;
        if(k==0)
         {
            ans.push_back(root->data);
            return;
         }
        printKdistance(root->left,k-1,blocker);
        printKdistance(root->right,k-1,blocker);
    }
    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        path.clear();
        ans.clear();
        if(root==NULL)
        return {};
        bool f=pathexist(root,target);
        for(int i=0;i<path.size();i++)
        {
            printKdistance(path[i],k-i,i==0?NULL:path[i-1]);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};