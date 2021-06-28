#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        int n,d,k,ans=0;
        cin>>n>>k;
        d=k;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(d<k)ans--;
                d=0;
            }
            else {
                d++;
                if(d==k+1)
                {ans++;d=0;}
            }
        }
        cout<<ans<<endl;
    }
}
