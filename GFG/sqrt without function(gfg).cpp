// Function to find square root
// x: element to find square root
long long int floorSqrt(long long int x) 
{
    long long low=1,high=x;
    while(low<=high)
    {
        long long mid=low+(high-low)/2;
        if(mid*mid==x)
        return mid;
        else
        if(mid*mid<x)
        low=mid+1;
        else
        high=mid-1;
    }
    return high;
}