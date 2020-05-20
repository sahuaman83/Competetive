#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
// this program will print only one path may be another path is there 
bool findPath(int maze[][3],int n,int x,int y,int path [][3])
{
    if(x<0 || x>=n || y<0 || y>=n)
        return 0;
    if(x==n-1 && y==n-1)
       {
            path[x][y]=1;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<path[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
            return 1;
       }
    
    if(maze[x][y]!=1 || path[x][y]==1)
            return 0;

      
            path[x][y]=1;
        if(findPath(maze,n,x-1,y,path)) 
            return 1; 
        else
        if(findPath(maze,n,x+1,y,path)) 
            return 1; 
        else
        if(findPath(maze,n,x,y+1,path)) 
            return 1; 
        else
        if(findPath(maze,n,x,y-1,path))
            return 1; 
        else
        {
            path[x][y]=0;   // jab maan lo ek bhi direction mein nhi ja pa rha matlab sari direction block hai
            return 0;       // toh jha khade ho usko dobara zero kro aur return flase krkr baktrack kr jao
            
        }
    
}

void findPath(int maze[][3],int n)
{
    int path[3][3]={0};
     findPath(maze,n,0,0,path);
}

int main(){
        int n=3;
        int maze[3][3]={{1,1,0},
                        {1,1,0},
                        {0,1,1}};
        findPath(maze,n);

        return 0;
    }