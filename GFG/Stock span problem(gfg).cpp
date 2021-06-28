vector <int> calculateSpan(int a[], int n)
{
    vector <int> ans;
    stack<pair<int,int>> s;
    
   for(int i=0;i<n;i++)
   {
       if(s.empty())
       ans.push_back(1);
       else
       {
           while(!s.empty() && s.top().first<=a[i])
           s.pop();
           
           if(s.empty())
            ans.push_back(i+1);
            else
            ans.push_back(i-s.top().second);
       }
       s.push({a[i],i});
   }
   return ans;
}
