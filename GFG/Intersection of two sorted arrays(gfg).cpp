/* Function prints Intersection of arr1[] and arr2[] 
N is the number of elements in arr1[] 
M is the number of elements in arr2[] 
Return the array
*/
vector<int> printIntersection(int a1[], int a2[], int N, int M) 
{ 
    vector<int> v;
    int i=0,j=0;
    bool flag=0;
    int c=0;
    while(i<N && j<M)
    {
        if(a1[i]==a1[i+1])
        i++;
        if(a2[j]==a2[j+1])
        j++;
        if(a1[i]==a2[j])
        {
            flag=1;
            v.push_back(a1[i]);
            i++; j++;
        }
        else
        if(a1[i]<a2[j])
        i++;
        else
        if(a1[i]>a2[j])
        j++;
    }
    if(flag)
    return v;
    else
    return {-1};
}