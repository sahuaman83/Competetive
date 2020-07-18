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
        ll n;
        cin>>n;
        string b,g;
        cin>>b>>g;
        queue<char> q;
        for(ll int i=0;i<n;i++)
             {
             	q.push(g[i]);
             }
             ll cnt=0,i;
        for(i=0;i<n;i++)
         {
         	cnt=0;
         	while(b[i]!=q.front())
         	{
         		char ch=q.front();
         		q.push(ch);
         		q.pop();
         		cnt++;
         		if(cnt==n)
         			break;
         	}
         	if(cnt==n)
         	break;
         	q.pop();
         }
         cout<<n-i<<endl;
return 0;
}