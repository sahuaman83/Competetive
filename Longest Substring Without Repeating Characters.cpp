class Solution {
public:
    int lengthOfLongestSubstring(string a) {
        
        int freq[256]={0};
        int i=0,j=0;
        int n=a.size();
        if(n==0)
            return 0;
        int maxi=INT_MIN;
        while(j<n && i<n)
        {
            freq[a[j]]++;
            if(freq[a[j]]>1)
            {
                freq[a[j]]--;
                freq[a[i]]--;
                i++; j--;   
            }
            j++;
            maxi=max(maxi,j-i);
        }
        return maxi;
    }
};