class Solution
{
  public:
    long long int count( int S[], int m, int n )
    {
        
        long long int t[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            t[i][0] = 1;
        }
        for(int j=1;j<=n;j++)
        {
            t[0][j] = 0;
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(S[i-1]<=j)
                {
                    t[i][j] = t[i-1][j] + t[i][j-S[i-1]];
                }
                else
                {
                    t[i][j] = t[i-1][j];
                }
            }
        }
        return t[m][n];
    }
};