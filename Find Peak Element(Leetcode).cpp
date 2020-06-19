class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n=a.size();
        if(n==1)
            return 0;
        int start=0;
        int end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(mid>0 && mid<n-1)
            {
                if(a[mid]>a[mid+1] && a[mid]>a[mid-1])
                    return mid;
                else
                    if(a[mid]<a[mid+1])
                        start=mid+1;
                else
                        end=mid-1;
            }
            else
            if(mid==0)
               {
                    if(a[mid]>a[mid+1])
                        return mid;
                    else
                        return mid+1;
                    
               }
            else
                if(mid==n-1)
                {
                    if(a[mid]>a[n-2])   
                        return mid;
                    else
                        return n-2;
                } 
        }
        return -1;
    }
};