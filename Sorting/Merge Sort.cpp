#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mem(x,val) memset(x,val,sizeof(x))
#define F(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define crap ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void merge(ll a[],ll t[],ll left,ll mid,ll right)
{
    ll k=left;
    ll fright=mid-1;
    ll sleft=mid;
    ll n=right-left+1;
    

    while(left<=fright && sleft<=right)
    {
        if(a[left]<=a[sleft])
        {
            t[k++]=a[left++];
        }
        else
        {
            t[k++]=a[sleft++];
        }
    }
    while(left<=fright)
    {
        t[k++]=a[left++];
    }
    while(sleft<=right)
    {
        t[k++]=a[sleft++];
        
    }
    for(ll i=0;i<n;i++)
    {
        a[right]=t[right];
        right--;
    }
}
void mergesort(ll a[],ll t[],ll left,ll right)
{
    
    if(left<right)
    {
       ll mid=left+(right-left)/2; 
        mergesort(a,t,left,mid);
        mergesort(a,t,mid+1,right);
        merge(a,t,left,mid+1,right);
    }
}
int main(){
    crap;
        ll n;
        cin>>n;
        ll a[n],t[n],left=0,right=n-1;
        for(ll i=0;i<n;i++)
        {
        cin>>a[i];
        }
        mergesort(a,t,left,right);
        for(ll i=0;i<n;i++)
        {
        cout<<a[i]<<" ";
        }
        cout<<endl;
return 0;
}
