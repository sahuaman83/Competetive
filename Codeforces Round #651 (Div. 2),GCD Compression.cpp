#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll size,k;
        
        k=n-1;
        size=2*n;
        ll a[size+1];
        ll f[size+1]={0};
        for(int i=1;i<=size;i+=1)
             cin>>a[i];
         for(int i=1;i<=size;i+=1)
         {
         	for(int j=1;j<=size;j+=1)
         	{
         		if((a[j]+a[i])%2==0 && k>0 && i!=j && f[j]!=1 && f[i]!=1)
         		{
         			
         			f[i]=1;
         			
         			k--;
         			cout<<i<<" "<<j<<endl;
         			f[j]=1;
         			break;
         		}
         	}
         }


}
return 0;
}