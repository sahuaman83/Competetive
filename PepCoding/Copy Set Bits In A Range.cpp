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
        long int a,b;
        long int l,r;
        cin>>a>>b>>l>>r;
        int s=r-l+1;
            long int mask=1<<s;
            mask=mask-1;
            mask=mask<<(l-1);
            a=(a & mask);
            b=(b | a);
        cout<<b;
return 0;
}