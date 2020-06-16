#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mem(x,val) memset(x,val,sizeof(x))
#define F(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define crap ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int power(int x,int y,int n)
{
	if(y==0)
		return 1;
	int ans=power(x,y/2,n);     // T.C --> O(log n)
	if(y&1)
		return ((ans%n)*(ans%n)*(x%n))%n;
	else
		return ((ans%n)*(ans%n))%n;

}
int32_t main(){
    crap;
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        cout<<power(x,y,n)<<endl;

        if(t==0)
        {
        	int zero;
        	cin>>zero;
        }
    }
return 0;
}