#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int

bool canPlace(ll a[],ll max_page,ll n,ll stud)
{
	ll count=1;
	ll sum=0;
	if(n<stud)
	return 0;
	for(ll i=0;i<n;i++)
	{
	    sum+=a[i];
		if(sum>max_page)
		{
			count++;
			sum=a[i];
		}
		if(count>stud)
			return 0;
	}
	if(stud==count)
		return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,s;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
			
			cin>>s;
		ll sum=0;	
		sum=accumulate(a,a+n,sum);	
		ll maxi=*max_element(a,a+n);
		
		ll left=maxi;
		ll right=sum;
		
		ll ans=-1;
		while(left<=right)
		{
			ll mid=left+(right-left)/2;
			if(canPlace(a,mid,n,s))
			{	 
				right=mid-1;
				ans=mid;
			}
			else
				left=mid+1;
		}
			cout<<ans<<endl;

	}
	return 0;
}
