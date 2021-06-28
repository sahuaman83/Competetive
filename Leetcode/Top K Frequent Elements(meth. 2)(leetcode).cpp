
class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& a, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<a.size();i++)
            m[a[i]]++;
        
        vector<pair<int,int>> v;
        
        for(auto x:m)
            v.push_back({x.second,x.first});
        
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        
        vector<int> ans;
        int i=0;
        while(k--)
        {
            ans.push_back(v[i++].second);
        }
        return ans;
    }
};