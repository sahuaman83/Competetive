#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
string p[]={",.", "*&", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

vector<string> pallcomb(string s)
{
	if(s.size()==0)
	{
		vector<string> bres;
		bres.push_back("");
		return bres;
	}
	int ch=s[0]; //2
	string ros=s.substr(1); //34
	vector<string> rres=pallcomb(ros); // 9 words of 34
	vector<string> mres; // 27 words of 234
	
	string st=p[ch-'0'];
	for(int i=0;i<st.size();i++)
	{
	    char c=st[i];
	    for(auto y:rres)
		{
		    mres.push_back(c+y);
		}
	}
	return mres;

}

int main(){
     ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        string s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s+=to_string(a[i]);
        }
        vector<string> ans;
        ans=pallcomb(s);
        for(auto x:ans)
        	cout<<x<<" ";
        cout<<endl;
    }
return 0;
}