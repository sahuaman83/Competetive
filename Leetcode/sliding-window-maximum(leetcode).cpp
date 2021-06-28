class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        vector<int> ans;
        deque<int> dq(k);
        int n=a.size();
        
        for(int i=0;i<k;i++)
        {
            while(!dq.empty() && a[i]>=a[dq.back()])
                dq.pop_back();
            
            dq.push_back(i);
        }
        for(int i=k;i<n;i++)
        {
            ans.push_back(a[dq.front()]);
            
            while(!dq.empty() && dq.front()<=i-k)
                dq.pop_front();
            
            while(!dq.empty() && a[i]>=a[dq.back()])
                dq.pop_back();
            
            dq.push_back(i);
        }
        ans.push_back(a[dq.front()]);
        
        return ans;
    }
};