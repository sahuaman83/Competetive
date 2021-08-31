// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string s1){
		    int n=s1.size();
		    string s2=s1;
		    int m=s2.size();
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
                if(s1[i-1]==s2[j-1] && i!=j)
                dp[i][j]= 1 + dp[i-1][j-1];
                else
                dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        string ans="";
        
        int i=n,j=m;
        while(i>0 && j>0)
        {
            if(s1[i-1]==s2[j-1])
            {
                ans+=s1[i-1];
                i--,j--;
            }
            else
            {
                if(dp[i][j-1] > dp[i-1][j])
                {
                    j--;
                }
                else
                {
                    i--;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends