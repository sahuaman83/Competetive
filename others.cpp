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
        ll n,f=1,i=1,c=2;
        cin>>n;
        if(n&1)
        	cout<<"Ashishgup"<<endl;
        else{
        	while(n>=1)
        	{
        		 if(n&1)
        		 {
        		if(f>0)
        		cout<<"Ashishgup"<<endl;
        		else
        		cout<<"FastestFinger"<<endl;
        		break;
        		}
        		f=f*-1; i=1; c=2;
        		while((n/c)%2==0)
        		{
        			i++;
        			c=pow(2,i);
        			
        		}
        		n=c;
        	}
        	// if(f>0)
        	// 	cout<<"Ashishgup"<<endl;
        	// else
        	// 	cout<<"FastestFinger"<<endl;
        }

}
return 0;
}