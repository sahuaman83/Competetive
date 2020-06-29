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
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll int i=0;i<n;i++)
             cin>>a[i];
         unordered_map<ll,ll> m;
         set<ll> s;
         for(ll int i=0;i<n;i++)
         {
            if(a[i] % k!=0)
            {
                ll t=k-(a[i] % k);
                m[t]++;
                s.insert(t);
            }
         }
         ll ans=0;
         auto it=s.rbegin();
         ans+=*it;
         for(auto x:m)
         {
            if(x.second>1)
                ans+=x.first;
         }
         cout<<ans+1<<endl;

}
return 0;
}