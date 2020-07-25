int mah(vector<int> a, int m)
{
    int n=m;
    stack<pair<int,int>> s1;
    vector<int> nsl;
    for(int i=0;i<n;i++)
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
    stack<pair<int,int>> s2;
    vector<int> nsr;
    for(int i=n-1;i>=0;i--)
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
    vector<int> wid;
   
    for(int i=0;i<n;i++)
    {
        wid.push_back(nsr[i]-nsl[i]-1);
        
    }
    
    vector<int> area;
     int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        area.push_back(wid[i]*a[i]);
        maxi=max(maxi,area[i]);
    }
    return maxi;
    }
int maxArea(int a[MAX][MAX], int n, int m) {
     vector<int> v;
     for(int j=0;j<m;j++)
     {
         v.push_back(a[0][j]);
     }
    int mx=mah(v,m);
    for(int i=1;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             if(a[i][j]==0)
             v[j]=0;
             else
             v[j]+=a[i][j];
         }
         mx=max(mx,mah(v,m));
     }
     
     return mx;
}