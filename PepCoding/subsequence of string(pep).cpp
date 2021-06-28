#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mem(x,val) memset(x,val,sizeof(x))
#define F(i,n) for(ll i=0;i<n;i++)
#define pb push_back

vector<string> pallsub(string s)
{
	if(s.size()==0)
	{
		vector<string> bres;
		bres.pb("");
		return bres;
	}
	char ch=s[0]; //a
	string ros=s.substr(1); //bc
	vector<string> rres=pallsub(ros); //[--,-c,b-,bc]
	vector<string> mres;
	for(auto x:rres)
	{
		mres.pb("-"+x);
		mres.pb(ch+x);
	}
	return mres;

}

int main(){
    string s="abc";
    vector<string> ans;
    ans=pallsub(s);
    for(auto x:ans)
    	cout<<x<<endl; 
return 0;
}