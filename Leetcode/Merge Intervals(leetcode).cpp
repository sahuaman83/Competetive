class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        if(inter.size()==0)
            return {};
        vector<vector<int>> merged;
        sort(inter.begin(),inter.end());
        vector<int> tempint=inter[0];
        
        for(auto it:inter)
        {
            if(tempint[1]>=it[0])
                tempint[1]=max(it[1],tempint[1]);
            else
            {
                merged.push_back(tempint);
                tempint=it;
            }
        }
        merged.push_back(tempint);
        return merged;
    }
};