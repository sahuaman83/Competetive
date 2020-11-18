#include<bits/stdc++.h>
using namespace std;
#define ll long
#define mem(x,val) memset(x,val,sizeof(x))
#define F(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define crap ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    crap;
        ll n;
        cin>>n;
        ll a[n],one,zero,ans=0;
        for(int i=0;i<n;i++)
             cin>>a[i];
        for(int j=0;j<32;j++)
        {
            one=zero=0;
            ll mask=1;
            mask=mask<<j;
            for(int i=0;i<n;i++)
            {
                if(a[i] & (mask))
                one++;
                else
                zero++;
            }
            ans+=(one*zero*2);
        }
        cout<<ans;
        
return 0;
}