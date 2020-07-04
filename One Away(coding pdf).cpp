/* Program to check if the two strings are one characters away (Data Structure)
Introduction (Interview Questions)
There are three types of edits that can be performed on strings: insert a character, remove a character, or replace a character. Given two strings, write a function to check if they are one edit (or zero edits) away.

Details
Example
pale,    ple     ->   true

pales,  pale   ->  true

pale,    bale   ->   true

pale,    bake  ->   false */
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check( string a, string b,int m,int n)
{
	ll i=0,j=0,edits=0;
	if(abs(m-n)>1)
    	return false;
        while(i<m && j<n)
        {
        	if(a[i]!=b[j])
        	{
        		edits++;
        		if(edits>1)
        			return false;
        		if(m<n)
        		j++;
        		else
        		if(m>n)
        		i++;
        		else
        		{
        			i++;
        			j++;
        		}
        	}
        	else
        	{
        		i++;
        		j++;
        	}
        }
        if(i<m || j<n)
        	edits++;

        return edits==1;
}

int main(){
    string a,b;
    cin>>a>>b;
    ll m=a.size(),n=b.size();
    cout<<check(a,b,m,n);
    
return 0;
}