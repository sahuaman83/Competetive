int firstRepeated(int a[], int n) {
    unordered_map<int,pair<int,int>> m;
    for(int i=0;i<n;i++)
    {
        if(m[a[i]].second==0)
        {
        m[a[i]].first=i;
        }
        m[a[i]].second++;
    }
    // for(auto x:m)
    // cout<<x.first<<x.second.first<<" "<<x.second.second<<endl;
    int ans=INT_MAX;
    for(auto x:m)
    {
        if(x.second.second>=2)
        ans=min(ans,x.second.first);
    }
    if(ans==INT_MAX)
    return -1;
    else
    return ans+1;
}