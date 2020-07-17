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
        ll c1=0,m1=0;
        while(n--)
        {
            ll c,m;
            cin>>c>>m;
            ll sumc=0,summ=0;
            while(c>0)
            {
                sumc+=c%10;
                c/=10;
            }
             while(m>0)
            {
                summ+=m%10;
                m/=10;
            }
            if(sumc>summ)
                c1++;
            else
                if(sumc<summ)
                    m1++;
                else
                {
                    c1++;
                    m1++;
                }
        }
        if(c1>m1)
            cout<<0<<" "<<c1<<endl;
        else
            if(c1<m1)
                cout<<1<<" "<<m1<<endl;
            else
                cout<<2<<" "<<c1<<endl;


}
return 0;
}