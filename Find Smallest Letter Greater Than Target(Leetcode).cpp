class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char c) {
        int n=l.size();
        int start=0;
        int end=n-1;
        char ans=l[0]; // when target doesn't exist in array so at last we have to print l[0]
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(c<l[mid])
            {
                ans=l[mid];
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return ans;
    }
};