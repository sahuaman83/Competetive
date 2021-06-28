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
        ll h,p;
        cin>>h>>p;
        while(h>0 && p>0)
        {
            h=h-p;
            p=floor(p/2);
        }
        if(h<=0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
        
    }
return 0;
}