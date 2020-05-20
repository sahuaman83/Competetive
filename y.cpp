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
        ll n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        if( ((a-b)*n < (c-d) && (a+b)*n < (c-d) )  ||  ((a-b)*n > (c+d)) )
        	cout<<"No"<<endl;
        else
        	cout<<"Yes"<<endl;
    }
return 0;
}