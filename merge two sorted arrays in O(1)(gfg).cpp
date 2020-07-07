// Function to merge two input arrays
// arr1[], arr2[]: input arrays
// n, m: size of arr1[] and arr2[] respectively
void merge(int a1[], int a2[], int n, int m) 
{ 
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