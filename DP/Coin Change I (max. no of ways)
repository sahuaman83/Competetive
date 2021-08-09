class Solution{

	public:
	int minCoins(int coin[], int n, int sum) 
	{ 
	   int dp[n+1][sum+1];
	   for(int i=0; i<=n; i++)
	   {
	       for(int j=0; j<=sum; j++)
    	   {
    	       if(j==0)
    	       dp[i][j]=0;
    	       if(i==0)
    	       dp[i][j]=INT_MAX - 1;
    	   }
	   }
	   
	   for(int j=1; j<=sum; j++)
    	   {
    	       if(j % coin[0] == 0)
    	       dp[0][j]=(j / coin[0]);
    	       else
    	       dp[0][j]=INT_MAX - 1;
    	   }
    	   
       for(int i=1; i<=n; i++)
	   {
	       for(int j=1; j<=sum; j++)
    	   {
    	       if(coin[i-1] <= j)
    	            dp[i][j] = min(dp[i][j-coin[i-1]] + 1 , dp[i-1][j]);
    	       else
    	            dp[i][j] =  dp[i-1][j]; 
    	   }
	   }
	   return dp[n][sum]==INT_MAX - 1  ? -1 : dp[n][sum] ;
	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends