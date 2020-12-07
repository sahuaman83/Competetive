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
        vector<pair<ll,ll>> v;
        for(ll int i=0;i<n;i++)
        {
          ll x,y;
          cin>>x>>y;
          v.pb({x,y});
        }
        ll flag=0;
        // sort(v.begin(),v.end());
        for(ll int i=0;i<n;i++)
        {
          flag=0;
          for(ll int j=0;j<n;j++)
          {
            ll po=abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second);
            if(po>k)
            {
              flag=1;
              break;
            }
          }
          
          if(flag==0)
          {
            cout<<1<<endl;
            break;
          }
        }
        if(flag)
          cout<<-1<<endl;

}
return 0;
}