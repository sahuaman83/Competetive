#define f first
#define s second
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int rotten=0,total=0,ans_time=0,empty=0;
        
        queue<pair<int,int>> q;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2 || grid[i][j]==1)
                    total++;
                if(grid[i][j]==2)
                    q.push(make_pair(i,j));
                if(grid[i][j]==0)
                    empty++;
                    
            }
        }
        if(total==0)
            return 0;
        
        while(!q.empty())
        {
            int count=q.size();
            rotten+=count;
            
            if(total==rotten)
                return ans_time;
            
            ans_time++;
            
            for(int i=0;i<count;i++)
            {
                pair<int,int> p=q.front();
                q.pop();
                if(p.f+1<grid.size() && grid[p.f+1][p.s]==1)
                {
                    grid[p.f+1][p.s]=2;
                    q.push(make_pair(p.f+1,p.s));
                }
                if(p.f-1>=0 && grid[p.f-1][p.s]==1)
                {
                    grid[p.f-1][p.s]=2;
                    q.push(make_pair(p.f-1,p.s));
                }
                if(p.s+1<grid[0].size() && grid[p.f][p.s+1]==1)
                {
                    grid[p.f][p.s+1]=2;
                    q.push(make_pair(p.f,p.s+1));
                }
                if(p.s-1>=0 && grid[p.f][p.s-1]==1)
                {
                    grid[p.f][p.s-1]=2;
                    q.push(make_pair(p.f,p.s-1));
                }
            }
        }
        return -1;
    }
};