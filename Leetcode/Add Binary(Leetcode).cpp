/*Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.

Example 1:

Input: a = "11", b = "1"
Output: "100"

Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
*/
class Solution {
public:
    string addBinary(string a, string b) {
        int A=a.size();
        int B=b.size();
        if(A>B)
        {
            int d=A-B;
            string t1="";
            while(d--)
            {
                t1+='0';
            }
           t1+=b;
            b=t1;
            
        }
        if(A<B)
        {
            int d=B-A;
            string t1="";
            while(d--)
            {
                t1+='0';
            }
           t1+=a;
            a=t1;
        }
        cout<<a<<endl;
        cout<<b<<endl;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        
            string f="";
            string c="0";
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='1' && b[i]=='1' && c=="0")
            {
                cout<<1;
                c="1";
                f+="0";
            }
            else
            if(a[i]=='1' && b[i]=='1' && c=="1")
            {
                cout<<2;
                c="1";
                f+="1";
            }
            else
            if((a[i]=='0' && b[i]=='1' && c=="1" ) || (a[i]=='1' && b[i]=='0' && c=="1"))
            {
                cout<<3;
                c="1";
                f+="0";
            }
            else
            if((a[i]=='0' && b[i]=='1' && c=="0" ) || (a[i]=='1' && b[i]=='0' && c=="0"))
            {
                cout<<4;
                c="0";
                f+="1";
            }
            else
            if(a[i]=='0' && b[i]=='0' && c=="0" )
            {
                cout<<5;
                c="0";
                f+="0";
            }
            else
            if(a[i]=='0' && b[i]=='0' && c=="1" )
            {
                cout<<6;
                c="0";
                f+="1";
            }
            
            
        }
        if(c=="1")
            f+=c;
        reverse(f.begin(),f.end());
        
            return f;
    }
};