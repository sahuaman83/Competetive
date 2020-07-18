#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll int i=0;i<n;i++)
             cin>>a[i];
         if(n==1)
         	cout<<0<<endl;
         else
         {

         	int flag=0,f=0;
         	ll i=0,j=n-1;
         	for(j=n-1;j>0;j--)
	        {
	        	if(a[j]!=a[j-1])
	        	{
	        		f=1;
	        		break;
	        	}
	        }
	        if(f!=1)
	        	cout<<0<<endl;
	        else
	        if(a[j]<a[j-1])
	        	{
	        		flag=1;
	        	}
	        	else
	        		flag=2;
	        if(flag==2)
	        {
		        for(i=j-1;i>0;i--)
		        {
		        	if(a[i]<a[i-1])
		        		break;
		        }
		        cout<<i<<endl;
	    	}
	    	if(flag==1)
	    	{
	    		for(i=j-1;i>0;i--)
		        {
		        	if(a[i]>a[i-1])
		        		flag=3;
		        	if(flag==3 && a[i]<a[i-1])
		        		break;
		        }
		        cout<<i<<endl;
	    	}
	        
    	}
}
return 0;
}