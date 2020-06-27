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
        ll a[n];
        unordered_map<ll,ll> m;
        for(ll int i=0;i<n;i++)
        {
             cin>>a[i];
             m[a[i]]++;
        }
        bool flag=0;
        for(auto x:m)
        {
            if(x.second!=1)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            sort(a,a+n);
            cout<<"YES"<<endl;
            for(auto x:a)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else
        {
            bool flag=0;
            for(auto x:m)
            {
                if(x.second!=1 && x.second&1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                cout<<"NO"<<endl;
            else
            {
                bool flag=0;
                sort(a,a+n);
                for(auto x:m)
                {
                    if(x.second!=1 && x.second!=2)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag!=1 && a[n-2]!=a[n-1])
                {
                    set<ll> s;
                    cout<<"YES"<<endl;
                    for(ll i=0;i<n;i++)
                        {
                            s.insert(a[i]);
                        }
                    for(auto x:s)
                        cout<<x<<" ";
                    for(auto it=s.rbegin();it!=s.rend();it++)
                    {
                        if(m[*it]!=1)
                            cout<<*it<<" ";
                    }
                    cout<<endl;
                }
                else
                    cout<<"NO"<<endl;
            }
        }
}
return 0;
}