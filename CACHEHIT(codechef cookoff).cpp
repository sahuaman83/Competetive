#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        ll m,b,ans=1;
        cin>>n>>b>>m;
        ll s[m],a[m];
        for(ll int i=0;i<m;i++)
             cin>>s[i];
        for(ll int i=0;i<m;i++)
        {
            a[i]=s[i]/b;
        } 
        for(ll int i=0;i<m-1;i++)
        {
            if(abs(a[i]-a[i+1])>0)
                ans+=1;
        }
        cout<<ans<<endl;

}
return 0;
}