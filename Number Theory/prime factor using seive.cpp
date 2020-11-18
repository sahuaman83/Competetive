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
        ll n;
        cin>>n;
        int spf[n+1]={0};
        for(int i=2;i<=n;i++)
        {
            spf[i]=i;
        }
        for(int i=2;i*i<=n;i++)
        {
            if(spf[i]==i) 
            {
                for(int j=i*i;j<=n;j+=i) 
                {
                    if(spf[j]==j)
                    spf[j]=i;
                }
            }
        }
        while(n!=1)
        {
            cout<<spf[n]<<" ";
            n=n/spf[n];
            
        }
        return 0;
}


