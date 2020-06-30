#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mem(x,val) memset(x,val,sizeof(x))
#define F(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define crap ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void sorted(stack<int> &s,ll k)
{
	if(k==1)
		{
			s.pop();
			return;
		}
	int t=s.top();
	s.pop();
	sorted(s,k-1);
	s.push(t);

}

int main(){
    crap;
    int n;
    cin>>n;
        stack<int> s;
        for(ll int i=0;i<n;i++)
             {
             	int x;
             	cin>>x;
             	s.push(x);
             }
             ll k=n/2+1;
          sorted(s,k);
          while(!s.empty())
          {
          	cout<<s.top()<<" ";
          	s.pop();
          }
return 0;
}