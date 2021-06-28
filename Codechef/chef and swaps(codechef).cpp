#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            ll n;
            cin>>n;
            ll a[n],b[n];
            unordered_map<ll,ll>mp,mp1,mp2;
            ll mi=INT_MAX;
            for(int i=0;i<n;i++)
            {
                  cin>>a[i];
                  mi=min(a[i],mi);
                  mp[a[i]]++;
            }
            for(int i=0;i<n;i++)
            {
                  cin>>b[i];
                  mi=min(b[i],mi);
                  mp[b[i]]++;
            }
            ll flag=0;
            for(auto u:mp)
            {
                  if(u.second%2==1)
                  {
                        flag=1;
                        break;
                  }
                  else
                  {
                        mp1[u.first]=u.second/2;
                  }
            }
            if(flag)
            {
                  cout<<"-1\n";
                  continue;
            }
            else
            {
                  mp2=mp1;
                  std::vector<ll>v1,v2 ;
                  for(int i=0;i<n;i++)
                  {
                        if(mp1[a[i]])
                        mp1[a[i]]--;
                        else
                        v1.push_back(a[i]);
                  }
                  for(int i=0;i<n;i++)
                  {
                        if(mp2[b[i]])
                        mp2[b[i]]--;
                        else
                        v2.push_back(b[i]);
                  }
                  sort(v1.begin(),v1.end());
                  sort(v2.begin(),v2.end(),greater<ll>());
                   ll y=v1.size();
                   if(y==0)
                   cout<<"0\n";
                   else
                   { ll ans=0;
                         for(int i=0;i<y;i++)
                         {
                               ans+=min(2*mi,min(v1[i],v2[i]));
                         }
                         cout<<ans<<"\n";
                   }
            }
      }
}