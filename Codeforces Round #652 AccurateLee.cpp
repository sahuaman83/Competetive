#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int n;cin>>n;string s;cin>>s;string a,b;
	   int i=0;int x=0,y=0;
	   while(i<n&&s[i]=='0'){x++;a.push_back('0');i++;}
	   i=n-1;
	   while(i>=0&&s[i]=='1'){y++;b.push_back('1');i--;}
	   
	   if(x==n||y==n||x+y==n)cout<<s<<endl;
	   else cout<<a+"0"+b<<endl;
	    
	    
	}
	return 0;
}
