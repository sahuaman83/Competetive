class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            int newIndex = abs(a[i]) - 1;
            
            if (a[newIndex] > 0)
                a[newIndex] *= -1;
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            ans.push_back(i+1);
        }
        return ans;
    }
};