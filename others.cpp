#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s1,s2;
    cin>>s1>>s2;
    ll freq[256]={0};
    for(ll i=0;i<s1.size();i++)
    {
        freq[s1[i]]++;
    }
    for(ll i=0;i<s2.size();i++)
    {
        freq[s2[i]]++;
    }
    ll ans=0;
    for(ll i=0;i<256;i++)
    {
        if(freq[i]==1)
            ans++;
    }
    cout<<ans;
return 0;
}