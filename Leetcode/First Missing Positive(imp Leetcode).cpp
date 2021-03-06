/*
Given an unsorted integer array, find the smallest missing positive integer.

Example 1:

Input: [1,2,0]
Output: 3

Example 2:

Input: [3,4,-1,1]
Output: 2

Example 3:

Input: [7,8,9,11,12]
Output: 1

Note:

Your algorithm should run in O(n) time and uses constant extra space.
*/


class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            while(a[i]>=1 && a[i]<=n && a[i]!=a[a[i]-1])
            {
                swap(a[i],a[a[i]-1]);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(i!=a[i]-1)
                return i+1;
        }
        return n+1;
    }
};