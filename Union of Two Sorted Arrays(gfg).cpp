vector<int> findUnion(int a1[], int a2[], int n, int m)
{
    vector<int> v;
    unordered_map<int,int> mp;
    int i=0,j=0;
    while(i<n && j<m)
    {
        
        if(a1[i]<=a2[j])
        {
            
            if(mp[a1[i]]!=1)
            {
            v.push_back(a1[i]);
            mp[a1[i]]=1;
            }
            i++;
        }
        else
        if(a1[i]>a2[j])
        {
            if(mp[a2[j]]!=1)
            {
            v.push_back(a2[j]);
            mp[a2[j]]=1;
            }
            j++;
        }
    }
    while(i<n && mp[a1[i]]!=1)
    {
        v.push_back(a1[i]);
         mp[a1[i]]=1;
         i++;
        
    }
    while(j<m && mp[a2[j]]!=1)
    {
        v.push_back(a2[j]);
        mp[a2[j]]=1;
        j++;
    }
    return v;
    }