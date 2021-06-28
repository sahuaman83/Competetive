#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==1)
        	cout<<1<<endl;
        else
        {
        	if(!(n&1))
        	{
        		
        		cout<<n/2<<endl;

        	}
        	else
        	{
        		n--;
        		cout<<n/2<<endl;        	}
        }

}
return 0;
}