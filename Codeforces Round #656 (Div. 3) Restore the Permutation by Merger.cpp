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
        ll a[2*n],f[500]={0};
        for(ll int i=0;i<2*n;i++)
             cin>>a[i];
        for(ll int i=0;i<2*n;i++)
           {
           	if(f[a[i]]!=1)
           	{
           		cout<<a[i]<<" ";
           		f[a[i]]=1;
           	}
           }
           cout<<endl;     
}
return 0;
}