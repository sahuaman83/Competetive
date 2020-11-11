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
        ll a,b,c=0;
        cin>>a>>b;
        ll x=a^b;
        while(x!=0)
        {
            x=x & (x-1);
            c++;
        }
        cout<<c;
return 0;
}