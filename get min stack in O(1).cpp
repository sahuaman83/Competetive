int _stack :: getMin()
{
   //Your code here
   if(!s.empty())
   return minEle;
   else return -1;
}
/*returns poped element from stack*/
int _stack ::pop()
{
    if(!s.empty()){
        int temp = s.top();
        s.pop();
        //Your code here
        if(temp <minEle){
            int to_ret = minEle;
            minEle = 2*minEle - temp;
            temp=to_ret;
        }
        return temp;
    }
    else return -1;
}
/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   if(s.empty()) minEle=x;
   else{
    if(x<minEle){
        int temp = x;
        x= 2*x - minEle;
        minEle = temp;
    }
   }
   s.push(x);
}