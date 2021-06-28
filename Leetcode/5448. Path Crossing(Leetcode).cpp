class Solution {
public:
    bool isPathCrossing(string s) {
        int x=0,y=0;
        set<pair<int,int> > st;
        st.insert(make_pair(x,y));
        for(int i=0;i<s.size();i++)
           {
            
                if(s[i]=='N')
                {
                    y++;
                    if(st.find(make_pair(x,y))!=st.end())
                        return 1;
                    else
                      st.insert(make_pair(x,y));  
                }
            if(s[i]=='E')
                {
                    x++;
                    if(st.find(make_pair(x,y))!=st.end())
                        return 1;
                    else
                      st.insert(make_pair(x,y));  
                }
            if(s[i]=='S')
                {
                    y--;
                    if(st.find(make_pair(x,y))!=st.end())
                        return 1;
                    else
                      st.insert(make_pair(x,y));  
                }
            if(s[i]=='W')
                {
                    x--;
                    if(st.find(make_pair(x,y))!=st.end())
                        return 1;
                    else
                      st.insert(make_pair(x,y));  
                }
            }
        return 0;
    }
};