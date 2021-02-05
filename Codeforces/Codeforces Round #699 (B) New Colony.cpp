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
    while(t--)
    {
        ll n,k,p=0;
        cin>>n>>k;
        ll a[n];
        for(ll int i=0;i<n;i++)
             cin>>a[i];
        bool f=0;
        while(k>0)
        {
            ll j=0;
            while(j<n-1 && a[j]>=a[j+1])
                j++;
            if(j==n-1)
            {
                f=1;
                break;
            }
            k--;
            a[j]++;
            p=j+1;
        }
        if(f==1)
            cout<<-1<<endl;
        else
            cout<<p<<endl;
        
    }
return 0;
}