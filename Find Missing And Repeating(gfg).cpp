#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
             cin>>a[i];
        ll x=0;
        for(int i=0;i<n;i++)
        {
            x^=a[i];
            x^=i+1;
        }
        ll pos=x & ~(x - 1); // first set bit from right
        x=0; ll y=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]&pos)
            x^=a[i];
            else
            y^=a[i];
            
        }
        for(int i=1;i<=n;i++)
        {
            if(i&pos)
            x^=i;
            else
            y^=i;
        }
        bool flag=0;
        for(int i=0;i<n;i++)
        {
            if(x==a[i])
            {
            flag=1;
            break;
            }
        }
        if(flag)
        cout<<x<<" "<<y<<endl;
        else
        cout<<y<<" "<<x<<endl;
        
        
    }
        
}