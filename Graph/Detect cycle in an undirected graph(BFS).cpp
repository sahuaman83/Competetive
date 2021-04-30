class Solution {
public:
    bool cycle_bfs(int node,vector<int>adj[],vector<int> &vis)
    {
        queue<pair<int,int>> q;
        q.push({node,-1});
        vis[node]=1;
        while(!q.empty())
        {
            pair<int,int> x=q.front();
            node=x.first;
            int par=x.second;
            q.pop();
            for(auto it:adj[node])
            {
                if(vis[it] && it!=par)
                {
                    return true;
                }
                if(!vis[it])
                {
                    q.push({it,node});
                    vis[it]=1;
                }
            }
        }
        return false;
    }
	bool isCycle(int V, vector<int>adj[]){
	    vector<int> vis(V,0);
	    
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            if(cycle_bfs(i,adj,vis))
	               return true;
	        }
	    }
        return false;
	}
};