#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
/*
first thing is selecting the 'k' maximum numbers  
we'll sort the array in descending 
now take the border case w[i]=1 bcoz the max and min element is the same
since we want the sum to be max, so we will try to put maximum smaller elements together & give to single guy
Its tricky so lets make it clear by an example



7 4 6 5 -1 2 3 9 8 10 // array a
4 2 3 1// array w 

10 9 8 7 6 5 4 3 2 -1 // after sorting

w[i] 1  2   3   4  ->0 1   2    3

     10 9   8   7      6   5    4
  	                       3    2
	                           -1
	            min    6   3   -1
	                 
	                 
w[i] 1  2   3   4  ->0 1   2    3

	 10 9   8   7      6   5    3
	                       4    2 
					   	       -1
	            min    6   4   -1
	


More the value of w[i], more smaller elements it will take
Max among w[i] will take smallest of the elements
So its clear that we have to sort array 'W' also
*/

int n,k; cin>>n>>k;
vector<int> a(n);
for(int i=0;i<n;i++)
cin>>a[i];
sort(a.begin(),a.end(),greater<int>());
vector<int> w(k); 
int ct=0;
for(int i=0;i<k;i++)
cin>>w[i];
sort(w.begin(),w.end());
ll sum=0;
for(int i=0;i<k;i++) 
{
sum+=1ll*a[i];
if(w[i]==1)                      // edge case 1 element min==max
ct++;
w[i]--; 
}
for(int i=0;i<ct;i++)           // for cases where w[i]=1
sum+=1ll*a[i];
int pos=k;                      // already we have taken upto (k-1)th element
for(int i=0;i<k;i++)
{
if(w[i]==0)
continue; 
pos+=w[i];
sum+=1ll*a[pos-1];              // accessing the last element taken as that is the minimum
}
cout<<sum<<"\n";
return;
}
int main()
{
ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t=1;
	cin>>t;
while(t--)
{
solve();
}
return 0;
}