class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<a.size();i++)
        {
            m[a[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto x:m)
        {
            pq.push(make_pair(x.second,x.first));
        }
        vector<int> ans;
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};