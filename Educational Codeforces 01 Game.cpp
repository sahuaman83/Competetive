#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll o=0,z=0;
        for(ll int i=0;i<s.size();i++)
            {
                if(s[i]!='0')
                    o++;
                else
                    z++;
            }
            if(o==0 || z==0)
                cout<<"NET"<<endl;
            else
            {
               ll mini=min(z,o);
               if(mini&1)
                cout<<"DA"<<endl;
            else
                cout<<"NET"<<endl;

            }
         
}
return 0;
}