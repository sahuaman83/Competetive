class WordDictionary {
public:
    /** Initialize your data structure here. */
    unordered_map<int,vector<string> > m;
    WordDictionary() {
        
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        int len=word.size();
        m[len].push_back(word);
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        int len=word.size();
        int c=0;
        vector<string> v=m[len];
        for(auto x:v)
        {
            for(int i=0,j=0;i<x.size()&&j<word.size();i++,j++)
            {
                if(x.size()==word.size() && (word[j]=='.' || word[j]==x[i]))
                    continue;
                else
                {
                    c++;
                    break;
                }
            }
        }
        if(c==v.size())
            return 0;
        else
            return 1;
    }
};