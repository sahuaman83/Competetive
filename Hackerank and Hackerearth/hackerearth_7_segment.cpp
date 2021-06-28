    #include<bits/stdc++.h>
    using namespace std;
    #define ll int
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
            string n;
            cin>>n;
            ll a[10]={6,2,5,5,4,5,6,3,7,6};
            ll s=0;
            string n1=n;
            for(int i=0;i<n.size();i++)
            {
                ll x=n[i]-48;
                s+=a[x];
            }
            if(s%2==0)
            {
                
                    for(int i=1;i<=s/2;i++)
                    {
                        cout<<1;
                    }
                    cout<<endl;
            }
            if(s%2!=0)
            {
                cout<<7;
                s-=3;
                for(int i=0;i<s/2;i++)
                {
                    cout<<1;
                }
                cout<<endl;
            }
     
    }
    return 0;
    }