#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    
    ll t;
    cin>>t;
    while(t--){
        string s;
        string t="";
        cin>>s;
        int n=s.size();
        for(ll i=0;i<n-1;)
             {
             	if(s[i]==s[i+1])
             	{
             		t+=s[i];
             		i=i+2;
             	}
             	else
                {
                    t+=s[i];
             		i+=1;
                }
             }
             t=t+s[n-1];
             cout<<t<<endl;
}
return 0;
}