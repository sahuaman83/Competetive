#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
             cin>>a[i];
        ll start=0;
        ll end=n-1;
        bool flag=0;
        while(start<=end)
        {
            ll mid=start+(end-start)/2;
            ll prev=(mid-1+n)%n;
            ll next=(mid+1)%n;

            if(a[mid]<=a[next] && a[mid]<=a[prev])
            {
                flag=1;
                cout<<n-mid<<endl;
                break;
            }
            else
                if(a[mid]<=a[end])
                    end=mid-1;
            else
                 if (a[mid]>=a[start])
                    start=mid+1;
        }
        if(!flag)
        cout<<0<<endl;
        
    } 
	return 0;
}