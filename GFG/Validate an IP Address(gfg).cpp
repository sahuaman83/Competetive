int isValid(char *ip) {
    int c=0;
    for(int i=0;ip[i]!='\0';i++)
    {
        c++;
    }
    if(c>15)
    return 0;
    else
    {
        vector<string> v;
        string str="";
        for(int i=0;ip[i];i++)
        {
            if(ip[i]!='.')
                str+=ip[i];
            else
            {
                v.push_back(str);   
                str="";
            }
        }
        v.push_back(str);
        
        if(v.size()!=4)
        return 0;
        for(int i=0;i<v.size();i++)
        {
            int len=v[i].length();
            if(len==0)
            return 0;
            if(len!=1 && v[i][0]=='0')
            return 0;
            for(int j=0; j<len; j++)
            {
                if(v[i][j]<'0' || v[i][j]>'9')
                 return 0;
            }
            int num=stoi(v[i]);
            if(num<0 || num>255)
            return 0;
        }
        return 1;
    }
}