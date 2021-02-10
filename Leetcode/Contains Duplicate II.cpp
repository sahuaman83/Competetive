class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        if(a.empty() && k==0)
            return false;
        unordered_map<int,int> m;
        for(int i=0;i<a.size();i++)
        {
            if(m[a[i]] && (i+1)-m[a[i]]<=k)
                return true;
            else
                m[a[i]]=(i+1);
        }
        return false;
    }
};