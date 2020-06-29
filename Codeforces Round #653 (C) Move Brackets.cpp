#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> st;
        st.push(s[0]);
        for(ll int i=1;i<n;i++)
             {
                if(!st.empty() && st.top()=='(' && s[i]==')' )
                    st.pop();
                else
                    st.push(s[i]);
             }
             ll o=0,c=0;
             if(st.size()==0)
                cout<<0<<endl;
            else
            {
                 while(!st.empty())
                 {
                    if(st.top()=='(') 
                    {
                        o++;
                        st.pop();
                    }
                    else
                     {
                        c++;
                        st.pop();
                    }
                    
                 }
                 if(o==c)
                    cout<<(c+o)/2<<endl;
                else
                    cout<<-1<<endl;
            }
}
return 0;
}