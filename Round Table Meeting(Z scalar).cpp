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
            ll n,q;
            cin>>n>>q;
            ll arr[n];
            ll a[2*n];
            for(ll int i=0;i<n;i++)
                 cin>>arr[i];
            for(ll int i=0;i<2*n;i++)
                {
                	a[i]=arr[i%n];
                }
             unordered_map<ll,vector<ll>> m;
             for(ll int i=0;i<2*n;i++)
                 {
                 	m[a[i]].pb(i);
                 }
                 // for(auto x:m)
                 // 	cout<<x.first<<" "<<x.second[0]<<endl;
             while(q--)
             {
     
             	ll x,y;
             	cin>>x>>y;
                     if(n==1||(x==y))
                    cout<<"0\n";
                    else
                    {
                            ll mini=INT_MAX;
                            vector<ll> v1=m[x],v2=m[y];
                            for(ll int i=0;i<v1.size();i++)
                            {
                                    for(ll int j=0;j<v2.size();j++)
                                    {
                            mini=min(abs(v1[i]-v2[j])/2,mini);
                                    }
                            }
                            cout<<mini<<endl;
                    }
             	
     
             }
             // for(ll int i=0;i<2*n;i++)
             //     cout<<a[i];
    return 0;
    }