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
    int n;
    cin>>n;
    int a[n];
    for(ll int i=0;i<n;i++)
         cin>>a[i];
         int rem_bit=0;
    for(ll int i=0;i<n;i++)
    {
        if(rem_bit==0)
        {
            if((a[i]>>7) == 0b0)
            {
                rem_bit=0;
            }
            else
            if((a[i]>>5) == 0b110)
            {
                rem_bit=1;
            }
            else
            if((a[i]>>4) == 0b1110)
            {
                rem_bit=2;
            }
            else
            if((a[i]>>3) == 0b11110)
            {
                rem_bit=3;
            }
        }
        else
        {
            if((a[i]>>6) == 0b10)
            rem_bit--;
            else
            {
            cout<<"false";
            return 0;
            }
        }
    }
    if(rem_bit==0)
    cout<<"true";
    else
    cout<<"false";
    
return 0;
}