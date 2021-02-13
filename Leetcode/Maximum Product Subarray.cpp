class Solution {
public:
    int maxProduct(vector<int>& a) {
        int maxi=a[0],mini=a[0];
        int ans=a[0];
        for(int i=1;i<a.size();i++)
        {
            if(a[i]<0)
                swap(maxi,mini);
            
            maxi=max(a[i],maxi*a[i]);
            mini=min(a[i],mini*a[i]);
            
            ans=max(ans,maxi);
        }
        return ans;
    }
};