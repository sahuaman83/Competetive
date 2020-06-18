class Solution {
public:
    int findMin(vector<int>& a) {
        int n=a.size();
        int start=0;
        int end=n-1;
        int mid=start+(end-start)/2;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int prev=(mid-1+n)%n;
            int next=(mid+1)%n;
            if(a[mid]<=a[next] && a[mid]<=a[prev])
                return a[mid];
            else
                if(a[mid]<=a[end])
                    end=mid-1;
            else
                 if (a[mid] >= a[start])
                    start=mid+1;
        }
        return a[0];
    }
};