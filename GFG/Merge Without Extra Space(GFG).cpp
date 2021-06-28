// Function to merge two input arrays
// arr1[], arr2[]: input arrays
// n, m: size of arr1[] and arr2[] respectively
void merge(int a[], int b[], int n, int m) 
{ 
    int gap=ceil((1.0)*(n+m)/2);
    m=m+n;
    while(gap!=0)
    {
        int i=0,j=gap;
        while(j<n && i<n)
        {
          if(a[i]>a[j])
          swap(a[i],a[j]);
          
          i++;
          j++;
        }
        while(j>=n && i<n && j<m)
        {
          if(a[i]>b[j-n])
          swap(a[i],b[j-n]);
          
          i++;
          j++;
        }
        while(j>=n && i>=n && j<m)
        {
          if(b[i-n]>b[j-n])
          swap(b[i-n],b[j-n]);
          
          i++;
          j++;
        }
        if(gap==1)
        break;
        gap=ceil((1.0)*gap/2); 
    }

    //OR another method below

    int i=n-1,j=0;
    while(i>=0 && j<m)
    {
        if(a1[i]>a2[j])
        {
            swap(a1[i],a2[j]);
            i--; j++;
        }
        else
        break;
    }
    sort(a1,a1+n);
    sort(a2,a2+m);
    
    
} 