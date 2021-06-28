// Function to return Maximum Rectangular area in a histogram
// arr[]: input array
// n: size of array
long getMaxArea(long long a[], int n){
    stack<pair<long long,long long>> s1;
    vector<long long> nsl;
    for(long long i=0;i<n;i++)
    {
        if(s1.empty())
        {
            nsl.push_back(-1);
        }
        else
        {
            while(!s1.empty() && s1.top().first>=a[i])
            s1.pop();
            if(s1.empty())
            nsl.push_back(-1);
            else
            nsl.push_back(s1.top().second);
        }
        s1.push({a[i],i});
    }
    stack<pair<long long,long long>> s2;
    vector<long long> nsr;
    for(long long i=n-1;i>=0;i--)
    {
        if(s2.empty())
        {
            nsr.push_back(n);
        }
        else
        {
            while(!s2.empty() && s2.top().first>=a[i])
            s2.pop();
            if(s2.empty())
            nsr.push_back(n);
            else
            nsr.push_back(s2.top().second);
        }
        s2.push({a[i],i});
    }
    reverse(nsr.begin(),nsr.end());
    vector<long long> wid;
   
    for(long long i=0;i<n;i++)
    {
        wid.push_back(nsr[i]-nsl[i]-1);
        
    }
    
    vector<long long> area;
     long long maxi=INT_MIN;
    for(long long i=0;i<n;i++)
    {
        area.push_back(wid[i]*a[i]);
        maxi=max(maxi,area[i]);
    }
    // for(auto x:area)
    // cout<<x<<" ";
    // cout<<endl;
    return maxi;
}