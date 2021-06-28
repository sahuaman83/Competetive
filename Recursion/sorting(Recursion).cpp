#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mem(x,val) memset(x,val,sizeof(x))
#define F(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define crap ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void sorted( vector<int> &v)
{
	if(v.size()==1)
		return;
	int t=v.back();
	v.pop_back();
	sorted(v);
	bool f=0;
	for(int i=0;i<v.size();i++)
	{
		if(t<=v[i])
		{
			v.insert(v.begin()+i,t);
			f=1;
			break;
		}

	}
	if(!f)
		v.push_back(t);
}

int main(){
    crap;
    int n;
    cin>>n;
        vector<int> v;
        for(ll int i=0;i<n;i++)
             {
             	int x;
             	cin>>x;
             	v.pb(x);
             }
          sorted(v);
          for(auto x:v)
          	cout<<x<<" ";
return 0;
}