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
        string s;
        cin>>s;
        ll res = 0,cur=0;
	    for (ll i = 0 ;i<s.size();i++)
	    {
	        res++;
	        if (s[i] == '+')
	            cur = cur + 1;
	        else
	            cur = cur - 1;
	        if(cur < 0)
	        {
	        	cur=0;
	        	res+=i+1;
	        }
	    }
	cout<<res<<endl;
}
return 0;
}