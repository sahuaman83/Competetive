#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        vector<int>v(s.length()+2,-1);
       int n = s.size();

        stack<int>st;
        for(int i=n-1;i>=0;i=i-1)
        {
            if(s[i]==')')
            {
                v[i]=v[i+1];
                st.push(i);
            }
            else
            {
                if(!st.empty()){
                    v[i]=st.top()+1; st.pop();
                }
            }
        }

       int q;cin>>q;
        while(q--)
        {
           int t;
            cin>>t;
            t--;
            printf("%d\n",v[t]);
        }
    }
}
