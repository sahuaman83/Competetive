#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for(int i=0;i<n;i++)
             cin>>a[i];
        ll start=0;
        ll end=n-1;
        ll ans=-1;
        bool flag=0;
        while(start<=end)
        {
            ll mid=start+(end-start)/2;
            if(a[mid]==x)
            {
                flag=1;
            cout<<mid<<endl;
            break;
            }
            else
            if(a[mid]<x)
            {
                ans=mid;
                start=mid+1;
            }
            else
            end=mid-1;
        }
        if(!flag)
        cout<<ans<<endl;
        
        
        
    }
        
}