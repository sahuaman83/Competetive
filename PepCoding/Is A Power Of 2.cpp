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
    int n,c=0;
    cin>>n;
    while(n!=0)
    {
        n=n&(n-1);
        c++;
    }
    if(c==1)
    cout<<"true";
    else
    cout<<"false";
        
return 0;
}