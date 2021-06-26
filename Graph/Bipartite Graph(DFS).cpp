class Solution {
public:
    bool bip_dfs(int node,vector<int>adj[],vector<int> &color)
    {
        if(color[node]==-1)
            color[node]=1;
        
        for(auto it:adj[node])
        {
            if(color[it]==-1)
            {
                color[it]=1-color[node];
                if(!bip_dfs(it,adj,color))
                    return false;
            }
            else
            if(color[it]==color[node])
            return false;
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    vector<int> color(V,-1);
	    
	    for(int i=0;i<V;i++)
	    {
	        if(color[i]==-1)
	        {
	        if(!bip_dfs(i,adj,color))
	        return false;
	        }
	    }
	    
	    return true;
	}

};


int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  