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
    int n,c=1;
    cin>>n;
    int em=0xAAAAAAAA; //1010 1010 1010 .........8 times(mask)
    int om=0X55555555; //0101 0101 0101 .........8 times(mask)
    int odds=(n & om);
    int even=(n & em);
    odds=odds<<1;
    even=even>>1;
    cout<<(even|odds);
        
return 0;
}