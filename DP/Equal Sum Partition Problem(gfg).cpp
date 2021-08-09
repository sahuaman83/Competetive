#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
        // Memoization
        
// int dp[101][1001];
//     Solution()
//     {
//         memset(dp,-1,sizeof(dp));
//     }
    
//     int subset_sum(int a[],int n,int sum)
//     {
//         if(sum == 0)
//         return 1;
//         if(n == 0)
//         return 0;
        
//         if(dp[n][sum]!=-1)
//         return dp[n][sum];
        
//         if(a[n-1] <= sum)
//         return dp[n][sum]=(subset_sum(a,n-1,sum-a[n-1]) || subset_sum(a,n-1,sum));
        
//         if(a[n-1] > sum)
//         return dp[n][sum]=subset_sum(a,n-1,sum);
//     }
    
    // Tabulation
    
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
    
    int equalPartition(int N, int a[])
    {
        int sum=0;
        for(int i=0 ;i<N ;i++)
        {
            sum+=a[i];
        }
        if(sum & 1)
        return 0;
        else
        {
            return subset_sum(a,N,sum/2);
        }
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  