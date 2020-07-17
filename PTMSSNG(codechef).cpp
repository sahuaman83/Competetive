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
        ll q=4*n-1;
        ll xor1=0,xor2=0;
        while(q--)
        {
            ll x,y;
            cin>>x>>y;
            xor1=xor1^x;
            xor2=xor2^y;
        }
        cout<<xor1<<" "<<xor2<<endl;

}
return 0;
}