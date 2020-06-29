#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
// this program will print all paths
void findPath(int maze[][3],int n,int x,int y,int path [][3])
{
                                                    //**Important to see
    if(x<0 || x>=n || y<0 || y>=n || maze[x][y]==0  ) // yha par sath mein path[x][y]==1 wali condition
             return;                              // dalne par sirf ek path print ho rha kyuki if(x==n-1 && y==n-1) condition neche hai
                                                // isko upar dalte hi sare print hone lagengi kykuki last mein print krta hai stack ki wjah se
                                                // toh niche nahi jane de payega toh yha par condtion sabse upar wali or krkr nhi lga rhe
                                                // ek aur point agar yha par or ke sath condtion lgate hai toh print wale mein jo comment kr rkha hai na
                                                // usko krna pdega destination path agan zero krna pdega toh bhi sari path print ho jayegi 
        
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
            // path[x][y]=0;
            return;
       }
       
    
    if(maze[x][y]==1 && path[x][y]!=1)
    {
        path[x][y]=1;
    findPath(maze,n,x-1,y,path); //left
    findPath(maze,n,x+1,y,path); //right
    findPath(maze,n,x,y+1,path); //up
    findPath(maze,n,x,y-1,path); //down
        path[x][y]=0; // sare chal gye ek path mil gya ab yh step wpas pure pichle tak ke path zero kr dega wha tak zero
                     // krega jha par uske pass option the mudne ko par usne yh path choose krkr answer nikala
            //ab wo wha tak zero kr jayega backtrack krkr then jo dusra path nhi choose kiya tha wo explore krega
             // then wo maan lo final pura path de dega aur us chaurahe ke bhi khtam toh uske piche chaurahe tak backtrack krega
              // jiske pass option the aur paths ke
    }
}

void findPath(int maze[][3],int n)
{
    int path[3][3]={0};
     findPath(maze,n,0,0,path);
}

int main(){
        int n=3;
        int maze[3][3]={{1,1,1},
                        {1,1,0},
                        {0,1,1}};
        findPath(maze,n);

        return 0;
    }