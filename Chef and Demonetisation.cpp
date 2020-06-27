#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll s,n,ans=0;
        cin>>s>>n;
        if(s==1)
            cout<<1<<endl;
        else
        if(s>n)
        {
             ll c1=s/n;
             s=s%n;
                ans+=c1;
                
                if(s&1 && s!=1)
                {
                    ans+=2;
                }
                else
                    if(s==1|| s!=0)
                ans++;
                cout<<ans<<endl;
           
            
        }
        else
        {
             if(s%2!=0)
              {
                cout<<2<<endl;
              }
              else
               cout<<1<<endl; 
               
        }

}
return 0;
}