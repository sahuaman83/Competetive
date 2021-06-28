#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	for(int i=0;i<t;i++)
	{
	    int n,m;
	    cin >> n >> m;
	    std::vector<int> a(n);
	    for(int j=0;j<n;j++)
	        cin >> a[j];
	    sort(a.begin(),a.end());
	    vector<int> x(n+1);
	    for(int j=0;j<=n;j++)
	    {
	        x[j]=0;
	    }
	    for(int j=0;j<n;j++)
	    {
	        x[a[j]]++;
	    }
	    int flag=0;
	    for(int j=1;j<m;j++)
	    {
	        if(x[j]==0)
	        {
	            std::cout << -1 << std::endl;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    cout << n-x[m] << "\n";
	}
	return 0;
}
