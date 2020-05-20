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
        int arr[n+1]={0};
        arr[0]=1;arr[1]=1;
        for(int i=2;i*i<=n;i++)
        {
                for(int j=i*i;j<=n;j+=i) //it can also be run from j=i*2 but for more optimise we done this
                {
                    arr[j]=1;
                }
        }
        for(int i=1;i<=n;i++)
        {
         if(!arr[i])
             cout<<i<<endl;
        }
    return 0;
}


