#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
        ll n,q;
        cin>>n>>q;
        ll h[n],a[n];
        for(ll i=0;i<n;i+=1)
             cin>>h[i];
        for(ll i=0;i<n;i+=1)
             cin>>a[i];
         while(q)
         {
            ll x,y,z;
            cin>>x>>y>>z;
            if(x==1)
            {
                a[y-1]=z;
            }
            else
            {
                if(y==z)
                {
                    cout<<a[y-1];
                    cout<<'\n';
                }
                else
                {
                    if(z>y)
                    {
                        bool flag=0;
                        for(ll int i=y;i<=z-1;i+=1)
                        {
                            if(h[i]>=h[y-1])
                            {
                                flag=1;
                                break;
                            }
                        }
                        if(flag==1)
                            cout<<-1<<'\n';
                        else
                        {
                            ll ans=0;
                            ans+=a[z-1];
                            ll maxi=h[z-1];
                           
                            for(ll i=z-1;i>y-1;i-=1)
                            {
                                if(maxi<h[i-1])
                                {
                                     maxi=h[i-1];
                                    ans+=a[i-1];
                                   
                                }
                            }
                            cout<<ans<<'\n';
                        }
                    }
                    else
                    {
                        bool flag=0;
                        for(ll i=y-2;i>=z-1;i-=1)
                        {
                            if(h[y-1]<=h[i])
                            {
                                flag=1;
                                break;
                            }
                        }
                        if(flag==1)
                            cout<<-1<<'\n';
                        else
                        {
                            ll ans=0;
                            ll maxi=h[z-1];
                            ans+=a[z-1];
                            for(ll i=z-1;i<y-1;i++)
                            {
                                if(maxi<h[i+1])
                                {
                                   
                                    maxi=h[i+1];
                                    ans+=a[i+1];
                                }
                            }
                            cout<<ans<<'\n';
                        }
                    }
                       
                }
            }
            q=q-1;
         }

return 0;
}