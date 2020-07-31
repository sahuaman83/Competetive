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
        string s;
        cin>>s;
        ll int f[10]={0};
        ll n=s.size();
        for(ll int i=0;i<s.size();i++)
             {
                f[s[i]-'0']++;
             }

             ll maxi=INT_MIN;
             for(ll i=0;i<10;i++)
             {
                maxi=max(maxi,f[i]);
             }
             ll ans=n-maxi;
            
                for(ll int i=0;i<10;i++)
                 {
                    for(ll int j=0;j<10;j++)
                    {
                        bool flag=1;
                        ll cnt=0;
                        for(ll int k=0;k<s.size();k++)
                        {
                            if(flag && s[k]=='0'+i)
                            {
                                flag=false;
                                cnt++;
                            }
                            else
                            if(!flag && s[k]=='0'+j)
                            {
                                flag=true;
                                cnt++;
                            }
                        }
                        if(cnt & 1)
                            cnt--;

                        ans=min(ans,n-cnt);
                    }
                 }
                 cout<<ans<<endl;
                   
                        
}
return 0;
}