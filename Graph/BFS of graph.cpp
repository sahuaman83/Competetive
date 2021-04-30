class Solution {
public:

	vector<int>bfsOfGraph(int V, vector<int> adj[]){
        vector<int> bfs;

        vector<int> vis(V,0);
                vis[0]=1;
                queue<int> q;
                q.push(0);
                while(!q.empty())
                {
                    int x=q.front();
                    q.pop();
                    bfs.push_back(x);
                    for(auto it:adj[x])
                    {
                        if(!vis[it])
                        {
                            q.push(it);
                            vis[it]=1;
                        }
                    }
                }
        return bfs;
	}
};