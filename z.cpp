#include <bits/stdc++.h>
using namespace std;

    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
        	long int a,b;
	        cin >> a >> b;


	        long int mx = a*b * (a*b - 1);
	        long int mi = 2 * a;

	        cout<<mi<<" "<<mx<<endl;
	    }
	        
	    return 0;
    }