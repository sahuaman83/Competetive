#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mem(x,val) memset(x,val,sizeof(x))
#define F(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define crap ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    crap;
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n],b[n];
        ll m1=INT_MAX,m2=INT_MAX;
        for(ll int i=0;i<n;i++)
        {
             cin>>a[i];
             m1=min(m1,a[i]);
        }
         for(ll int i=0;i<n;i++)
         {
             cin>>b[i];
             m2=min(m2,b[i]);
         }
         ll c=0;
         for(ll int i=0;i<n;i++)
        {
        	a[i]-=m1;
        	b[i]-=m2;
        	c+=max(a[i],b[i]);
        }
        cout<<c<<endl;
}
return 0;
}