int immediateSmaller(int a[], int n, int k)
{
   int c=-1;
    for(int i=0;i<n;i++)
    {
        if(c<a[i] && a[i]<k)
        c=a[i];
    }
    return c;
    
}