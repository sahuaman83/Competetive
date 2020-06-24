#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,x;
        cin>>n>>m;
        ll a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        cin>>x;
             
        ll i=0, j=m-1,flag=0;
        while(j>=0 && i<n)
        {
            if(a[i][j]==x)
            {
                flag=1;
                break;
            }
            if(a[i][j]>x)
            j--;
            else
            i++;
            
        }
        if(flag)
        cout<<1<<endl;
        else
        cout<<0<<endl;
        
        
        
    }
        
}