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
        unordered_map<char,ll> m;
        for(ll int i=0;i<s.size();i++)
             m[s[i]]++;
         ll maxi=INT_MIN;
         char c;
         for(auto x:m)
         {
         	if(x.second>maxi)
         	{
         		maxi=x.second;
         		if(x.first=='R')
         			c='P';
         		else
         			if(x.first=='P')
         			c='S';
         		else
         			if(x.first=='S')
         			c='R';

         	}
         }
         for(ll int i=0;i<s.size();i++)
         {
         	cout<<c;
         }
         cout<<endl;
}
return 0;
}