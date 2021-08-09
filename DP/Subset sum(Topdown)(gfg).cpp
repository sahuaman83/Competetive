class Solution{
public:
    
    int subset_sum(int a[],int n,int sum)
    {
        if(sum == 0)
        return 1;
        if(n == 0)
        return 0;
        int dp[n+1][sum+1];
        for(int i=0 ;i<n ;i++)
        {
            for(int j=0 ;j<sum ;j++)
            {
                if(i == 0)
                    dp[i][j]=0;
                if(j == 0)
                    dp[i][j]=1;
            }
        }
        
        for(int i=1 ;i<=n ;i++)
        {
            for(int j=1 ;j<=sum ;j++)
            {
               if(a[i-1] <= j)
                  dp[i][j] = ( dp[i-1][j-a[i-1]] || dp[i-1][j] );
                
               if(a[i-1] > j)
                  dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][sum];
    }
};