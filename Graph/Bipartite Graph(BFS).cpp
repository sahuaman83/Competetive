class Solution {
public:
    bool bip_bfs(int node,vector<int>adj[],vector<int> &color)
    {
        queue<int> q;
        q.push(node);
        color[node]=1;
        while(!q.empty())
        {
            node=q.front();
            q.pop();
            for(auto it:adj[node])
            {
                if(color[it]!=-1 && color[it]==color[node])
                return false;
                if(color[it]==-1)
                {
                    color[it]=1-color[node];
                    q.push(it);
                }
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    vector<int> color(V,-1);
	    
	    for(int i=0;i<V;i++)
	    {
	        if(color[i]==-1)
	        {
	        if(!bip_bfs(i,adj,color))
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