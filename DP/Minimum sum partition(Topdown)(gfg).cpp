// Given an integer array arr of size N, the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum 
// and find the minimum difference
#include <bits/stdc++.h>
using namespace std;

 
class Solution{

  public:
	int minDifference(int a[], int n)  { 
	    int sum = 0;
	    for(int i=0; i<n ;i++)
	        sum+=a[i];
	    int dp[n+1][sum+1];
	    for(int i=0; i<=n ;i++)
	    {
	        for(int j=0; j<=sum ;j++)
	        {
	            if(i==0)
	              dp[i][j]=0;
	            if(j==0)
	              dp[i][j]=1;
	        }
	    }
	    
	    for(int i=1; i<=n ;i++)
	    {
	        for(int j=0; j<=sum ;j++)
	        {
	            if(a[i-1] <= j)
	              dp[i][j] =(dp[i-1][j-a[i-1]]) || (dp[i-1][j]);
	            else
	              dp[i][j] = dp[i-1][j];
	        }
	    }
	    
	    vector<int> v;
	    for(int j=0; j<=sum/2 ;j++)
	    {
	        if(dp[n][j] == 1)
	        v.push_back(j);
	    }
	    
	    int ans=INT_MAX;
	    for(auto x:v)
	    {
	        ans=min(ans,sum - 2*x);
	    }
	    
	    return ans;
	} 
};


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  