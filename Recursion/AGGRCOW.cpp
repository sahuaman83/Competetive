#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
bool canPlace(ll position[],ll d,ll n,ll cow)
{
	ll count=1;
	ll last_pos=position[0];
	for(ll i=1;i<n;i++)
	{
		if(position[i]-last_pos>=d)
		{
			count++;
			last_pos=position[i];
		}
		if(cow==count)
		return 1;

	}
		return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,c;
		cin>>n>>c;
		ll position[n];
		for(ll i=0;i<n;i++)
			cin>>position[i];
		sort(position,position+n);
		ll left=0;
		ll right=position[n-1]-position[0];
		ll ans=-1;
		while(left<=right)
		{
			ll mid=left+(right-left)/2;
			if(canPlace(position,mid,n,c))
			{	 
				left=mid+1;
				ans=mid;
			}
			else
				right=mid-1;
		}
			cout<<ans<<endl;

	}
	return 0;
}
