    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define mem(x,val) memset(x,val,sizeof(x))
    #define F(i,n) for(ll i=0;i<n;i++)
    #define pb push_back
    #define endl '\n'
    #define mod 1000000007
    #define crap ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
    ll N=1e6+1;
    vector<int> pri(N);
     
    void seive()
    {
        vector<bool> arr(N,0);
        arr[0]=1;
        arr[1]=1;
        for(ll int i=2;i*i<N;i++)
        {
            if(arr[i]==0)
            {
                for(ll int j=i*i;j<N;j+=i)
                {
                    arr[j]=1;
                }
            }
        }
        ll cnt=0;
        for(ll int i=0;i<N;i++)
        {
            if(arr[i]==0)
                cnt++;
            if(arr[cnt]==0)
            pri[i]=1;
            else
            pri[i]=0;
        }
        for(ll int i=1;i<N;i++)
        {
                pri[i]=pri[i]+pri[i-1];
        }
    }
    int main(){
        crap;
        seive();
        ll t;
        cin>>t;
        while(t--)
        {
            ll l,r;
            cin>>l>>r;
            cout<<pri[r]-pri[l-1]<<endl;
        }
    return 0;
    }