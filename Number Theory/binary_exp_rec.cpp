#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mem(x,val) memset(x,val,sizeof(x))
#define F(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define crap ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int power(int x,int n)
{
	if(n==0)
		return 1;
	int ans=power(x,n/2);     // T.C -->O(log n)
	if(n&1)
		return ans*ans*x;
	else
		return ans*ans;

}
int32_t main(){
    crap;
        int x,n;
        cin>>x>>n;
        cout<<power(x,n);
return 0;
}