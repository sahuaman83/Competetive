#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t)
    {
        ll n,c=0,cnt=0;
        cin>>n;
       while(n>cnt)
       {
           for(ll int i=1;i<=n;i+=1)
           {
               c++;
               cout<<c<<" ";    
               if(i==1)
                cnt++;
           }
           cout<<'\n';
           if(cnt==n)
           {
            break;
           }
           c=c+n;
           ll cn=c;
           for(ll int j=1;j<=n;j+=1)
           {
               cout<<cn<<" ";   
               cn=cn-1;
               if(j==1)
                cnt++;
           }
           cout<<'\n';
           if(cnt==n)
           {
            break;
           }
        }
        t=t-1;

    }
return 0;
}