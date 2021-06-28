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
        ll n;
        cin>>n;
        char a[8][8];
        n--;
        // a[0][0]='O';
        for(ll int i=0;i<8;i++)
             for(ll int j=0;j<8;j++)
             {
                if(i==0 && j==0)
                    a[i][j]='O';
                else
                    if(n>0)
                    {
                        a[i][j]='.';
                        n--;
                    }
                    else
                        a[i][j]='X';
             }
             for(ll int i=0;i<8;i++)
             {
                for(ll int j=0;j<8;j++)
                {
                    cout<<a[i][j];
                }
                cout<<endl;
            }

}
return 0;
}