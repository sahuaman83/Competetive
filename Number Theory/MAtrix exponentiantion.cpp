#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define M 101
ll int I[M][M];
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
void power(ll a[][M],ll m,ll n) //using binary exponentiation
{
  for(ll int i=0;i<m;i++)
    {
      for(ll int j=0;j<m;j++)
      {
        if(i==j)
          I[i][j]=1;
        else
          I[i][j]=0;
      }
    }
      while(n)
      {
        if(n&1)
        {
        multiply(I,a,m); //equivalent to I=I*a;
        n--;
        }
        else
        {
          multiply(a,a,m); //equivalent to a=a*a;
          n/=2;
        }
      }
    for(ll int i=0;i<m;i++)
        {
          for(ll int j=0;j<m;j++)
            a[i][j]=I[i][j];
        }
}

void print(ll a[][M],ll m)
{
  for(ll int i=0;i<m;i++)
    {
      for(ll int j=0;j<m;j++)
        cout<<a[i][j]<<" ";
      cout<<endl;
    }
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll m,n;
        cin>>m>>n;
        ll a[M][M];
        for(ll int i=0;i<m;i++)
        {
          for(ll int j=0;j<m;j++)
            cin>>a[i][j];
        }
        power(a,m,n);
        print(a,m);
        
             
}
return 0;
}