int maxcuts(int n,int a,int b,int c)
{
	if(n==0)
		return 0;
	if(n<0)
		return -1;

	int m1=maxcuts(n-a,a,b,c);
	int m2=maxcuts(n-b,a,b,c);
	int m3=maxcuts(n-c,a,b,c);
	int res=max(m1,max(m2,m3));
	if(res==-1)
		return -1;
	return res+1;
}