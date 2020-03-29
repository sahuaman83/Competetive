#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		ll  n,q;
		cin>>n>>q;
		ll  num[n];
		for(ll i=0;i<n;i++)
			cin>>num[i];
			ll even=0,odd=0;
			for(ll i=0;i<n;i++)
			{
				ll count = 0; 
                while(num[i]) 
                { 
                    num[i]&=(num[i]-1); 
                    count++; 
                } 
			    if(count&1)
			    odd++;
			    else
			    even++;
			}
		while(q--)
		{
		    ll  p;
			cin>>p;
			ll p_count=0;
			while(p)
			{
			    p=p&(p-1);
			    p_count++;
			}
			if(p_count&1)
			    cout<<odd<<" "<<even<<endl;
			else
	        	cout<<even<<" "<<odd<<endl;
			
		}
	cout<<endl;
	}
	return 0;
}