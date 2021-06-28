#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll k=0,ans=0;
        ll n=s.size();
        if(n%2!=0)
            cout<<0<<endl;
        else
        {
            k=n/2;
            for(ll i=1;i<k;i++)
            {
                ll j=k-i;
                string s1=s.substr(0,i);
                string s2=s.substr(i,i);
                string s3=s.substr(2*i,j);
                string s4=s.substr(2*i+j,j);
                if(s1==s2 && s3==s4)
                    ans++;
            }
        }
            
        cout<<ans<<endl;
    }
        
return 0;
}