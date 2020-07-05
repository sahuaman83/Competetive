void subarraySum(int arr[], int n, int s){
    
   int flg=0, j=0, i=0;
    long sum=0;
    while(i<=n){
        if(sum<s)
            sum+=arr[i++];
        else if(sum>s)
            sum-=arr[j++];
        if(sum==s){
            flg=1;
            break;
        }
    }
    if(flg==1)
        cout<<j+1<<" "<<i;
    else
        cout<<-1;