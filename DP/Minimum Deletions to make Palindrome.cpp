// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int minimumNumberOfDeletions(string s1) { 
        reverse(s1.begin(),s1.end());
        string s2 = s1;
        reverse(s1.begin(),s1.end());
        int n=s1.size();
        int m=n;
	    
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
                if(s1[i-1] == s2[j-1])
                    dp[i][j] = 1+ dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        return n - dp[n][m];
    } 
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}  // } Driver Code Ends