Day 1

(min Heap)

Connect n ropes with minimum costs:
4, 3, 2, and 6

2 3 4 6 = 2+3->5 3 4 6 = 8 4 6 =12 6 =18

6 4 3 2 = 10 3 2 = 13 2 =15

10 + 13 + 15 = 38

30


2 3 4 6

2+3 =5

5 4 6

5+4=9

9 6

9+6=15

29


int m_cost(int c[],int n)
{
    priority_queue<int,vector<int>, greater<int>> pq(c,c+n);
    
     
     int fcost=0;                                                       (15)
      
    while(!pq.empty())
    {
        int f=pq.top();
        pq.pop();
        int s= pq.top();
        pq.pop();
        
        int sum=f+s;
        pq.push(sum);
        
        fcost+=sum;
        
    }
    return fcost;
     
}

(Problem solving and for optimised part have to use merging concept of merge Sort)

Find the minimum number of platforms required on the railway station?
arr[] = {9:00, 9:40, 9:50, 11:00} 
dep[] = {9:10, 12:00, 11:20, 11:30} 


int plat(int arr[],int dep[], int n)
{
    int plat=1,maxi=1;
    for (int i=0;i<n;i++){
        plat=1;
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]<dep[j] && arr[i]>arr[j]) || (arr[j]>arr[i] && arr[j]<dep[i]))
            plat++;
        }
        maxi=max(plat,maxi);
    }
    return maxi;
}



Day 2

(Topological Sort variation)



Day 3

(Digit DP)

Hello 

Question - Alphabets are mapped their corresponding number (a->1, b->2,....z->26). 
Given a string containing digits only (3122), how many possible alphabets combinations can be made from it?

3 -> c, 1 -> a, 2 -> b , 2 -> b  ; 3122 => cabb
3 -> c, 1 -> a, 22 -> v; 3122 => cav 
3 -> c, 12 - l; 2 -> b ; 3122 => clb

Answer = 3


int cnt_comb(string digit)
{
    int len = digit.size();
    int freq[len+1];                                3 1 2 2
    freq[0]=1;
    freq[1]=1;                                          index  1  2  3  4  5
                                                        freq   1  1  1  2  3
    if(len==0)
        return 0;
    if(len==1)
    {
        if(digit[0]=='0')
            return 0;
    }
    for(int i=2 ; i<=len ;i++)
    {
        freq[i]=0;
        if(digit[i-1]>'0')
        {
            freq[i]=freq[i-1];
        }
        if(digit[i-2]=='1' || (digit[i-2]=='2' && digit[i-1]<='6') )
        {
            freq[i]=freq[i]+freq[i-2];
        }
    }
    return freq[len];
    
}
