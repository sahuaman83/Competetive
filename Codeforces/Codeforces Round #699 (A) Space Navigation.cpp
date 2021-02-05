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
        ll x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        pair<ll,ll> p(x,y);
        pair<pair<ll,ll>,pair<ll,ll>>t;
        bool f1=0,f2=0;

        for(ll int i=0;i<s.size();i++)
            {
                if(s[i]=='U')
                    t.second.second++;
                else
                if(s[i]=='D')
                    t.second.first--;

                if(p.second>=t.second.first && p.second<=t.second.second)
                {
                    f1=1;
                    break;
                }
            }
        for(ll int i=0;i<s.size();i++)
            {
                
                if(s[i]=='L')
                    t.first.first--;
                else
                if(s[i]=='R')
                    t.first.second++;

                if(p.first>=t.first.first && p.first<=t.first.second)
                {
                    f2=1;
                    break;
                }
            }
            if(f1 && f2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }
return 0;
}