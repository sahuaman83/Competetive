#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define M 3
ll int I[M][M],ar[M],T[M][M];
void multiply(ll a[][M],ll b[][M],ll m)
{
  ll mult[m][m];
  for(ll int i=0;i<m;i++)
        {
          for(ll int j=0;j<m;j++)
            { 
              mult[i][j]=0;
              for(ll int k=0;k<m;k++)
                mult[i][j] = (mult[i][j] % mod + ((a[i][k] % mod) * (b[k][j] % mod) % mod)) % mod;
            }
        }

        for(ll int i=0;i<m;i++)
        {
          for(ll int j=0;j<m;j++)
            a[i][j]=mult[i][j];
        }
}
ll nth_ser(ll n) //using matrix exponentiation
{
        if(n<2)
          return ar[n];
  
          I[0][0]=I[1][1]=1;
          I[1][0]=I[0][1]=0;

          T[1][0]=T[1][1]=T[0][1]=1;
          T[0][0]=0;
          n--;
      while(n)
      {
        if(n&1)
        {
        multiply(I,T,2); //equivalent to I=I*T;
        n--;
        }
        else
        {
          multiply(T,T,2); //equivalent to T=T*T;
          n/=2;
        }
      }
      ll nth_ele=(ar[0]*I[0][0]+ar[1]*I[1][0])%mod;
      return nth_ele;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>ar[0]>>ar[1]>>n;
        n++;
        cout<<nth_ser(n)<<endl;    
    }
return 0;
}