vector<string> mostActive(vector<string> customers)
{
  int n=customers.size();
  unordered_map<string,int> m;
  
    for(int i=0;i<n;i++)
    {
      m[customers[i]]++;
    }

    vector<string> v;

    for(auto x:m)
    {
      if((x.second/n)>=5)
        v.push_back(x.first);
    }

    sort(v.begin(),v.end());
    return v;
}