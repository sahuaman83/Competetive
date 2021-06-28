/*Given a 2D board and a word, find if the word exists in the grid.

The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once.

Example:

board =
[
  ['A','B','C','E'],
  ['S','F','C','S'],
  ['A','D','E','E']
]

Given word = "ABCCED", return true.
Given word = "SEE", return true.
Given word = "ABCB", return false.
*/

class Solution {
public:
    
    bool isFound(vector<vector<char>>& b, string w,int i,int j,int ind,int r,int c)
    {
        if(ind==w.size())
            return true;
        
        if(i<0 || j<0 || i>=r || j>=c)
            return false;
        
        if(w[ind]!=b[i][j]) 
            return false;
        
        char t=b[i][j];
        b[i][j]='*';
        if(isFound(b,w,i+1,j,ind+1,r,c) || isFound(b,w,i-1,j,ind+1,r,c)|| isFound(b,w,i,j+1,ind+1,r,c)||
           isFound(b,w,i,j-1,ind+1,r,c))
            return true;
        b[i][j]=t;
        
        return false;
    }
    
    bool exist(vector<vector<char>>& b, string w) {
        int r = b.size();
        int c = b[0].size();
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
            {
                if(b[i][j]==w[0] && isFound(b,w,i,j,0,r,c))
                    return true;
            }
        
        return false;
    }
};