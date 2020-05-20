#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mem(x,val) memset(x,val,sizeof(x))
#define F(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define crap ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
ll n,a[100005],dp[100005];
ll func(ll ind)
{
	if(ind==n-1)
		return 0;
	if(ind>=n)
		return INT_MAX;
	if(dp[ind]!=-1)
		return dp[ind];
	
	ll small1=abs(a[ind]-a[ind+1])+func(ind+1);
	ll small2=INT_MAX;
	
	small2=abs(a[ind]-a[ind+2])+func(ind+2);
	return dp[ind]=min(small2,small1);
}
signed main(){
    crap;
 		memset(dp,-1,sizeof(dp));
        cin>>n;
        for(ll int i=0;i<n;i++)
             cin>>a[i];
         cout<<func(0);
         return 0;
     }