int Solution::solve(vector<vector<int> > &a) {
    vector<pair<int,int>> v;
    for(int i=0;i<a.size();i++)
    {
        v.push_back({a[i][0],a[i][1]});
    }
    sort(v.begin(),v.end());
    int ans=0;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<v.size();i++)
    {
        pq.push(v[i].second);
        if(v[i].first>=pq.top())
        pq.pop();
    }
    return pq.size();
}
