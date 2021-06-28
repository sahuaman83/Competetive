class Solution {
public:
    vector<string> getFolderNames(vector<string>& s) {
        unordered_map<string,int> m;
        // vector<string> v;
        
        
        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]]==0)
            {
                m[s[i]]++;
            }
            else
            {
                int k=m[s[i]];
               while(m.find(s[i]+'('+to_string(k)+')')!=m.end())
               {
                   k++;
                   m[s[i]]++;
               }
                m[s[i]]++;
                s[i]=s[i]+'('+to_string(k)+')';
            }
                m[s[i]]=1;
        }
        return s;
    }
};