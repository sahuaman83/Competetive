#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll even=0,odd=0;
        for(ll int i=0;i<n;i++)
             cin>>a[i];
         
         for(ll int i=0;i<n;i++)
         {
            if((i&1) && !(a[i]&1))
                even++;
            if(i%2==0 && a[i]&1)
                odd++;
            
         }
         if(odd!=even) cout<<-1<<endl;
         else
            cout<<even<<endl;

}
return 0;
}