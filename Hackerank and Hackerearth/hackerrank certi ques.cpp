vector<string> mostActive(vector<string> customers)
{
  double n=customers.size();
  unordered_map<string,double> m;

    for(int i=0;i<n;i++)
    {
      m[customers[i]]++;
    }

    vector<string> v;

    for(auto x:m)
    {
      double t=(x.second*100.0)/n;
      if(t>=5.0)
        v.push_back(x.first);
    }

    sort(v.begin(),v.end());
    return v;
}