
class Solution{
public:
    int *findTwoElement(int *a, int n) {
    int x=0,y=0,z=0;
    for(int i=0;i<n;i++)
    {
        x^=a[i];
        x^=(i+1);
    }
    int pos= x & ~(x-1);
    for(int i=0;i<n;i++)
    {
        if(pos & a[i])
        y^=a[i];
        else
        z^=a[i];

        if(pos & (i+1))
                y^=(i+1);
        else
                z^=(i+1);
    }
    bool f=0;
    int *ans = new int[2];
    for(int i=0;i<n;i++)
    {
        if(a[i]==y)
        {
            f=1;
            break;
        }
    }
    if(f)
    {
    ans[0]=y; ans[1]=z;
    }
    else
    {
    ans[0]=z; ans[1]=y;
    }
// cout<<ans[0]<<ans[1];
return ans;

    }
};