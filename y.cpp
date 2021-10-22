#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,h,s;
    cin>>n>>h>>s;

    int a[n],ans=0;


    
    for(int i=0; i<n; i++)
    {
       cin>>a[i];
    }
    for(int i=0; i<n; i++)
        {
           int r=a[i]%(h-s);
           ans += a[i]/(h-s);
           if(r!=0)
           {
            ans++;
           }
           if(a[i] % h == 0)
            ans--;
        }


    cout << ans;

return 0;
}