int preced(char ch)
{
    if(ch=='^')
    return 3;
    if(ch=='/' || ch=='*')
    return 2;
    if(ch=='+' || ch=='-')
    return 1;
    
}
string infixToPostfix(string s)
{
    string t="";
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        if(isalpha(s[i]))
        t+=s[i];
        else
        if(s[i]=='(')
        st.push(s[i]);
        else
        {
            if(s[i]==')')
            {
                while(!st.empty() && st.top()!='(')
                {
                    t+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            if(s[i]=='*' || s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='^')
            {
                while(!st.empty() && st.top()!='(' && preced(s[i])<=preced(st.top()))
                {
                    t+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            
        }
    }
    while(!st.empty())
    {
        t+=st.top();
        st.pop();
    }
    return t;
}