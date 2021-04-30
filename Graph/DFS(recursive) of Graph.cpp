class Solution {
public:

    void go_dfs(int node,vector<int> adj[],vector<int>& vis,vector<int>& dfs)
    {
        dfs.push_back(node);
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                go_dfs(it,adj,vis,dfs);
            }
        }
    }
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    vector<int>dfs;
	    vector<int>vis(V,0);
	    go_dfs(0,adj,vis,dfs);
	    
	    return dfs;
	}
};