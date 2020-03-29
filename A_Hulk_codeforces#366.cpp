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
        ll n;
        cin>>n;
        string s1="I hate it",s2="that I love",s3="that I hate";

        if(n==1)
        	cout<<s1<<endl;
        else
        {
        	 bool flag=0;
        	cout<<"I hate ";
        	while(n)
        	{
        		if(n==1)
        			break;
        		if(flag==0)
        		{
        		cout<<s2<<" ";
        		flag=1;
        	    }
        	    else
        		{
        		cout<<s3<<" ";
        		flag=0;
        	    }
                n--;
                
        	}
        	cout<<"it"<<endl;
        }
return 0;
}