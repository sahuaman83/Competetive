/*You are given a map in form of a two-dimensional integer grid where 1 represents land and 0 represents water.

Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).

The island doesn't have "lakes" (water inside that isn't connected to the water around the island). One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.

 

Example:

Input:
[[0,1,0,0],
 [1,1,1,0],
 [0,1,0,0],
 [1,1,0,0]]

Output: 16*/




//Recursive

class Solution {
    void dfs(vector<vector<int>>& grid,int i,int j,int &perimeter)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0 || grid[i][j]==2)
            return;
        
        grid[i][j]=2;
        
        if(i==0 || grid[i-1][j]==0) perimeter++;
        if(i==grid.size()-1 || grid[i+1][j]==0) perimeter++;
        if(j==0 || grid[i][j-1]==0) perimeter++;
        if(j==grid[0].size()-1 || grid[i][j+1]==0) perimeter++;
        
       dfs(grid, i-1, j, perimeter);
       dfs(grid, i, j-1, perimeter);
       dfs(grid, i+1, j, perimeter);
       dfs(grid, i, j+1, perimeter);
        
    }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
      int perimeter = 0;
        for(int i = 0; i < grid.size(); ++i){
            for(int j = 0; j < grid[0].size(); ++j)
                if(grid[i][j] == 1) dfs(grid, i, j, perimeter);
        }  
        return perimeter;
    }
};


//Iterative

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        int r = grid.size(), c = grid[0].size();
        for(int i = 0; i < grid.size(); ++i){
            for(int j = 0; j < grid[0].size(); ++j){
                if(grid[i][j] == 0) continue;
                perimeter += 4;
                if(i > 0) perimeter -= grid[i-1][j];
                if(j > 0) perimeter -= grid[i][j-1];
                if(i < r-1) perimeter -= grid[i+1][j];
                if(j < c-1) perimeter -= grid[i][j+1];
            }
        }
        return perimeter;
    }
};