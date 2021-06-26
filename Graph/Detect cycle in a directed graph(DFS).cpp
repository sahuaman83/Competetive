class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	bool cycle_dfs(int node,vector<int> adj[],vector<int> &vis,vector<int> &dfs_vis)
	{
	    vis[node]=1;
	    dfs_vis[node]=1;
	    for(auto it:adj[node])
	    {
	        if(vis[it]==1 && dfs_vis[it]==1)
	            return true;
	        else
	        if(!vis[it])
	        {
	            if(cycle_dfs(it,adj,vis,dfs_vis))
	                return true;
	        }
	    }
	    dfs_vis[node]=0;
	    return false;
	}
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	vector<int> vis(V,0);
	   	vector<int> dfs_vis(V,0);
	   	for(int i=0;i<V;i++)
	   	{
	   	    if(!vis[i])
	   	    {
    	   	    if(cycle_dfs(i,adj,vis,dfs_vis))
    	   	        return true;
	   	    }
	   	}
	   	return false;
	}
};

int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

  