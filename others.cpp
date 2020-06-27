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
         ll maxi=0;
         for(ll int i=0;i<n;i++)
        {
             ll x=log2(a[i]);
           maxi=max(maxi,x);
        }
        if(k==1)
        {
            ll ans=pow(2,maxi);
            ll fans=0;
            bool flag=0;
            for(ll i=maxi-1;i>=0;i++)
            {
                ll x=pow(2,i);
                ll mand=0;
                for(ll int j=0;j<n;j++)
                    {
                        mand+=(x^a[i]);
                    }
                    if(mand==ans)
                    {
                        flag=1;
                        fans=x;
                    }
            }
            if(flag)
            cout<<fans<<endl;
            else
            cout<<ans<<endl;

        }
        else
        if(k==2)
        {
            ll ans=pow(2,maxi)+pow(2,(maxi-1));
            ll fans=0;
            bool flag=0;
            for(ll i=maxi-1;i>=0;i++)
            {
                ll x=pow(2,maxi)+pow(2,i);
                ll mand=0;
                for(ll int j=0;j<n;j++)
                    {
                        mand+=(x^a[i]);
                    }
                    if(mand==ans)
                    {
                        flag=1;
                        fans=x;
                    }
            }
            if(flag)
            cout<<fans<<endl;
            else
            cout<<ans<<endl;
        }
        else
            cout<<pow(2,maxi)<<endl;
}
return 0;
}