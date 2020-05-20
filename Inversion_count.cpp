#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
    ll merge(ll a[],ll left,ll mid,ll right)
    {
        ll i=left,j=mid;
        ll k=0,count=0;
        ll temp[right-left+1];
        while(i<mid && j<=right)
        {
            if(a[i]>a[j])
            {
                count+=mid-i;
                temp[k++]=a[j++];
            }
            else
            {
                temp[k++]=a[i++];
            }
        }
        while(i<mid)
        {
            temp[k++]=a[i++];
        }
        while(j<=right)
        {
            temp[k++]=a[j++];
        }
        for(int i=left,k=0;i<=right;i++,k++)
            a[i]=temp[k];
        return count;
    }
    ll mergesort(ll a[],ll left,ll right)
    {
        ll count=0;
        ll left_count,right_count,merge_count;
        while(left<right)
        {
            ll mid=left+(right-left)/2;
            left_count=mergesort(a,left,mid);
            right_count=mergesort(a,mid+1,right);
            merge_count=merge(a,left,mid+1,right);
            return left_count+right_count+merge_count;
        }
        return count;
    }
    int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        cin>>a[i];
        ll ans=mergesort(a,0,n-1);
        cout<<ans<<endl;
        
     }
return 0;
}