/*
Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

Example:

Input:  [1,2,1,3,2,5]
Output: [3,5]

Note:

    The order of the result is not important. So in the above example, [5, 3] is also correct.
    Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?
*/

class Solution {
public:
    vector<int> singleNumber(vector<int>& arr) {
        int n=arr.size();
        int res = 0;

	// take XOR of all array elements
	for (int i = 0; i < n; i++)
		res = res ^ arr[i];

	// find position of the rightmost set bit in res
	int k = log2(res & -res);

	// x and y are two odd appearing elements
	int x = 0, y = 0;

	// split the array into two sub-arrays
	for (int i = 0; i < n; i++)
	{
		// elements that have k'th bit 1
		if (arr[i] & (1 << k))
			x = x ^ arr[i];

		// elements that have k'th bit 0
		else
			y = y ^ arr[i];
	}

	return {x, y};
    }
};