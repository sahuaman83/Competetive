#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define crap ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    crap;
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for(ll int i=0;i<n;i++)
             cin>>a[i];
         sort(a,a+n,greater<int>());
         ll c=0,ind=1;
         for(ll int i=0;i<n;i++)
         {
            if(a[i]*ind>=x)
            {
                c++;
                ind=1;
            }
            else
                if(a[i]*ind<x)
                    ind++;
         }
         cout<<c<<endl;
}
return 0;
}