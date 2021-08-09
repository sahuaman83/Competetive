// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string s1, string s2, int n, int m)
    {
        
        int dp[n+1][m+1];
        
        for(int  i=0 ;i<=n; i++)
        {
            for(int  j=0 ;j<=m; j++)
            {
                if(i==0 || j==0)
                dp[i][j]=0;
            }
        }
        
        for(int  i=1 ;i<=n; i++)
        {
            for(int  j=1 ;j<=m; j++)
            {
                if(s1[i-1]==s2[j-1])
                dp[i][j]= 1 + dp[i-1][j-1];
                else
                dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        return (n+m-dp[n][m]);
    }
};

// { Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}

  // } Driver Code Ends