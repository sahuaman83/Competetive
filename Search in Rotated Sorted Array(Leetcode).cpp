class Solution {
public:
     int bsrch(vector<int> a,int start,int end,int target)
     {
         while(start<=end)
         {
             int mid=start+(end-start)/2;
             if(a[mid]==target)
                 return mid;
             if(a[mid]<target)
                 start=mid+1;
             else
                 end=mid-1;
         }
         return -1;
     }
    int search(vector<int>& a, int target) {
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
            {
                int index=mid-1;
                int at=bsrch(a,0,index,target);
                int bt=bsrch(a,index+1,n-1,target);
                if(at>=0)
                    return at;
                else
                    if(bt>=0)
                        return bt;
                else
                    if(at==-1 && bt==-1)
                        return -1;
            }
            else
                if(a[mid]<=a[end])
                    end=mid-1;
            else
                 if (a[mid] >= a[start])
                    start=mid+1;
        }
        return -1;
    }
};