// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int a[], int n){
    int l[n],r[n];
    int maxil=INT_MIN,maxir=INT_MIN;
    for(int i=0;i<n;i++)
    {
       maxil=max(maxil,a[i]);
       l[i]=maxil;
    }
    for(int i=n-1;i>=0;i--)
    {
       maxir=max(maxir,a[i]);
       r[i]=maxir;
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        
        ans+=min(l[i],r[i])-a[i];
    }
    return ans;
    
    
}