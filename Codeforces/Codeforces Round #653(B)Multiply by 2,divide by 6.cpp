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
        ll c=0,flag=0;
        
        while(n!=1)
        {
            if(n%6==0)
            {
                c++;
                n/=6;
            }
            else
            if(n%6!=0 && (n%6)%2==0)
            {
                flag=1;
                break;
            }
            else
            if(n%6!=0  && (n%6)%2!=0)
            {
                c++;
                n=n*2;
            }
        }
        if(flag)
            cout<<-1<<endl;
        else
            if(n==1 && flag==0)
            cout<<c<<endl;
}
return 0;
}