class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
            return 1.0;
        double ans=myPow(x,n/2);
        
        if(n<0)
            x=1/x;
        
        if(n&1)
            return ans*ans*x;
        else
            return ans*ans;
            
    }
};