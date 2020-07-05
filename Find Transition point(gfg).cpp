// Function to find the transition point
int transitionPoint(int a[], int n) {
    if(n==1)
    {
        if(a[0]==1)
        return 0;
        else
        return -1;
    }
    int low=0,high=n-1;
    int mid=0;
    int ans=-1;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(a[mid]==0)
        {
        low=mid+1;
        ans=mid+1;
        }
        else
        high=mid-1;
    }
    if(ans==n)
    return -1;
    else
    if(ans==-1)
    return 0;
    else
    return ans;
}