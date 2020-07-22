/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void insert_stack(stack<int> &s,int x)
{
    if(s.empty())
    {
    s.push(x);
    return ;
    }
    
    if(x>=s.top())
    {
    s.push(x);
    return ;
    }
    
    int t=s.top();
    s.pop();
    
    insert_stack(s,x);
    
    s.push(t);
    
}
void sorted(stack<int> &s)
{
    if(s.size()==1)
    return;
    
    int x=s.top();
    s.pop();
    
    sorted(s);
    
    insert_stack(s,x);
}
void SortedStack :: sort()
{
   sorted(s);
   
}