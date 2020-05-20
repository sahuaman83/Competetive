#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<32;i++)
    {
        if(n<(1<<i))
        break;
    }
    
cout<<i<<endl;
// cout<<floor(log2(n)+1);    // we can use this to directly find the answer
    return 0;
}
