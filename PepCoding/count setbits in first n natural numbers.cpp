#include<bits/stdc++.h>
using namespace std;
#define ll long
#define mem(x,val) memset(x,val,sizeof(x))
#define F(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define crap ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)


// solution --> (2^(x-1) * x) + n-2^x+1 +solve(n-2^x)

int larg_pow_of_2(int n)
{
    int x=0;
    while((1<<x)<=n)
        x++;
        
    return x-1;
}
int solve(int n)
{
    if(n==0)
    return 0;
    
        int x=larg_pow_of_2(n);
        int less_than_pow_of_2=(1<<(x-1))*x;
        int msb_after_larg_pow_of_2=n-(1<<x)+1;
        int small_ans=solve(n-(1<<x));
        
        return less_than_pow_of_2 + msb_after_larg_pow_of_2 + small_ans;
}
int main(){
    crap;
        int n;
        cin>>n;
        cout<<solve(n);
        
return 0;
}